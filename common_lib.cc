#include "include/common_lib.h"
uint64_t getSeconds()
{
    return std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::
                  now().time_since_epoch()).count(); 
}


// Get time stamp in milliseconds.
uint64_t getMillis()
{
    return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::
                  now().time_since_epoch()).count(); 
}

// Get time stamp in microseconds.
uint64_t getMicros()
{
    return std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::
                  now().time_since_epoch()).count();
    // return us; 
}

uint64_t getMillsDiff(uint64_t past) {
    uint64_t now = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::
                  now().time_since_epoch()).count();
    return now - past;
}

uint64_t getMicrosDiff(uint64_t past) {
    uint64_t now = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::
                  now().time_since_epoch()).count();
    return now - past;
}