#include <memory>
#include <string>

#include "notification_manager.hpp"


namespace gmock_sample
{

notification_manager::notification_manager(std::shared_ptr<notifier> _notifier)
	: notifier_(_notifier)
{
}


bool
notification_manager::has_notifications() const
{
	return this->notification_count_ > 0;
}


void
notification_manager::add(const std::string& notification)
{
	(void)notification;
	++this->notification_count_;
}


std::size_t
notification_manager::notification_count() const
{
	return this->notification_count_;
}

void
notification_manager::notify()
{
	this->notifier_->exec("stub");
	this->notification_count_ = 0;
}

} // gmock_sample.
