#include <stdio.h>
#include <string.h>

typedef enum { Debug, Info, Warning, Error, INVALID } LogLevel;

const char* levelNames[] = { "Debug", "Info", "Warning", "Error" };

char* logLevelToString(LogLevel level) {
    if (level >= Debug && level <= Error)
        return (char*)levelNames[level];
    return "Invalid";
}

LogLevel stringToLogLevel(char* str) {
    for (int i = Debug; i <= Error; i++) {
        if (strcmp(str, levelNames[i]) == 0)
            return (LogLevel)i;
    }
    return INVALID;
}

int main() {
    printf("%s\n", logLevelToString(Warning));
    printf("%d\n", stringToLogLevel("Info"));
    printf("%d\n", stringToLogLevel("Unknown"));
    return 0;
}