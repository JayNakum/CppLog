# [CppLog](https://github.com/JayNakum/CppLog) ![Star](https://img.shields.io/github/stars/JayNakum/CppLog?style=social)
A very basic header only C/C++ logging library.  

## Screenshots
![example](https://user-images.githubusercontent.com/45930809/192085591-249148c3-6738-420d-9f0d-82d82f74f4e3.png)

## Features
- Multiple types and levels of log messages.
- Log time, file and line number.

## Get Started
Include **CppLog.h** and directly use the functions
```cpp
LOG_DEBUG("Test");
LOG_INFO("Test");
LOG_WARNING("Test");
LOG_ERROR("Test");
LOG_CRITICAL("Test");
ASSERT(condition, "Test");
```
You can also define your preffered log level
```cpp
#define LOG_LEVEL DEBUG_LEVEL
#define LOG_LEVEL INFO_LEVEL
#define LOG_LEVEL WARNING_LEVEL
#define LOG_LEVEL ERROR_LEVEL
#define LOG_LEVEL CRITICAL_LEVEL
#define LOG_LEVEL ASSERT_LEVEL
```
for a better understanding see **Example.cpp**

## Future Plans
- Logging to a file

# How to contribute?
- Checkout the existing code base and try to find existing bugs or new features that can be added.
- Go to the [issues](https://github.com/JayNakum/CppLog/issues) tab, and check for existing issues or add new issues.
- Refer to [CONTRIBUTING.md](CONTRIBUTING)

### Developed by [Jay Nakum](https://jaynakum.github.io/).
