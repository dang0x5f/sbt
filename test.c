#define SBT_IMPLEMENTATION
#include "sbt.h"

void test01(void)
{
    start_sbt(NULL,NULL);
    end_sbt(NULL);
}

void test02(void)
{
    start_sbt("sbt_id","start");
    end_sbt("sbt_id");
}

int main(void)
{

    test01();
    test02();

    return(0);
}
