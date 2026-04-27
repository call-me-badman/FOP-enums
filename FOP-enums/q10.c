#include <stdio.h>

typedef enum { Success, NotFound, Error } StatusCode;

void printStatusCode(StatusCode s) {
    if (s == Success)       printf("Status: Success\n");
    else if (s == NotFound) printf("Status: Not Found\n");
    else if (s == Error)    printf("Status: Error\n");
}

int main() {
    printStatusCode(Success);
    printStatusCode(NotFound);
    printStatusCode(Error);
    return 0;
}