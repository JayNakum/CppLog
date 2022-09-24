#define LOG_LEVEL DEBUG_LEVEL 
/* Available Levels:
    DEBUG_LEVEL
    INFO_LEVEL
    WARNING_LEVEL
    ERROR_LEVEL
    CRITICAL_LEVEL
    ASSERT_LEVEL
*/

#include "Log.h"

int main()
{
    LOG_DEBUG("Debug Message");
    LOG_INFO("Info Message");
    LOG_WARNING("Warning Message");
    LOG_ERROR("Error Message");
    LOG_CRITICAL("Critical Message");

    int i = 5;
    ASSERT(i > 5, "Assert Message"); // checks if (i > 5) then only prints the "Assert Message"
}