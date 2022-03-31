#ifndef LOG_HPP
#define LOG_HPP

#include <iostream>

void log_to_console(const std::string& str);

#define LOG(...) log_to_console(__VA_ARGS__)

#endif
