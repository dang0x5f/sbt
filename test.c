#define SBT_IMPLEMENTATION
#include "sbt.h"

void test01(void)
{
    printf("test01\n");

    start_sbt();
    end_sbt();

    printf("\n");
}

void test02(void)
{
    printf("test02\n");

    start_sbt_v(NULL,NULL);
    end_sbt_v(NULL);

    printf("\n");
}

void test03(void)
{
    printf("test03\n");

    start_sbt_v("sbt_id","start");
    end_sbt_v("sbt_id");

    printf("\n");
}

int main(void)
{
    test01();
    test02();
    test03();

    return(0);
}
