#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "phone_book.hpp"

using namespace gmock_sample;
using namespace ::testing;


class phone_book_use : public ::testing::Test {
protected:
	phone_book pb;
};


TEST_F(phone_book_use, is_initialy_empty)
{
	ASSERT_TRUE(pb.empty());
}


TEST_F(phone_book_use, is_not_empty_after_item_inserted)
{
	pb.insert("povilas", "37065316000");

	ASSERT_FALSE(pb.empty());
}


TEST_F(phone_book_use, has_several_elements_after_multiple_inserts)
{
	pb.insert("povilas", "37065316000");
	pb.insert("andrius", "37065316001");

	ASSERT_THAT(pb.size(), Gt(static_cast<size_t>(1)));
}


TEST_F(phone_book_use, contains_inserted_elements)
{
	pb.insert("povilas", "37065316000");
	pb.insert("andrius", "37065316001");

	ASSERT_THAT(pb.get_nr("andrius"), Eq(std::string("37065316001")));
	ASSERT_THAT(pb.get_nr("povilas"), Eq(std::string("37065316000")));
}


TEST_F(phone_book_use, has_nr_returns_false_when_not_found)
{
	ASSERT_FALSE(pb.has_nr("my number"));
}


TEST_F(phone_book_use, has_nr_returns_true_when_contact_exists)
{
	pb.insert("povilas", "37065316001");

	ASSERT_TRUE(pb.has_nr("povilas"));
}
