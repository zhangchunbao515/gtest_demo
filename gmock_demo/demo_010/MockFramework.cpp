//
// Created by diego on 5/5/15.
//

#include <string>
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace diego {
    class Framework {
    public:
        Framework(){};
        virtual ~Framework(){};

        virtual void scheduleMaster() = 0;
        virtual std::string registerMaster() = 0;
        virtual void scheduleSlave( const std::string& master_key, const int count ) = 0;
    };

    class Scheduler {
    public:
        Scheduler( Framework* f ){
            framework = f;
        };

        virtual ~Scheduler(){}

        void schedule( void ){
            framework->scheduleMaster();
            std::string key = framework->registerMaster();
            framework->scheduleSlave( key, 1 );
        }

    private:
        Framework* framework;
    };
}

class MockFramework: public diego::Framework {
public:
    MockFramework(){};
    virtual ~MockFramework(){};
    MOCK_METHOD0( scheduleMaster, void() );
    MOCK_METHOD0( registerMaster, std::string() );
    MOCK_METHOD2( scheduleSlave, void( const std::string& key, const int count ) );
};

TEST( MockFrameworkTest, testProcess ){
    MockFramework mf;

    EXPECT_CALL( mf, scheduleMaster() ).Times( 1 );
    EXPECT_CALL( mf, registerMaster() ).Times( 1 );
    EXPECT_CALL( mf, scheduleSlave( "", 1 ) ).Times( 1 );

    diego::Scheduler sc(&mf);
    sc.schedule();
}