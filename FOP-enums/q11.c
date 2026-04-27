#include <stdio.h>

typedef enum {
    OK = 200,
    BadRequest = 400,
    NotFound = 404,
    InternalServerError = 500
} HttpStatus;

void categorize(int code) {
    if (code >= 200 && code < 300)
        printf("%d: Success\n", code);
    else if (code >= 400 && code < 500)
        printf("%d: Client Error\n", code);
    else if (code >= 500 && code < 600)
        printf("%d: Server Error\n", code);
    else
        printf("%d: Unknown\n", code);
}

int main() {
    categorize(OK);
    categorize(BadRequest);
    categorize(NotFound);
    categorize(InternalServerError);
    categorize(301);
    return 0;
}