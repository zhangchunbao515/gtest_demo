#include "google/gtest/include/gtest/gtest.h"
#include "google/gmock/include/gmock/gmock.h"

#include <chrono>
#include <thread>

float sum(float a, float b) 
{
	return a+b;
}


//=================================

TEST(Sum, Normal) {
	//Using a matcher here from gmock
	using namespace testing;
	
	auto a = 2.f;
	auto b = 3.f;
	
  	EXPECT_THAT(   sum(a, b),  FloatEq(a+b)   );
}


TEST(Libstdcxx, Trying_to_break_it) {
	//Using a matcher here from gmock
	
	typedef std::chrono::milliseconds ms;
	auto duration  = ms(1000);
	
	auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for( duration );
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end-start;
	
	// we would expect the elapsed time to be fractionally longer than the specified sleep time
  	EXPECT_GT(   elapsed.count(),  duration.count()  );
}


//=================================


int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}