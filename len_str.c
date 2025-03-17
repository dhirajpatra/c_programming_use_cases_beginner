# include <stdio.h>

// Write a program to find the length of a string without using the library function.
int main() {
    char *name;
    int length = 0;

    printf("Enter your name: ");
    scanf("%s", name);

    while (name[length] != '\0') {
        printf("%c\n", name[length]);
        length++;
    }
    printf("The length of the string is: %d\n", length);
    printf("The address of the string is: %p\n", name);

    return 0;
}