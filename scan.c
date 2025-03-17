# include <stdio.h>

int main() {
    printf("Enter a line and end with a period: ");
    char name[100];
    scanf("%[^.]", name);
    printf("You entered: %s\n", name);

    return 0;
}