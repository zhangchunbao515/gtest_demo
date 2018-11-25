#include <cstddef>
#include <memory>

#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "notification_manager.hpp"


using namespace gmock_sample;
using namespace ::testing;

class notifier_mock : public notifier {
public:
	MOCK_METHOD1(exec, void(const std::string&));
};


class notification_manager_use : public ::testing::Test {
protected:
	// Production notifiers might depend on network or might send SMS
	// notifications. That's why we are creating notifier mock object -
	// to fasten the tests and isolate tested unit (notification manager)
	// environment.
	std::shared_ptr<notifier_mock> notifier_{std::make_shared<notifier_mock>()};
	notification_manager nman{notifier_};
};


TEST_F(notification_manager_use, initialy_has_no_notifications)
{
	ASSERT_FALSE(nman.has_notifications());
}


TEST_F(notification_manager_use, has_notifications_after_add)
{
	// Given.
	// notification_manager nman;
	// declared in notification_manager_use class

	// When.
	nman.add("Meeting at 10:00 am");

	// Then.
	ASSERT_TRUE(nman.has_notifications());
}


TEST_F(notification_manager_use, add_increases_notification_count)
{
	nman.add("Notification1");
	nman.add("Notification2");

	ASSERT_THAT(nman.notification_count(), Gt(static_cast<std::size_t>(1)));
}


TEST_F(notification_manager_use, uses_notifier_on_notify)
{
	EXPECT_CALL(*notifier_, exec(_)).Times(1);

	ASSERT_NO_THROW(nman.notify());
	ASSERT_FALSE(nman.has_notifications());
}
