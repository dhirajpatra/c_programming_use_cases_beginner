
// ===== MODULE 1: Introduction to C =====

// 1. Basic C Program Structure
#include <stdio.h>
int main() {
    printf("Hello, World!\n");
    return 0;
}

// 2. Variables and Constants
#include <stdio.h>
int main() {
    int age = 25;           // Variable
    const float PI = 3.14159; // Constant
    char grade = 'A';
    
    printf("Age: %d\n", age);
    printf("PI: %.2f\n", PI);
    printf("Grade: %c\n", grade);
    return 0;
}

// 3. Input/Output Statements
#include <stdio.h>
int main() {
    int num;
    char name[50];
    
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Hello %s, your number is %d\n", name, num);
    return 0;
}

// ===== MODULE 2: Operators and Control Structures =====

// 4. Operators in C
#include <stdio.h>
int main() {
    int a = 10, b = 3;
    
    printf("Arithmetic: %d + %d = %d\n", a, b, a + b);
    printf("Relational: %d > %d = %d\n", a, b, a > b);
    printf("Logical: %d && %d = %d\n", a, b, a && b);
    printf("Bitwise: %d & %d = %d\n", a, b, a & b);
    return 0;
}

// 5. Type Conversion and Typecasting
#include <stdio.h>
int main() {
    int x = 10;
    float y = 3.5;
    
    printf("Implicit: %d + %.1f = %.1f\n", x, y, x + y);
    printf("Explicit: (int)%.1f = %d\n", y, (int)y);
    return 0;
}

// 6. Decision Control - If-else
#include <stdio.h>
int main() {
    int marks = 85;
    
    if (marks >= 90) {
        printf("Grade A\n");
    } else if (marks >= 80) {
        printf("Grade B\n");
    } else {
        printf("Grade C\n");
    }
    return 0;
}

// 7. Switch Statement
#include <stdio.h>
int main() {
    int choice = 2;
    
    switch (choice) {
        case 1:
            printf("Option 1 selected\n");
            break;
        case 2:
            printf("Option 2 selected\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}

// 8. For Loop
#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) {
        printf("Count: %d\n", i);
    }
    return 0;
}

// 9. While Loop
#include <stdio.h>
int main() {
    int i = 1;
    while (i <= 3) {
        printf("While loop: %d\n", i);
        i++;
    }
    return 0;
}

// 10. Do-While Loop
#include <stdio.h>
int main() {
    int i = 1;
    do {
        printf("Do-while: %d\n", i);
        i++;
    } while (i <= 3);
    return 0;
}

// 11. Nested Loops
#include <stdio.h>
int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 2; j++) {
            printf("i=%d, j=%d\n", i, j);
        }
    }
    return 0;
}

// 12. Break and Continue
#include <stdio.h>
int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) continue;  // Skip 5
        if (i == 8) break;     // Exit at 8
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

// 13. Goto Statement
#include <stdio.h>
int main() {
    int i = 1;
    
    start:
    printf("Number: %d\n", i);
    i++;
    if (i <= 3) goto start;
    
    return 0;
}

// ===== MODULE 3: Functions and Arrays =====

// 14. Function Definition and Call
#include <stdio.h>

int add(int a, int b) {  // Function definition
    return a + b;
}

int main() {
    int result = add(5, 3);  // Function call
    printf("Sum: %d\n", result);
    return 0;
}

// 15. Function with Parameters
#include <stdio.h>

void greet(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    greet("Alice");
    return 0;
}

// 16. Scope of Variables
#include <stdio.h>

int global_var = 100;  // Global variable

void test() {
    int local_var = 50;  // Local variable
    printf("Local: %d, Global: %d\n", local_var, global_var);
}

int main() {
    test();
    return 0;
}

// 17. Storage Classes
#include <stdio.h>

void counter() {
    static int count = 0;  // Static variable
    count++;
    printf("Count: %d\n", count);
}

int main() {
    counter();  // Count: 1
    counter();  // Count: 2
    return 0;
}

// 18. Recursive Function
#include <stdio.h>

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    printf("5! = %d\n", factorial(5));
    return 0;
}

// 19. Array Declaration and Access
#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    printf("First element: %d\n", arr[0]);
    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

// 20. Array Operations
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    
    // Sum of array elements
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);
    return 0;
}

// 21. Passing Arrays to Functions
#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    printArray(numbers, 5);
    return 0;
}

// ===== MODULE 4: 2D Arrays and Strings =====

// 22. Two-Dimensional Arrays
#include <stdio.h>
int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    printf("Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// 23. Operations on 2D Arrays
#include <stdio.h>
int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int c[2][2];
    
    // Matrix addition
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    printf("Sum matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// 24. Passing 2D Arrays to Functions
#include <stdio.h>

void display2D(int arr[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    display2D(matrix, 2);
    return 0;
}

// 25. Sorting (Bubble Sort)
#include <stdio.h>
int main() {
    int arr[] = {64, 34, 25, 12, 22};
    int n = 5;
    
    // Bubble sort
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

// 26. String Declaration and Reading
#include <stdio.h>
int main() {
    char str1[20] = "Hello";
    char str2[20];
    
    printf("Enter a string: ");
    scanf("%s", str2);
    
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    return 0;
}

// 27. String Functions
#include <stdio.h>
#include <string.h>
int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[40];
    
    strcpy(str3, str1);        // Copy
    strcat(str3, " ");         // Concatenate
    strcat(str3, str2);
    
    printf("Length of str1: %ld\n", strlen(str1));
    printf("Concatenated: %s\n", str3);
    printf("Compare result: %d\n", strcmp(str1, str2));
    return 0;
}

// ===== MODULE 5: Strings, Pointers, and Structures =====

// 28. String Operations
#include <stdio.h>
#include <string.h>
int main() {
    char source[] = "Programming";
    char dest[20];
    
    // Manual string copy
    int i = 0;
    while (source[i] != '\0') {
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0';
    
    printf("Original: %s\n", source);
    printf("Copied: %s\n", dest);
    return 0;
}

// 29. Array of Strings
#include <stdio.h>
int main() {
    char names[3][20] = {"Alice", "Bob", "Charlie"};
    
    printf("Names:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s\n", i+1, names[i]);
    }
    return 0;
}

// 30. Pointer Declaration and Usage
#include <stdio.h>
int main() {
    int num = 42;
    int *ptr = &num;  // Pointer declaration
    
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);
    return 0;
}

// 31. Pointer Arithmetic
#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    
    printf("Array elements using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;
}

// 32. Pointers with Functions
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    printf("Before swap: x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("After swap: x=%d, y=%d\n", x, y);
    return 0;
}

// 33. Structure Declaration and Usage
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s1 = {"Alice", 20, 85.5};
    
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.1f\n", s1.marks);
    return 0;
}

// 34. Array of Structures
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point points[3] = {{1, 2}, {3, 4}, {5, 6}};
    
    printf("Points:\n");
    for (int i = 0; i < 3; i++) {
        printf("Point %d: (%d, %d)\n", i+1, points[i].x, points[i].y);
    }
    return 0;
}

// 35. Pointers to Structures
#include <stdio.h>

struct Employee {
    char name[30];
    int id;
    float salary;
};

int main() {
    struct Employee emp = {"John", 101, 50000.0};
    struct Employee *ptr = &emp;
    
    printf("Using pointer:\n");
    printf("Name: %s\n", ptr->name);
    printf("ID: %d\n", ptr->id);
    printf("Salary: %.2f\n", ptr->salary);
    return 0;
}

// ===== PRACTICAL EXAMPLES =====

// 36. Mechanical Energy Calculator
#include <stdio.h>
int main() {
    float mass, height, velocity;
    float potential, kinetic, total;
    
    printf("Enter mass (kg): ");
    scanf("%f", &mass);
    printf("Enter height (m): ");
    scanf("%f", &height);
    printf("Enter velocity (m/s): ");
    scanf("%f", &velocity);
    
    potential = mass * 9.8 * height;
    kinetic = 0.5 * mass * velocity * velocity;
    total = potential + kinetic;
    
    printf("Mechanical Energy = %.2f J\n", total);
    return 0;
}

// 37. Unit Conversion
#include <stdio.h>
int main() {
    float km, meters, centimeters;
    
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    
    meters = km * 1000;
    centimeters = km * 100000;
    
    printf("%.2f km = %.2f m = %.2f cm\n", km, meters, centimeters);
    return 0;
}

// 38. Character Classification
#include <stdio.h>
int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase letter\n");
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase letter\n");
    } else {
        printf("Special character\n");
    }
    return 0;
}

// 39. Matrix Multiplication
#include <stdio.h>
int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];
    
    // Matrix multiplication
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    printf("Result:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// 40. Statistical Calculations with Pointers
#include <stdio.h>
#include <math.h>

void calculate(int *arr, int n, float *sum, float *mean, float *stddev) {
    *sum = 0;
    for (int i = 0; i < n; i++) {
        *sum += arr[i];
    }
    *mean = *sum / n;
    
    float variance = 0;
    for (int i = 0; i < n; i++) {
        variance += (arr[i] - *mean) * (arr[i] - *mean);
    }
    *stddev = sqrt(variance / n);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    float sum, mean, stddev;
    
    calculate(arr, n, &sum, &mean, &stddev);
    
    printf("Sum: %.2f\n", sum);
    printf("Mean: %.2f\n", mean);
    printf("Standard Deviation: %.2f\n", stddev);
    return 0;
}

