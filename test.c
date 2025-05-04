#define SBT_IMPLEMENTATION
#include "sbt.h"

int main(void)
{
    start_sbt();

    end_sbt("sbt_id");

    return(0);
}
