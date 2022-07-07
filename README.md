# [CppLog](https://github.com/JayNakum/CppLog)
A very basic header only C++ logging library.  

### Log Format
```
[current time]: Message
```
Message       | Color  
:-------------| :----------------  
trace         | White  
info          | Green  
warning       | Yellow  
error         | Red  
critical      | Yellow Background  

![example screenshot](https://user-images.githubusercontent.com/45930809/177749151-4ab01926-ba84-443d-9b99-197b170bd7fd.png)

## Future Plans
- Allow user to set a pattern format.
- Allow user to store logs in a txt file
  - Daily log files
  - log message + log description

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


### [src/Example.cpp](https://github.com/JayNakum/CppLog/blob/main/src/Example.cpp)
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
### Developed by [Jay Nakum](https://jaynakum.github.io/).
