
#include <stdio.h>

enum FileAccess {
    Read = 1,
    Write = 2,
    Execute = 4
};

int main() {
    int permission = Read | Write;  // combine permissions

    if (permission & Write) {
        printf("Write permission is included\n");
    } else {
        printf("Write permission is NOT included\n");
    }

    return 0;
}
