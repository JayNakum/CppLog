# CppLog
A very basic header only C++ logging library.  

### Log Format
```
[current time]: Message
```
Message       | Color
------------- | -------------
trace         | White
info          | Green
warning       | Yellow
error         | Red
critical      | Yellow Background

## How to use?

It has 5 different log levels : 
- Trace
- Info
- Warning
- Error
- Critical

You can filter out your log messages based on the level using
```
log.setLevel(LevelInfo);
```
```
if(LevelTrace)
  displays all the log messages
if(LevelInfo)
  displays Info, Warning, Error, Critical
if(LevelWarning)
  displays Warning, Error, Critical
if(LevelError)
  displays Error, Critical
if(LevelCritical)
  displays Critical
```


## [Example](https://github.com/JayNakum/CppLog/blob/main/src/Example.cpp)
```
#include "Log.h"

int main()
{
    Log log;

    log.trace("Trace Message");
    log.info("Info Message");
    log.warning("Warning Message");
    log.error("Error Message");
    log.critical("Critical Message");
}
```
