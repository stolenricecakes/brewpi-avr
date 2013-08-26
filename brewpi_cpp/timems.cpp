
#include "stdint.h"
#include "timems.h"

static msec_t startupMillis = time_ms();

msec_t millisSinceStartup()
{
    return time_ms()-startupMillis;
}
