# include <stdio.h>

int main() {
    int a = 10;
    int *p;
    p = &a;
    printf("The value of a is: %d\n", a);
    printf("The address of a is: %p\n", &a);
    printf("The value of p is: %p\n", p);
    printf("The value of *p is: %d\n", *p);
    p = p + 1;
    printf("The value of p is: %p\n", p);
    printf("The value of *p is: %d\n", *p); 

    return 0;
}