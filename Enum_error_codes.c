#include <stdio.h>

enum ErrorCode{
    OK,
    FileNotFound,
    AccessDenied
};

void print_status(enum ErrorCode error_code){
    switch(error_code){
        case OK:
        printf("OK\n");
        break;
        case FileNotFound:
        printf("File Not Found\n");
        break;
        case AccessDenied:
        printf("Acess Denied");
        break;
        default:
        printf("Unknown error\n");
    }
}

int main(){
    print_status(FileNotFound);
    return 0;
}