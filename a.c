# include <stdio.h>


int main() {
    char name[10];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Reads up to 9 characters
    printf("%zu", sizeof(name));
    printf("Hello, %s!\n", name);

    return 0;
}