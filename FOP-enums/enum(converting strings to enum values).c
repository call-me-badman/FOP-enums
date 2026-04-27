#include <stdio.h>
#include <string.h>

enum Colors { Red, Green, Blue };

int main() {
    char input[20];
    printf("Enter a color: ");
    scanf("%s", input);

    enum Colors color;

    if (strcmp(input, "Red") == 0) {
        color = Red;
    } else if (strcmp(input, "Green") == 0) {
        color = Green;
    } else if (strcmp(input, "Blue") == 0) {
        color = Blue;
    } else {
        printf("Invalid color\n");
        return 0;
    }

    printf("Enum value: %d\n", color);

    return 0;
}
