**Input devices** are hardware components that allow users to interact with a computer or other digital systems. They can be classified into several categories based on their functionality:

 **1\. Pointing Devices:**  
   \- Mouse: Used to control the cursor on the screen.  
   \- Trackball: Similar to a mouse but with a ball that is rotated to move the cursor.  
   \- Touchpad: Commonly found on laptops, it allows users to move the cursor by sliding their fingers on the pad.  
   \- Graphics Tablet: Used by artists to draw directly onto the screen.

 **2\. Keyboards:**  
   \- Standard Keyboard: The most common type, used for typing text and executing commands.  
   \- Wireless Keyboard: A keyboard that connects to the computer via Bluetooth or RF (radio frequency) without the need for a physical cable. It offers greater flexibility and reduces clutter on the desk.  
   \- Ergonomic Keyboard: Designed to reduce strain and improve comfort during prolonged use.

 **3\. Scanning Devices:**  
   \- Scanner: Converts physical documents into digital format.  
   \- Barcode Reader: Reads barcodes to retrieve product information.  
   \- QR Code Reader: Scans QR codes to access information or links.

 **4\. Audio Input Devices:**  
   \- Microphone: Captures sound and converts it into digital data.  
   \- MIDI Keyboard: Used for creating and editing music.

 **5\. Biometric Devices:**  
   \- Fingerprint Scanner: Reads fingerprints for authentication.  
   \- Retina Scanner: Scans the retina for identification purposes.

 **6\. Gaming Devices:**  
   \- Joystick: Used for controlling movements in games.  
   \- Gamepad: A handheld controller with buttons and joysticks for gaming.  
   \- Steering Wheel: Used for racing games to simulate driving.

 **7\. Optical Devices:**  
   \- Webcam: Captures video and images for video conferencing or recording.  
   \- Digital Camera: Captures high-quality images and videos.

 **8\. Touchscreen Devices:**  
   \- Touchscreen: Allows users to interact directly with the display by touching it.

 **9\. Specialized Input Devices:**  
   \- Light Pen: Used to draw or select objects on the screen.  
   \- Stylus: A pen-like device used for drawing or writing on touchscreens.

 **Wireless Keyboard:**  
A wireless keyboard is a type of keyboard that connects to a computer or other device without the need for a physical cable. It typically uses Bluetooth or RF (radio frequency) technology to communicate with the device. Wireless keyboards offer several advantages:

\- Portability: Easy to move around without being tethered by a cable.  
\- Reduced Clutter: Eliminates the need for cables, making the workspace cleaner.  
\- Flexibility: Can be used from a distance, allowing for more comfortable positioning.

Wireless keyboards usually require batteries or rechargeable power sources and may come with a USB dongle that plugs into the computer to establish a connection. They are widely used in both home and office environments, as well as in setups where a clean, cable-free workspace is desired.

\===================================================================

**Compiling and executing a C program involves several steps**, each of which transforms the human-readable source code into machine-executable instructions. Here’s a brief explanation of the process:

 **1\. Writing the Source Code:**  
   \- The programmer writes the C program in a text editor and saves it with a \`.c\` extension (e.g., \`program.c\`). This file contains the source code written in the C programming language.

 **2\. Preprocessing:**  
   \- The preprocessor handles directives like \`\#include\`, \`\#define\`, and \`\#ifdef\`. It performs tasks such as including header files, macro expansion, and conditional compilation.  
   \- The output of this stage is a single file with all the necessary code and headers included, often referred to as the preprocessed source code.

 **3\. Compilation:**  
   \- The compiler (e.g., \`gcc\`) takes the preprocessed source code and translates it into assembly language specific to the target machine's architecture.  
   \- The compiler also performs syntax checking and generates error messages if there are any issues in the code.

 **4\. Assembly:**  
   \- The assembler converts the assembly language code into machine code (binary code), which consists of object code (\`program.o\` or \`program.obj\`). This is a low-level representation of the program that the machine can understand.

 **5\. Linking:**  
   \- The linker combines the object code of the program with the object code of library functions (e.g., \`printf\`, \`scanf\`) and other dependencies to create a single executable file (\`program.exe\` on Windows or \`a.out\` on Unix/Linux).  
   \- The linker resolves references to external functions and ensures that all parts of the program are correctly connected.

 **6\. Loading:**  
   \- The loader loads the executable file into memory (RAM) so that the CPU can execute it. This involves setting up the program's runtime environment, including memory allocation and initializing variables.

 **7\. Execution:**  
   \- The CPU (Central Processing Unit) executes the machine code instructions in the loaded program. The program runs, performs its tasks, and produces the desired output.

 **Summary of Steps:**  
1\. Source Code → Preprocessing → Preprocessed Code  
2\. Preprocessed Code → Compilation → Assembly Code  
3\. Assembly Code → Assembly → Object Code  
4\. Object Code → Linking → Executable File  
5\. Executable File → Loading → Execution

 Example Using \`gcc\`:  
If you have a C program saved as \`program.c\`, you can compile and execute it using the following commands in a terminal:

\`\`\`bash  
gcc program.c \-o program  \# Compiles and links the program, creating an executable named 'program'  
./program                \# Executes the program  
\`\`\`

This process is automated by the compiler and operating system, but understanding each step helps in debugging and optimizing C programs.

\================================================================

**The structure of a C program** is organized and follows a specific format to ensure clarity, modularity, and proper execution. Below is an explanation of the key components of a C program, followed by an example to illustrate these components.

\---

 Key Components of a C Program:

**1\. Preprocessor Directives:**  
   \- These are instructions for the preprocessor, which is executed before the actual compilation.  
   \- Commonly used directives include:  
     \- \`\#include\`: Includes header files (e.g., \`\#include \<stdio.h\>\` for standard input/output functions).  
     \- \`\#define\`: Defines macros or constants.

**2\. Main Function:**  
   \- Every C program must have a \`main()\` function, which serves as the entry point of the program.  
   \- The execution of the program begins and ends within the \`main()\` function.  
   \- Syntax: \`int main() { ... }\` or \`int main(void) { ... }\`.

**3\. Variable Declarations:**  
   \- Variables are declared to store data used in the program.  
   \- They must be declared before they are used, specifying their data type (e.g., \`int\`, \`float\`, \`char\`).

**4\. Statements and Expressions:**  
   \- These are the instructions that perform operations, such as arithmetic calculations, input/output, and control flow (e.g., \`if\`, \`for\`, \`while\`).

**5\. Comments:**  
   \- Comments are used to explain the code and improve readability.  
   \- Single-line comments start with \`//\`, and multi-line comments are enclosed in \`/\* ... \*/\`.

**6\. Functions:**  
   \- Functions are blocks of code that perform specific tasks.  
   \- They can be user-defined or part of the standard library (e.g., \`printf()\`, \`scanf()\`).

**7\. Return Statement:**  
   \- The \`main()\` function typically ends with a \`return 0;\` statement, indicating successful execution. A non-zero value indicates an error.

\---

 Example of a C Program:

\`\`\`c  
\#include \<stdio.h\>  // Preprocessor directive to include the standard input/output library

// Function declaration (optional in this case)  
int add(int a, int b);

int main() {  // Main function, the entry point of the program  
    // Variable declarations  
    int num1 \= 5, num2 \= 10, sum;

    // Function call to add two numbers  
    sum \= add(num1, num2);

    // Output the result  
    printf("The sum of %d and %d is %d\\n", num1, num2, sum);

    return 0;  // Indicates successful execution  
}

// User-defined function to add two numbers  
int add(int a, int b) {  
    return a \+ b;  // Returns the sum of a and b  
}  
\`\`\`

\---

 Output of the Program:  
\`\`\`  
The sum of 5 and 10 is 15  
\`\`\`

\---  
\=====================================================================

**This structure ensures that the program is well-organized**, easy to understand, and functions correctly.

// Online C compiler to run C program online  
\#include \<stdio.h\>  // Preprocessor directive for input/output functions

// Define a struct to represent a student  
struct Student {  
    char name\[50\];  // Student's name  
    int rollNumber; // Student's roll number  
    float marks;    // Student's marks  
};

// Function to display student details  
void displayStudent(struct Student s) {  
    printf("Name: %s\\n", s.name);  
    printf("Roll Number: %d\\n", s.rollNumber);  
    printf("Marks: %.2f\\n", s.marks);  
}

int main() {  // Main function, entry point of the program  
    // Declare a variable of type struct Student  
    struct Student students\[2\];  
    int i;  
      
    // Loop through all students  
    for (i \= 0; i \< 2; i++) {  
        // Input student details  
        printf("Enter student name: ");  
        scanf(" %\[^\\n\]", students\[i\].name);  // Read the name (including spaces)

        printf("Enter roll number: ");  
        scanf("%d", \&students\[i\].rollNumber);  // Read the roll number

        printf("Enter marks: ");  
        scanf("%f", \&students\[i\].marks);  // Read the marks  
    }  
      
    // Display student details using the function  
    printf("\\nStudent Details:\\n");  
    displayStudent(students\[0\]);

    return 0;  // Indicates successful execution  
}  
   
\==============================================================  
**Working of a Printer and an LCD Monitor**

Below is a detailed explanation of how a printer and an LCD monitor work, along with conceptual sketches to illustrate their functioning.

\---

**1\. Working of a Printer**

Printers are output devices that produce hard copies of digital documents or images. The most common types of printers are inkjet printers and laser printers. Here, we’ll focus on the inkjet printer.

 **How an Inkjet Printer Works:**  
1\. Input: The printer receives data (text or images) from a computer or other device.  
2\. Processing: The printer’s processor interprets the data and converts it into a format that can be printed.  
3\. Printing Mechanism:  
   \- The print head moves back and forth across the paper.  
   \- Tiny nozzles in the print head spray microscopic droplets of ink onto the paper.  
   \- The ink is absorbed by the paper, creating the desired text or image.  
4\. Output: The printed document or image is ejected from the printer.

 Sketch of an Inkjet Printer:  
\`\`\`  
\+---------------------------+  
|         Printer           |  
|                           |  
|  \+---------------------+  |  
|  |   Print Head        |  |  
|  | \+---+---+---+---+   |  |  
|  | | N | N | N   |  |  (N \= Nozzle of Red, Blue, Green)  
|  | \+---+---+---+---+   |  |  
|  \+---------|-----------+  |  
|            |              |  
|            v              |  
|  \+---------------------+  |  
|  |       Paper         |  |  
|  \+---------------------+  |  
\+---------------------------+  
\`\`\`

\---

**2\. Working of an LCD Monitor**

An LCD (Liquid Crystal Display) monitor is an output device that displays visual information from a computer or other devices. It uses liquid crystals to control the passage of light and produce images.

 How an LCD Monitor Works:  
1\. Backlight: The LCD panel is illuminated by a backlight (usually LED-based).  
2\. Liquid Crystal Layer: Liquid crystals are sandwiched between two layers of polarized glass. These crystals can twist or untwist when an electric current is applied, controlling the amount of light that passes through.  
3\. Color Filters: Each pixel on the screen is divided into three sub-pixels (red, green, and blue). By varying the intensity of light passing through these sub-pixels, the monitor can produce a wide range of colors.  
4\. Pixels: The screen is made up of millions of tiny pixels, each controlled individually to form the final image.  
5\. Output: The processed image is displayed on the screen.

 Sketch of an LCD Monitor:  
\`\`\`  
\+---------------------------+  
|       LCD Monitor         |  
|                           |  
|  \+---------------------+  |  
|  |   Polarized Glass   |  |  
|  \+---------------------+  |  
|  | Liquid Crystal Layer|  |  
|  \+---------------------+  |  
|  |   Color Filters     |  |  
|  |     R   G   B         |  |  
|  \+---------------------+  |  
|  |   Polarized Glass  |  |  
|  \+---------------------+  |  
|  |      Backlight      |  |  
|  \+---------------------+  |  
\+---------------------------+  
\`\`\`

\---

 **Key Differences Between a Printer and an LCD Monitor:**  
| Feature          | Printer                          | LCD Monitor                     |  
|----------------------|--------------------------------------|-------------------------------------|  
| Output Type      | Hard copy (physical document/image)  | Soft copy (displayed on screen)     |  
| Technology       | Inkjet, Laser, Dot Matrix, etc.      | Liquid Crystal Display (LCD)        |  
| Usage            | Produces physical copies             | Displays real-time visual output    |  
| Components       | Print head, ink cartridges, paper    | Liquid crystals, backlight, pixels  |

\---

 Summary:  
\- Printer: Converts digital data into physical copies using ink or toner.  
\- LCD Monitor: Displays digital data on a screen using liquid crystals and backlighting.

Both devices are essential for interacting with digital systems, but they serve different purposes: printers produce tangible output, while monitors provide real-time visual feedback.

\=================================================================  
 **What are Variables?**

In programming, a variable is a named storage location in memory that holds a value. Variables are used to store data that can be manipulated and retrieved during the execution of a program. Each variable has:  
\- A name (identifier) to refer to it.  
\- A data type that defines the kind of data it can store (e.g., integer, float, character).  
\- A value that is stored in the variable.

Variables are essential for writing dynamic and flexible programs, as they allow data to be stored, modified, and reused.

\---

 **Rules for Naming Variables:**  
1\. Variable names must begin with a letter or underscore (\`\_\`).  
2\. They can contain letters, digits, and underscores.  
3\. Variable names are case-sensitive (e.g., \`age\` and \`Age\` are different).  
4\. Reserved keywords (e.g., \`int\`, \`float\`, \`return\`) cannot be used as variable names.

\---

 Declaring and Initializing Variables

Declaration is the process of defining a variable by specifying its name and data type.    
Initialization is the process of assigning an initial value to the variable at the time of declaration.

\---

 Example: Declaring and Initializing Variables of Different Data Types

\`\`\`c  
\#include \<stdio.h\>

int main() {  
    // Integer variable  
    int age \= 25;  // Declares an integer variable 'age' and initializes it to 25

    // Floating-point variable  
    float height \= 5.9;  // Declares a float variable 'height' and initializes it to 5.9

    // Character variable  
    char grade \= 'A';  // Declares a character variable 'grade' and initializes it to 'A'

    // Double variable (for more precise floating-point numbers)  
    double salary \= 55000.75;  // Declares a double variable 'salary' and initializes it to 55000.75

    // String (array of characters)  
    char name\[\] \= "John Doe";  // Declares a string variable 'name' and initializes it to "John Doe"

    // Displaying the values of the variables  
    printf("Age: %d\\n", age);  
    printf("Height: %.2f\\n", height);  
    printf("Grade: %c\\n", grade);  
    printf("Salary: %.2lf\\n", salary);  
    printf("Name: %s\\n", name);

    return 0;  
}  
\`\`\`

 Output of the Program:  
\`\`\`  
Age: 25  
Height: 5.90  
Grade: A  
Salary: 55000.75  
Name: John Doe  
\`\`\`

\---

 Key Points:  
\- Declaration: Specifies the variable's name and data type.  
  \- Example: \`int age;\`  
\- Initialization: Assigns an initial value to the variable.  
  \- Example: \`int age \= 25;\`  
\- Data Types: Define the kind of data a variable can store (e.g., \`int\`, \`float\`, \`char\`, \`double\`).  
\- Strings: In C, strings are represented as arrays of characters (\`char\[\]\`).

This example demonstrates how to declare and initialize variables of different data types in C. Variables are fundamental to programming, as they allow you to store and manipulate data dynamically.

\#include \<stdio.h\>  // Include the standard I/O library

int main() {  
    // Declare variables  
    char name\[50\];  
    int age;  
    float height;

    // Input: Get user details  
    printf("Enter your name: ");  
    fgets(name, sizeof(name), stdin);  // Read a string (including spaces)  
    name\[strcspn(name, "\\n")\] \= '\\0';  // Remove the newline character added by fgets

    printf("Enter your age: ");  
    scanf("%d", \&age);  // Read an integer

    printf("Enter your height (in meters): ");  
    scanf("%f", \&height);  // Read a float

    // Output: Display user details  
    printf("\\nUser Details:\\n");  
    printf("Name: %s\\n", name);  // Print the string  
    printf("Age: %d\\n", age);    // Print the integer  
    printf("Height: %.2f meters\\n", height);  // Print the float with 2 decimal places

    return 0;  // Indicates successful execution  
}

\==================================================================

**In the C programming language, binary operators** are operators that work on two operands. They are classified into several categories based on their functionality. Below is a classification of binary operators in C, followed by an explanation of bitwise logical operators.

\---

 **Classification of Binary Operators in C**

**1\. Arithmetic Operators:**  
   \- Perform basic mathematical operations.  
   \- Examples:  
     \- \`+\` (Addition)  
     \- \`-\` (Subtraction)  
     \- \`\*\` (Multiplication)  
     \- \`/\` (Division)  
     \- \`%\` (Modulus, remainder after division)

   Example:  
   \`\`\`c  
   int a \= 10, b \= 3;  
   int sum \= a \+ b;  // sum \= 13  
   int remainder \= a % b;  // remainder \= 1  
   \`\`\`

\---

**2\. Relational Operators:**  
   \- Compare two operands and return a boolean result (\`1\` for true, \`0\` for false).  
   \- Examples:  
     \- \`==\` (Equal to)  
     \- \`\!=\` (Not equal to)  
     \- \`\>\` (Greater than)  
     \- \`\<\` (Less than)  
     \- \`\>=\` (Greater than or equal to)  
     \- \`\<=\` (Less than or equal to)

   Example:  
   \`\`\`c  
   int x \= 5, y \= 10;  
   int result \= (x \< y);  // result \= 1 (true)  
   \`\`\`

\---

**3\. Logical Operators:**  
   \- Perform logical operations on boolean values.  
   \- Examples:  
     \- \`&&\` (Logical AND)  
     \- \`||\` (Logical OR)  
     \- \`\!\` (Logical NOT, but it is a unary operator)

   Example:  
   \`\`\`c  
   int a \= 1, b \= 0;  
   int result \= (a && b);  // result \= 0 (false)  
   \`\`\`

\---

**4\. Bitwise Operators:**  
   \- Perform operations on the binary representation of integers.  
   \- Examples:  
     \- \`&\` (Bitwise AND)  
     \- \`|\` (Bitwise OR)  
     \- \`^\` (Bitwise XOR)  
     \- \`\~\` (Bitwise NOT, unary operator)  
     \- \`\<\<\` (Left shift)  
     \- \`\>\>\` (Right shift)

   Example:  
   \`\`\`c  
   int a \= 5, b \= 3;  
   int result \= a & b;  // result \= 1  
   \`\`\`

\---

**5\. Assignment Operators:**  
   \- Assign values to variables.  
   \- Examples:  
     \- \`=\` (Simple assignment)  
     \- \`+=\` (Add and assign)  
     \- \`-=\` (Subtract and assign)  
     \- \`\*=\` (Multiply and assign)  
     \- \`/=\` (Divide and assign)  
     \- \`%=\` (Modulus and assign)

   Example:  
   \`\`\`c  
   int a \= 5;  
   a \+= 3;  // a \= 8  
   \`\`\`

\---

**6\. Conditional (Ternary) Operator:**  
   \- A shorthand for an \`if-else\` statement.  
   \- Syntax: \`condition ? expression1 : expression2\`  
   \- Example:  
     \`\`\`c  
     int a \= 5, b \= 10;  
     int max \= (a \> b) ? a : b;  // max \= 10  
     \`\`\`

\---

 **Bitwise Logical Operators**

Bitwise logical operators perform operations on the binary representation of integers. They work at the bit level, manipulating individual bits of the operands.

**1\. Bitwise AND (\`&\`):**  
   \- Compares each bit of two operands.  
   \- The result bit is \`1\` if both corresponding bits are \`1\`; otherwise, it is \`0\`.  
   \- Example:  
     \`\`\`c  
     int a \= 5;    // Binary: 0101  
     int b \= 3;    // Binary: 0011  
     int result \= a & b;  // Binary: 0001 (Decimal: 1\)  
     \`\`\`

\---

**2\. Bitwise OR (\`|\`):**  
   \- Compares each bit of two operands.  
   \- The result bit is \`1\` if at least one of the corresponding bits is \`1\`; otherwise, it is \`0\`.  
   \- Example:  
     \`\`\`c  
     int a \= 5;    // Binary: 0101  
     int b \= 3;    // Binary: 0011  
     int result \= a | b;  // Binary: 0111 (Decimal: 7\)  
     \`\`\`

\---

**3\. Bitwise XOR (\`^\`):**  
   \- Compares each bit of two operands.  
   \- The result bit is \`1\` if the corresponding bits are different; otherwise, it is \`0\`.  
   \- Example:  
     \`\`\`c  
     int a \= 5;    // Binary: 0101  
     int b \= 3;    // Binary: 0011  
     int result \= a ^ b;  // Binary: 0110 (Decimal: 6\)  
     \`\`\`

\---

**4\. Bitwise NOT (\`\~\`):**  
   \- A unary operator that inverts all the bits of the operand.  
   \- The result bit is \`1\` if the corresponding bit is \`0\`, and vice versa.  
   \- Example:  
     \`\`\`c  
     int a \= 5;    // Binary: 0101  
     int result \= \~a;  // Binary: 1010 (Decimal: \-6, assuming 4-bit representation)  
     \`\`\`

\---

**5\. Left Shift (\`\<\<\`):**  
   \- Shifts the bits of the left operand to the left by the number of positions specified by the right operand.  
   \- Example:  
     \`\`\`c  
     int a \= 5;    // Binary: 0101  
     int result \= a \<\< 1;  // Binary: 1010 (Decimal: 10\)  
     \`\`\`

\---

**6\. Right Shift (\`\>\>\`):**  
   \- Shifts the bits of the left operand to the right by the number of positions specified by the right operand.  
   \- Example:  
     \`\`\`c  
     int a \= 5;    // Binary: 0101  
     int result \= a \>\> 1;  // Binary: 0010 (Decimal: 2\)  
     \`\`\`

\---

Example Program: Bitwise Operators in Action

\`\`\`c  
\#include \<stdio.h\>

int main() {  
    int a \= 5, b \= 3;

    printf("a & b \= %d\\n", a & b);  // Bitwise AND  
    printf("a | b \= %d\\n", a | b);  // Bitwise OR  
    printf("a ^ b \= %d\\n", a ^ b);  // Bitwise XOR  
    printf("\~a \= %d\\n", \~a);        // Bitwise NOT  
    printf("a \<\< 1 \= %d\\n", a \<\< 1); // Left shift  
    printf("a \>\> 1 \= %d\\n", a \>\> 1); // Right shift

    return 0;  
}  
\`\`\`

\---

Output:  
\`\`\`  
a & b \= 1  
a | b \= 7  
a ^ b \= 6  
\~a \= \-6  
a \<\< 1 \= 10  
a \>\> 1 \= 2  
\`\`\`

\---

Summary:  
\- Binary operators in C are classified into arithmetic, relational, logical, bitwise, assignment, and conditional operators.  
\- Bitwise logical operators (\`&\`, \`|\`, \`^\`, \`\~\`, \`\<\<\`, \`\>\>\`) perform operations on the binary representation of integers.  
\- Bitwise operators are useful for low-level programming, such as hardware manipulation, encryption, and optimization.

\#include \<stdio.h\>

int main() {  
    int age;

    // Input: Get the user's age  
    printf("Enter your age: ");  
    scanf("%d", \&age);

    // Check if the person is eligible to vote  
    if (age \>= 18\) {  
        printf("You are eligible to vote\!\\n");  
    } else {  
        printf("You are not eligible to vote.\\n");  
    }

    return 0;  
}

\#include \<stdio.h\>

int main() {  
    int m, n, sum \= 0;

    // Input: Get the values of m and n  
    printf("Enter the starting number (m): ");  
    scanf("%d", \&m);

    printf("Enter the ending number (n): ");  
    scanf("%d", \&n);

    // Ensure m is less than or equal to n  
    if (m \> n) {  
        printf("Error: Starting number (m) must be less than or equal to ending number (n).\\n");  
        return 1;  // Exit the program with an error code  
    }

    // Calculate the sum of numbers from m to n  
    for (int i \= m; i \<= n; i++) {  
        sum \+= i;  // Add each number to the sum  
    }

    // Output: Display the result  
    printf("The sum of numbers from %d to %d is: %d\\n", m, n, sum);

    return 0;  // Indicates successful execution  
}

\#include \<stdio.h\>

int main() {  
    int integerNumber;  
    float floatingNumber;

    // Input: Get the integer number from the user  
    printf("Enter an integer number: ");  
    scanf("%d", \&integerNumber);

    // Convert the integer to a floating-point number  
    floatingNumber \= (float)integerNumber;  // Type casting

    // Output: Display the result  
    printf("The integer %d as a floating-point number is: %.2f\\n", integerNumber, floatingNumber);

    return 0;  // Indicates successful execution  
}

\#include \<stdio.h\>

int main() {  
    int integerNumber;  
    char floatingNumber;

    // Input: Get the integer number from the user  
    printf("Enter an integer number: ");  
    scanf("%d", \&integerNumber);

    // Convert the integer to a floating-point number  
    floatingNumber \= (char)integerNumber;  // Type casting

    // Output: Display the result  
    printf("The integer %d as a floating-point number is: %c\\n", integerNumber, floatingNumber);

    return 0;  // Indicates successful execution  
}  
\==============================================================  
**Switch Case statement in C**

\#include \<stdio.h\>

int main() {  
    int day;

    // Input: Get the day number from the user  
    printf("Enter a day number (1-7): ");  
    scanf("%d", \&day);

    // Switch statement to determine the day  
    switch (day) {  
        case 1:  
            printf("Monday\\n");  
            break;  
        case 2:  
            printf("Tuesday\\n");  
            break;  
        case 3:  
            printf("Wednesday\\n");  
            break;  
        case 4:  
            printf("Thursday\\n");  
            break;  
        case 5:  
            printf("Friday\\n");  
            break;  
        case 6:  
            printf("Saturday\\n");  
            break;  
        case 7:  
            printf("Sunday\\n");  
            break;  
        default:  
            printf("Invalid day number\! Please enter a number between 1 and 7.\\n");  
    }

    return 0;  
}  
\===================================================================  
![][image1]

\==================================================================  
\#include \<stdio.h\>

int main() {  
    int rows \= 3;  // Number of rows in the pattern

    // Loop to generate the pattern  
    for (int i \= 1; i \<= rows; i++) {  // Outer loop for rows  
        for (int j \= 1; j \<= i; j++) {  // Inner loop for columns  
            printf("\*");  
        }  
        printf("\\n");  // Move to the next line after each row  
    }

    return 0;  // Indicates successful execution  
}

  \*  
 \*  
\*

\#include \<stdio.h\>

int main() {  
    int rows \= 3;  // Number of rows in the pattern

    // Loop to generate the pattern  
    for (int i \= 1; i \<= rows; i++) {  // Outer loop for rows  
        for(int k \= 1; k \<= (rows-i); k++) {  
                printf(" ");  
        }  
              
        for (int j \= 1; j \<= (2\*i \-1); j++) {  // Inner loop for columns  
            printf("\*");  
        }  
        printf("\\n");  // Move to the next line after each row  
    }

    return 0;  // Indicates successful execution  
}  
\=====================================================================

**A function prototype** is a declaration of a function that tells the compiler about the function's name, return type, and parameters (if any).

It does not contain the actual implementation (body) of the function.

int add(int a, int b);  // Function prototype

**A function definition** provides the actual implementation (body) of the function.

It includes the function's name, return type, parameter list, and the code that defines what the function does.

int add(int a, int b) {  // Function definition  
    return a \+ b;  
}  
\=====================================================================

**In C programming, storage classes define the scope, visibility, and lifetime** of variables and functions. There are four main storage classes:

1\. auto  
2\. register  
3\. static  
4\. extern

Each storage class serves a specific purpose and determines how and where a variable or function is stored and accessed. Below is a detailed explanation of each storage class.

\---

**1\. auto (Automatic Storage Class)**  
\- Purpose: The \`auto\` storage class is used to declare local variables within a function or block. These variables are created when the block is entered and destroyed when the block is exited.  
\- Scope: Local to the block in which they are defined.  
\- Lifetime: Exists only during the execution of the block.  
\- Default: If no storage class is specified for a local variable, it is automatically considered \`auto\`.  
\- Example:  
  \`\`\`c  
  void func() {  
      auto int x \= 10;  // 'auto' is optional here  
      printf("%d\\n", x);  
  }  
  \`\`\`

\---

**2\. register (Register Storage Class)**  
\- Purpose: The \`register\` storage class is used to suggest that a variable be stored in a CPU register instead of RAM for faster access. However, the compiler may ignore this suggestion if no registers are available.  
\- Scope: Local to the block in which they are defined.  
\- Lifetime: Exists only during the execution of the block.  
\- Limitation: You cannot use the address-of operator (\`&\`) with \`register\` variables because they may not have a memory address.  
\- Example:  
  \`\`\`c  
  void func() {  
      register int counter \= 0;  // Suggests storing 'counter' in a register  
      for (counter \= 0; counter \< 10; counter++) {  
          printf("%d\\n", counter);  
      }  
  }  
  \`\`\`

\---

**3\. static (Static Storage Class)**  
\- Purpose: The \`static\` storage class is used to:  
  \- Preserve the value of a local variable between function calls.  
  \- Limit the scope of a global variable or function to the file in which it is declared.  
\- Scope:  
  \- For local variables: Local to the block in which they are defined.  
  \- For global variables/functions: Limited to the file in which they are declared.  
\- Lifetime: For local variables, the lifetime is the entire program execution. For global variables, it is also the entire program execution.  
\- Example:  
  \`\`\`c  
  void func() {  
      static int count \= 0;  // Retains its value between function calls  
      count++;  
      printf("Count: %d\\n", count);  
  }

  int main() {  
      func();  // Output: Count: 1  
      func();  // Output: Count: 2  
      func();  // Output: Count: 3  
      return 0;  
  }  
  \`\`\`

\---

**4\. extern (External Storage Class)**  
\- Purpose: The \`extern\` storage class is used to declare a global variable or function that is defined in another file. It allows you to share variables and functions across multiple files.  
\- Scope: Global (accessible across multiple files).  
\- Lifetime: Entire program execution.  
\- Usage: Typically used in multi-file programs to declare variables or functions defined in one file and used in another.  
\- Example:  
  \- File1.c:  
    \`\`\`c  
    int globalVar \= 42;  // Definition of global variable  
    \`\`\`  
  \- File2.c:  
    \`\`\`c  
    extern int globalVar;  // Declaration of global variable

    void func() {  
        printf("Global Variable: %d\\n", globalVar);  
    }  
    \`\`\`

\---

**Summary of Storage Classes:**

| Storage Class | Scope               | Lifetime               | Purpose                                                                 |  
|--------------------|-------------------------|----------------------------|-----------------------------------------------------------------------------|  
| \`auto\`             | Local to the block      | During block execution     | Default for local variables.                                               |  
| \`register\`         | Local to the block      | During block execution     | Suggests storing the variable in a CPU register for faster access.         |  
| \`static\`           | Local or file-level     | Entire program execution   | Preserves value between function calls or limits scope to the file.        |  
| \`extern\`           | Global (across files)   | Entire program execution   | Declares global variables/functions defined in another file.               |

\---

Key Points:  
\- \`auto\`: Default for local variables; created and destroyed with the block.  
\- \`register\`: Suggests storing the variable in a CPU register for faster access.  
\- \`static\`: Preserves the value of a local variable between function calls or limits the scope of a global variable to the file.  
\- \`extern\`: Used to share global variables and functions across multiple files.

\#include \<stdio.h\>

int add(int a, int b);

int main() {  
    int a \= 3;    
    int b \= 5;  
      
    printf("%d", add(a, b));

    return 0;  // Indicates successful execution  
}

int add(int a, int b) {  
    a \= 10;  
    return a \+ b;  
}

Understanding storage classes is essential for managing variable scope, lifetime, and memory efficiently in C programs.  
\======================================================================  
**Bubble sort**

\#include \<stdio.h\>

void bubbleSort(int arr\[\], int n) {  
    int i, j, temp;  
    for (i \= 0; i \< n \- 1; i++) {  // Outer loop for passes  
        for (j \= 0; j \< n \- i \- 1; j++) {  // Inner loop for comparisons  
            if (arr\[j\] \> arr\[j \+ 1\]) {  // Swap if the current element is greater than the next  
                temp \= arr\[j\];  
                arr\[j\] \= arr\[j \+ 1\];  
                arr\[j \+ 1\] \= temp;  
            }  
        }  
    }  
}

int main() {  
    int n, i;

    // Input: Get the number of elements from the user  
    printf("Enter the number of elements: ");  
    scanf("%d", \&n);

    int arr\[n\];  // Declare an array of size 'n'

    // Input: Read numbers into the array  
    printf("Enter %d numbers:\\n", n);  
    for (i \= 0; i \< n; i++) {  
        scanf("%d", \&arr\[i\]);  
    }

    // Sort the array using Bubble Sort  
    bubbleSort(arr, n);

    // Output: Display the sorted array  
    printf("Sorted array in ascending order:\\n");  
    for (i \= 0; i \< n; i++) {  
        printf("%d ", arr\[i\]);  
    }  
    printf("\\n");

    return 0;  // Indicates successful execution  
}

\#include \<stdio.h\>

void bubbleSort(int arr\[\], int n) {  
    int i, j, temp;  
    for (i \= 0; i \< n \- 1; i++) {  // Outer loop for passes  
        for (j \= 0; j \< n \- i \- 1; j++) {  // Inner loop for comparisons  
            if (arr\[j\] \> arr\[j \+ 1\]) {  // Swap if the current element is greater than the next  
                printf("%d \- %d\\n", arr\[j\], arr\[j+1\]);  
                temp \= arr\[j\];  
                arr\[j\] \= arr\[j \+ 1\];  
                arr\[j \+ 1\] \= temp;  
            }  
        }  
    }  
}

int main() {  
    int n, i;

    // Input: Get the number of elements from the user  
    printf("Enter the number of elements: ");  
    scanf("%d", \&n);

    int arr\[n\];  // Declare an array of size 'n'

    // Input: Read numbers into the array  
    printf("Enter %d numbers:\\n", n);  
    for (i \= 0; i \< n; i++) {  
        scanf("%d", \&arr\[i\]);  
    }

    // Sort the array using Bubble Sort  
    bubbleSort(arr, n);

    // Output: Display the sorted array  
    printf("Sorted array in ascending order:\\n");  
    for (i \= 0; i \< n; i++) {  
        printf("%d ", arr\[i\]);  
    }  
    printf("\\n");

    return 0;  // Indicates successful execution  
}  
\=====================================================================

**Difference Between Pass-by-Value and Pass-by-Reference**

In C programming, pass-by-value and pass-by-reference are two ways to pass arguments to functions. They differ in how the function receives and manipulates the data.

\---

**1\. Pass-by-Value:**  
\- In pass-by-value, a copy of the actual argument's value is passed to the function.  
\- The function works with the copy, so any changes made to the parameter inside the function do not affect the original argument.  
\- This is the default behavior in C for simple data types (e.g., \`int\`, \`float\`, \`char\`).

\#Example:  
\`\`\`c  
\#include \<stdio.h\>

// Function to swap two integers (pass-by-value)  
void swap(int a, int b) {  
    int temp \= a;  
    a \= b;  
    b \= temp;  
    printf("Inside swap function: a \= %d, b \= %d\\n", a, b);  
}

int main() {  
    int x \= 5, y \= 10;

    printf("Before swap: x \= %d, y \= %d\\n", x, y);  
    swap(x, y);  // Pass-by-value  
    printf("After swap: x \= %d, y \= %d\\n", x, y);

    return 0;  
}  
\`\`\`

\#Output:  
\`\`\`  
Before swap: x \= 5, y \= 10  
Inside swap function: a \= 10, b \= 5  
After swap: x \= 5, y \= 10  
\`\`\`

\#Explanation:  
\- The values of \`x\` and \`y\` are copied to \`a\` and \`b\` in the \`swap\` function.  
\- Changes to \`a\` and \`b\` inside the function do not affect \`x\` and \`y\` in the \`main\` function.

\---

**2\. Pass-by-Reference:**  
\- In pass-by-reference, the memory address of the actual argument is passed to the function.  
\- The function works directly with the original argument, so any changes made to the parameter inside the function affect the original argument.  
\- This is achieved using pointers in C.

\#Example:  
\`\`\`c  
\#include \<stdio.h\>

// Function to swap two integers (pass-by-reference)  
void swap(int \*a, int \*b) {  
    int temp \= \*a;  
    \*a \= \*b;  
    \*b \= temp;  
    printf("Inside swap function: \*a \= %d, \*b \= %d\\n", \*a, \*b);  
}

int main() {  
    int x \= 5, y \= 10;

    printf("Before swap: x \= %d, y \= %d\\n", x, y);  
    swap(\&x, \&y);  // Pass-by-reference (addresses of x and y are passed)  
    printf("After swap: x \= %d, y \= %d\\n", x, y);

    return 0;  
}  
\`\`\`

\#Output:  
\`\`\`  
Before swap: x \= 5, y \= 10  
Inside swap function: \*a \= 10, \*b \= 5  
After swap: x \= 10, y \= 5  
\`\`\`

\#Explanation:  
\- The addresses of \`x\` and \`y\` are passed to the \`swap\` function.  
\- The function modifies the values at these addresses, so the original variables \`x\` and \`y\` are changed.

\---

Key Differences:

| Aspect            | Pass-by-Value                          | Pass-by-Reference                     |  
|------------------------|--------------------------------------------|-------------------------------------------|  
| What is Passed     | A copy of the value is passed.             | The memory address of the value is passed.|  
| Effect on Original | Changes inside the function do not affect the original argument. | Changes inside the function affect the original argument. |  
| Mechanism          | Default behavior for simple data types.    | Achieved using pointers.                  |  
| Example            | \`void func(int a)\`                        | \`void func(int \*a)\`                       |

\---

Summary:  
\- Pass-by-Value: Copies the value of the argument. Changes inside the function do not affect the original argument.  
\- Pass-by-Reference: Passes the address of the argument. Changes inside the function affect the original argument.

Pass-by-reference is useful when you want to modify the original arguments or avoid copying large data structures. Pass-by-value is simpler and safer when you don't need to modify the original arguments.  
\==================================================================  
**Search a keyword from a string**

\#include \<stdio.h\>

// Function prototype  
int addNumbers(int a, int b);

int main() {  
    int a \= 5, b \= 10;

    // Call the addNumbers function and store the result  
    int result \= addNumbers(a, b);

    // Print the result  
    printf("The sum of %d and %d is: %d\\n", a, b, result);

    return 0;  // Indicates successful execution  
}

// Function definition  
int addNumbers(int a, int b) {  
    return a \+ b;  // Return the sum of a and b  
}

\#include \<stdio.h\>

int main() {  
    int n, key, i, found \= 0;

    // Input: Get the size of the array  
    printf("Enter the number of elements in the array: ");  
    scanf("%d", \&n);

    int arr\[n\];  // Declare an array of size 'n'

    // Input: Read elements into the array  
    printf("Enter %d elements:\\n", n);  
    for (i \= 0; i \< n; i++) {  
        scanf("%d", \&arr\[i\]);  
    }

    // Input: Get the key element to search  
    printf("Enter the key element to search: ");  
    scanf("%d", \&key);

    // Search for the key element in the array  
    for (i \= 0; i \< n; i++) {  
        if (arr\[i\] \== key) {  
            found \= 1;  // Set found flag to 1  
            break;      // Exit the loop  
        }  
    }

    // Output: Display the result  
    if (found) {  
        printf("Element %d found at index %d.\\n", key, i);  
    } else {  
        printf("Element %d is not present in the array.\\n", key);  
    }

    return 0;  // Indicates successful execution  
}

\===================================================================  
**Below is a C program that transposes the elements of a 3×3 matrix**. Transposing a matrix means converting its rows into columns and its columns into rows.

\---

 C Program: Transpose of a 3×3 Matrix

\`\`\`c  
\#include \<stdio.h\>

int main() {  
    int matrix\[3\]\[3\], transpose\[3\]\[3\];  
    int i, j;

    // Input: Get the elements of the 3x3 matrix  
    printf("Enter the elements of the 3x3 matrix:\\n");  
    for (i \= 0; i \< 3; i++) {  
        for (j \= 0; j \< 3; j++) {  
            scanf("%d", \&matrix\[i\]\[j\]);  
        }  
    }

    // Transpose the matrix  
    for (i \= 0; i \< 3; i++) {  
        for (j \= 0; j \< 3; j++) {  
            transpose\[j\]\[i\] \= matrix\[i\]\[j\];  // Swap rows and columns  
        }  
    }

    // Output: Display the original matrix  
    printf("\\nOriginal Matrix:\\n");  
    for (i \= 0; i \< 3; i++) {  
        for (j \= 0; j \< 3; j++) {  
            printf("%d\\t", matrix\[i\]\[j\]);  
        }  
        printf("\\n");  
    }

    // Output: Display the transposed matrix  
    printf("\\nTransposed Matrix:\\n");  
    for (i \= 0; i \< 3; i++) {  
        for (j \= 0; j \< 3; j++) {  
            printf("%d\\t", transpose\[i\]\[j\]);  
        }  
        printf("\\n");  
    }

    return 0;  // Indicates successful execution  
}  
\`\`\`

\---

 Explanation of the Code:

1\. Input:  
   \- The program prompts the user to enter the elements of a 3×3 matrix.  
   \- The elements are stored in the 2D array \`matrix\`.

2\. Transpose Calculation:  
   \- The program calculates the transpose of the matrix by swapping rows and columns.  
   \- The result is stored in the 2D array \`transpose\`.

3\. Output:  
   \- The program displays the original matrix and the transposed matrix.

\---

 Example Input and Output:

\# Input:  
\`\`\`  
Enter the elements of the 3x3 matrix:  
1 2 3  
4 5 6  
7 8 9  
\`\`\`

\# Output:  
\`\`\`  
Original Matrix:  
1       2       3  
4       5       6  
7       8       9

Transposed Matrix:  
1       4       7  
2       5       8  
3       6       9  
\`\`\`

\---

 Key Points:  
\- The transpose of a matrix is obtained by swapping its rows and columns.  
\- For a 3×3 matrix, the element at position \`(i, j)\` in the original matrix is moved to position \`(j, i)\` in the transposed matrix.  
\- The program uses nested loops to perform the transpose operation and display the results.

This program demonstrates how to transpose a 3×3 matrix in C. You can modify it to handle matrices of different sizes.

Reference code

\#include \<stdio.h\>

int main() {  
   // matrix a  
   int row;  
   int col;

   // take input for row and col  
   printf("Enter row: ");  
   scanf("%d", &row);  
   printf("Enter col: ");  
   scanf("%d", &col);  
   int a\[row\]\[col\];

   // matrix t\_a for transpose  
   int t\_row \= col;  
   int t\_col \= row;  
   int t\_a\[t\_row\]\[t\_col\];  
    
   // input matrix a values  
   for(int i \= 0; i \< row; i\++){  
       for(int j \= 0; j \< col; j\++) {  
           printf("Enter value for a\[%d\]\[%d\]: ", i, j);  
           scanf("%d", &a\[i\]\[j\]);  
       }  
   }  
    
   // print matrix a  
   for(int i \= 0; i\<row; i\++){  
       printf("\\n");  
       for(int j\=0; j\< col; j\++) {  
           printf("%d", a\[i\]\[j\]);  
       }  
   }

   // transpose matrix a  
   for(int i \= 0; i\<row; i\++){  
       for(int j\=0; j\< col; j\++) {  
           // transpose a to t\_a by swapping row and col  
           t\_a\[j\]\[i\] \= a\[i\]\[j\];  
       }  
   }

   // print matrix t\_a  
   for(int i \= 0; i\<t\_row; i\++){  
       printf("\\n");  
       for(int j\=0; j\< t\_col; j\++) {  
           printf("%d", t\_a\[i\]\[j\]);  
       }  
   }

   return 0;  
}

\=====================================================================  
**Below is a C program that inputs two m × n matrices**, calculates the sum of their corresponding elements, and stores the result in a third m × n matrix.

\---

 **C Program: Sum of Two Matrices**

\`\`\`c  
\#include \<stdio.h\>

int main() {  
    int m, n, i, j;

    // Input: Get the dimensions of the matrices  
    printf("Enter the number of rows (m): ");  
    scanf("%d", \&m);  
    printf("Enter the number of columns (n): ");  
    scanf("%d", \&n);

    int matrix1\[m\]\[n\], matrix2\[m\]\[n\], sum\[m\]\[n\];

    // Input: Get elements of the first matrix  
    printf("Enter the elements of the first matrix:\\n");  
    for (i \= 0; i \< m; i++) {  
        for (j \= 0; j \< n; j++) {  
            scanf("%d", \&matrix1\[i\]\[j\]);  
        }  
    }

    // Input: Get elements of the second matrix  
    printf("Enter the elements of the second matrix:\\n");  
    for (i \= 0; i \< m; i++) {  
        for (j \= 0; j \< n; j++) {  
            scanf("%d", \&matrix2\[i\]\[j\]);  
        }  
    }

    // Calculate the sum of the matrices  
    for (i \= 0; i \< m; i++) {  
        for (j \= 0; j \< n; j++) {  
            sum\[i\]\[j\] \= matrix1\[i\]\[j\] \+ matrix2\[i\]\[j\];  
        }  
    }

    // Output: Display the first matrix  
    printf("\\nFirst Matrix:\\n");  
    for (i \= 0; i \< m; i++) {  
        for (j \= 0; j \< n; j++) {  
            printf("%d\\t", matrix1\[i\]\[j\]);  
        }  
        printf("\\n");  
    }

    // Output: Display the second matrix  
    printf("\\nSecond Matrix:\\n");  
    for (i \= 0; i \< m; i++) {  
        for (j \= 0; j \< n; j++) {  
            printf("%d\\t", matrix2\[i\]\[j\]);  
        }  
        printf("\\n");  
    }

    // Output: Display the sum matrix  
    printf("\\nSum of the Matrices:\\n");  
    for (i \= 0; i \< m; i++) {  
        for (j \= 0; j \< n; j++) {  
            printf("%d\\t", sum\[i\]\[j\]);  
        }  
        printf("\\n");  
    }

    return 0;  // Indicates successful execution  
}  
\`\`\`

\---

 Explanation of the Code:

1\. Input:  
   \- The program first asks the user to enter the dimensions of the matrices (\`m\` and \`n\`).  
   \- It then reads the elements of the first matrix (\`matrix1\`) and the second matrix (\`matrix2\`).

2\. Sum Calculation:  
   \- The program calculates the sum of the corresponding elements of \`matrix1\` and \`matrix2\` and stores the result in the \`sum\` matrix.

3\. Output:  
   \- The program displays the first matrix, the second matrix, and the sum matrix.

\---

 Example Input and Output:

\# Input:  
\`\`\`  
Enter the number of rows (m): 2  
Enter the number of columns (n): 3  
Enter the elements of the first matrix:  
1 2 3  
4 5 6  
Enter the elements of the second matrix:  
7 8 9  
10 11 12  
\`\`\`

\# Output:  
\`\`\`  
First Matrix:  
1       2       3  
4       5       6

Second Matrix:  
7       8       9  
10      11      12

Sum of the Matrices:  
8       10      12  
14      16      18  
\`\`\`

\---

 Key Points:  
\- The program works for matrices of any size (\`m × n\`), as specified by the user.  
\- The sum of two matrices is calculated by adding their corresponding elements.  
\- The program uses nested loops to handle the input, calculation, and output of the matrices.

This program demonstrates how to perform matrix addition in C. You can modify it to handle other matrix operations, such as subtraction or multiplication.

\=====================================================================  
 **Importance of Using Scanset to Read a String**

In C, the scanset is a feature of the \`scanf\` function that allows you to specify a set of characters to be read or excluded when reading input. It is particularly useful for reading strings with specific formats or handling input that includes spaces or special characters.

\---

 **What is a Scanset?**  
\- A scanset is defined within square brackets \`\[\]\` in the \`scanf\` format string.  
\- It specifies the set of characters that \`scanf\` should accept or exclude when reading input.  
\- For example:  
  \- \`%\[abc\]\` means \`scanf\` will read only the characters \`a\`, \`b\`, or \`c\`.  
  \- \`%\[^abc\]\` means \`scanf\` will read all characters except \`a\`, \`b\`, or \`c\`.

\---

 Importance of Using Scanset

**1\. Reading Strings with Spaces:**  
   \- By default, \`scanf\` stops reading a string when it encounters a space. This makes it unsuitable for reading strings with spaces (e.g., full names).  
   \- Using a scanset like \`%\[^\\n\]\`, you can read an entire line of input, including spaces, until a newline character is encountered.

   Example:  
   \`\`\`c  
   char name\[50\];  
   printf("Enter your full name: ");  
   scanf(" %\[^\\n\]", name);  // Read until newline  
   printf("Hello, %s\!\\n", name);  
   \`\`\`

   Input:  
   \`\`\`  
   Enter your full name: John Doe  
   \`\`\`

   Output:  
   \`\`\`  
   Hello, John Doe\!  
   \`\`\`

**2\. Reading Specific Characters:**  
   \- Scansets allow you to read only specific characters from the input, which is useful for filtering out unwanted characters or reading formatted input.

   Example:  
   \`\`\`c  
   char input\[10\];  
   printf("Enter a string (digits only): ");  
   scanf(" %\[0-9\]", input);  // Read only digits  
   printf("You entered: %s\\n", input);  
   \`\`\`

   Input:  
   \`\`\`  
   Enter a string (digits only): 123abc456  
   \`\`\`

   Output:  
   \`\`\`  
   You entered: 123  
   \`\`\`

**3\. Excluding Specific Characters:**  
   \- You can use a scanset to exclude certain characters from the input. For example, \`%\[^,\]\` reads all characters until a comma is encountered.

   Example:  
   \`\`\`c  
   char city\[50\];  
   printf("Enter your city (stop at comma): ");  
   scanf(" %\[^,\]", city);  // Read until comma  
   printf("City: %s\\n", city);  
   \`\`\`

   Input:  
   \`\`\`  
   Enter your city (stop at comma): New York, USA  
   \`\`\`

   Output:  
   \`\`\`  
   City: New York  
   \`\`\`

**4\. Handling Complex Input Formats:**  
   \- Scansets are useful for parsing complex input formats, such as reading specific parts of a string or ignoring unwanted characters.

   Example:  
   \`\`\`c  
   char date\[11\];  
   printf("Enter a date (YYYY-MM-DD): ");  
   scanf(" %10\[0-9-\]", date);  // Read up to 10 characters (digits and hyphens)  
   printf("Date: %s\\n", date);  
   \`\`\`

   Input:  
   \`\`\`  
   Enter a date (YYYY-MM-DD): 2023-10-05  
   \`\`\`

   Output:  
   \`\`\`  
   Date: 2023-10-05  
   \`\`\`

\---

 Example Program: Using Scanset to Read a String

\`\`\`c  
\#include \<stdio.h\>

int main() {  
    char fullName\[50\];

    // Input: Read a full name with spaces  
    printf("Enter your full name: ");  
    scanf(" %\[^\\n\]", fullName);  // Read until newline

    // Output: Display the full name  
    printf("Hello, %s\!\\n", fullName);

    return 0;  
}  
\`\`\`

\---

 Output:  
\`\`\`  
Enter your full name: John Doe  
Hello, John Doe\!  
\`\`\`

\---

 Key Points:  
\- Scansets provide flexibility in reading strings with specific formats or characters.  
\- They are particularly useful for reading strings with spaces, filtering input, or handling complex input formats.  
\- Scansets are a powerful feature of \`scanf\` that can simplify input handling in C programs.

By using scansets, you can make your programs more robust and user-friendly when dealing with varied input formats.

\# include \<stdio.h\>

int main() {  
   printf("Enter a line and end with a period: ");  
   char name\[100\];  
   scanf("%\[^.\]", name);  
   printf("You entered: %s\\n", name);

   return 0;  
}

\===================================================================  
**Below is a C program that multiplies two 2D matrices**. The program assumes that the number of columns in the first matrix is equal to the number of rows in the second matrix, as matrix multiplication requires this condition.

\---

 **C Program: Matrix Multiplication**

\`\`\`c  
\#include \<stdio.h\>

int main() {  
    int m, n, p, q, i, j, k;

    // Input: Get dimensions of the first matrix  
    printf("Enter the number of rows and columns for the first matrix (m x n): ");  
    scanf("%d %d", \&m, \&n);

    // Input: Get dimensions of the second matrix  
    printf("Enter the number of rows and columns for the second matrix (p x q): ");  
    scanf("%d %d", \&p, \&q);

    // Check if multiplication is possible  
    if (n \!= p) {  
        printf("Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\\n");  
        return 1;  // Exit the program with an error code  
    }

    int matrix1\[m\]\[n\], matrix2\[p\]\[q\], result\[m\]\[q\];

    // Input: Get elements of the first matrix  
    printf("Enter the elements of the first matrix:\\n");  
    for (i \= 0; i \< m; i++) {  
        for (j \= 0; j \< n; j++) {  
            scanf("%d", \&matrix1\[i\]\[j\]);  
        }  
    }

    // Input: Get elements of the second matrix  
    printf("Enter the elements of the second matrix:\\n");  
    for (i \= 0; i \< p; i++) {  
        for (j \= 0; j \< q; j++) {  
            scanf("%d", \&matrix2\[i\]\[j\]);  
        }  
    }

    // Initialize the result matrix to 0  
    for (i \= 0; i \< m; i++) {  
        for (j \= 0; j \< q; j++) {  
            result\[i\]\[j\] \= 0;  
        }  
    }

    // Perform matrix multiplication  
    for (i \= 0; i \< m; i++) {  
        for (j \= 0; j \< q; j++) {  
            for (k \= 0; k \< n; k++) {  
                result\[i\]\[j\] \+= matrix1\[i\]\[k\] \* matrix2\[k\]\[j\];  
            }  
        }  
    }

    // Output: Display the first matrix  
    printf("\\nFirst Matrix:\\n");  
    for (i \= 0; i \< m; i++) {  
        for (j \= 0; j \< n; j++) {  
            printf("%d\\t", matrix1\[i\]\[j\]);  
        }  
        printf("\\n");  
    }

    // Output: Display the second matrix  
    printf("\\nSecond Matrix:\\n");  
    for (i \= 0; i \< p; i++) {  
        for (j \= 0; j \< q; j++) {  
            printf("%d\\t", matrix2\[i\]\[j\]);  
        }  
        printf("\\n");  
    }

    // Output: Display the result matrix  
    printf("\\nResultant Matrix (Multiplication):\\n");  
    for (i \= 0; i \< m; i++) {  
        for (j \= 0; j \< q; j++) {  
            printf("%d\\t", result\[i\]\[j\]);  
        }  
        printf("\\n");  
    }

    return 0;  // Indicates successful execution  
}  
\`\`\`

\---

 Explanation of the Code:

1\. Input:  
   \- The program first asks the user to enter the dimensions of the two matrices (\`m x n\` for the first matrix and \`p x q\` for the second matrix).  
   \- It checks if the number of columns in the first matrix (\`n\`) is equal to the number of rows in the second matrix (\`p\`). If not, matrix multiplication is not possible, and the program exits.

2\. Matrix Multiplication:  
   \- The program initializes the result matrix to 0\.  
   \- It uses three nested loops to perform matrix multiplication:  
     \- The outer loop iterates over the rows of the first matrix.  
     \- The middle loop iterates over the columns of the second matrix.  
     \- The inner loop calculates the dot product of the corresponding row and column.

3\. Output:  
   \- The program displays the first matrix, the second matrix, and the resultant matrix.

\---

 Example Input and Output:

\# Input:  
\`\`\`  
Enter the number of rows and columns for the first matrix (m x n): 2 3  
Enter the number of rows and columns for the second matrix (p x q): 3 2  
Enter the elements of the first matrix:  
1 2 3  
4 5 6  
Enter the elements of the second matrix:  
7 8  
9 10  
11 12  
\`\`\`

\# Output:  
\`\`\`  
First Matrix:  
1       2       3  
4       5       6

Second Matrix:  
7       8  
9       10  
11      12

Resultant Matrix (Multiplication):  
58      64  
139     154  
\`\`\`

\---

 Key Points:  
\- Matrix multiplication is only possible if the number of columns in the first matrix is equal to the number of rows in the second matrix.  
\- The resultant matrix has dimensions \`m x q\`, where \`m\` is the number of rows in the first matrix and \`q\` is the number of columns in the second matrix.  
\- The program uses nested loops to perform the multiplication and display the results.

This program demonstrates how to multiply two matrices in C. You can modify it to handle larger matrices or add error handling for invalid inputs.

\#include \<stdio.h\>

int main() {  
   // matrix a  
   int row;  
   int col;  
   int i, j, k;

   // take input for row and col  
   printf("Enter row: ");  
   scanf("%d", &row);  
   printf("Enter col: ");  
   scanf("%d", &col);  
   int a\[row\]\[col\];

   // matrix b  
   int b\[col\]\[row\];

   // to hold sum of matrix a and b  
   int mul\[row\]\[row\];  
    
   // input matrix a values  
   for(i \= 0; i \< row; i\++){  
       for(j \= 0; j \< col; j\++) {  
           printf("Enter value for a\[%d\]\[%d\]: ", i, j);  
           scanf("%d", &a\[i\]\[j\]);  
       }  
   }

   // input matrix b values  
   for(i \= 0; i \< col; i\++){  
       for(j \= 0; j \< row; j\++) {  
           printf("Enter value for b\[%d\]\[%d\]: ", i, j);  
           scanf("%d", &b\[i\]\[j\]);  
       }  
   }  
    
   // print matrix a  
   printf("\\nMatrix A: ");  
   for(i \= 0; i\<row; i\++){  
       printf("\\n");  
       for(j\=0; j\< col; j\++) {  
           printf("%d\\t", a\[i\]\[j\]);  
       }  
   }

   // print matrix b  
   printf("\\nMatrix B: ");  
   for(i \= 0; i\<col; i\++){  
       printf("\\n");  
       for(j\=0; j\< row; j\++) {  
           printf("%d\\t", b\[i\]\[j\]);  
       }  
   }

   // Initialize the result matrix to 0 this is called dynamic memory allocation  
   for (i \= 0; i \< row; i\++) {  
       for (j \= 0; j \< row; j\++) {  
           mul\[i\]\[j\] \= 0;  
       }  
   }

   // multiplication matrix a and b  
   for(i \= 0; i\<row; i\++){  
       for(j\=0; j\<row; j\++) {  
           for(k \= 0; k \< col; k\++) {  
               // multiply a rows elemet with b cols element and sum them  
               printf("\\nMultiplying a\[%d\]\[%d\] and b\[%d\]\[%d\]", i, k, k, j);  
               mul\[i\]\[j\] \+= a\[i\]\[k\] \* b\[k\]\[j\];  
           }  
       }  
   }

   // print matrix mul  
   printf("\\nMatrix Multiplication: ");  
   for(i \= 0; i\<row; i\++){  
       printf("\\n");  
       for(j\=0; j\< row; j\++) {  
           printf("%d\\t", mul\[i\]\[j\]);  
       }  
   }

   return 0;  
}

\====================================================================  
**In C, there are several functions available for reading and writing strings**. These functions are part of the standard I/O library (\`stdio.h\`) and provide different ways to handle string input and output. Below is a discussion of the most commonly used functions, along with their syntax and example code.

\---

 1\. Reading Strings

**\# a. \`scanf\`:**  
\- Reads formatted input from the standard input (keyboard).  
\- Stops reading when it encounters a space or newline.  
\- Syntax:  
  \`\`\`c  
  scanf("%s", str);  
  \`\`\`  
\- Example:  
  \`\`\`c  
  \#include \<stdio.h\>

  int main() {  
      char name\[50\];  
      printf("Enter your name: ");  
      scanf("%s", name);  // Reads until a space or newline  
      printf("Hello, %s\!\\n", name);  
      return 0;  
  }  
  \`\`\`  
  Input:  
  \`\`\`  
  Enter your name: John Doe  
  \`\`\`  
  Output:  
  \`\`\`  
  Hello, John\!  
  \`\`\`  
  Note: \`scanf\` stops reading at the first space, so only "John" is stored in \`name\`.

\---

**\# b. \`gets\`:**  
\- Reads a line of input from the standard input (keyboard) until a newline character is encountered.  
\- Syntax:  
  \`\`\`c  
  gets(str);  
  \`\`\`  
\- Example:  
  \`\`\`c  
  \#include \<stdio.h\>

  int main() {  
      char name\[50\];  
      printf("Enter your name: ");  
      gets(name);  // Reads the entire line  
      printf("Hello, %s\!\\n", name);  
      return 0;  
  }  
  \`\`\`  
  Input:  
  \`\`\`  
  Enter your name: John Doe  
  \`\`\`  
  Output:  
  \`\`\`  
  Hello, John Doe\!  
  \`\`\`  
  Note: \`gets\` is unsafe because it does not check for buffer overflow. It has been deprecated in modern C standards.

\---

**\# c. \`fgets\`:**  
\- Reads a line of input from the standard input (keyboard) or a file, up to a specified number of characters.  
\- Syntax:  
  \`\`\`c  
  fgets(str, size, stdin);  
  \`\`\`  
\- Example:  
  \`\`\`c  
  \#include \<stdio.h\>

  int main() {  
      char name\[50\];  
      printf("Enter your name: ");  
      fgets(name, sizeof(name), stdin);  // Reads up to 49 characters  
      printf("Hello, %s\!\\n", name);  
      return 0;  
  }  
  \`\`\`  
  Input:  
  \`\`\`  
  Enter your name: John Doe  
  \`\`\`  
  Output:  
  \`\`\`  
  Hello, John Doe\!  
  \`\`\`  
  Note: \`fgets\` is safer than \`gets\` because it limits the number of characters read.

\---

 **2\. Writing Strings**

**\# a. \`printf\`:**  
\- Prints formatted output to the standard output (console).  
\- Syntax:  
  \`\`\`c  
  printf("%s", str);  
  \`\`\`  
\- Example:  
  \`\`\`c  
  \#include \<stdio.h\>

  int main() {  
      char name\[\] \= "John Doe";  
      printf("Hello, %s\!\\n", name);  // Prints the string  
      return 0;  
  }  
  \`\`\`  
  Output:  
  \`\`\`  
  Hello, John Doe\!  
  \`\`\`

\---

**\# b. \`puts\`:**  
\- Prints a string to the standard output (console) and appends a newline character.  
\- Syntax:  
  \`\`\`c  
  puts(str);  
  \`\`\`  
\- Example:  
  \`\`\`c  
  \#include \<stdio.h\>

  int main() {  
      char name\[\] \= "John Doe";  
      puts(name);  // Prints the string and adds a newline  
      return 0;  
  }  
  \`\`\`  
  Output:  
  \`\`\`  
  John Doe  
  \`\`\`

\---

**\# c. \`fputs\`:**  
\- Prints a string to a file or the standard output (console) without appending a newline character.  
\- Syntax:  
  \`\`\`c  
  fputs(str, stdout);  
  \`\`\`  
\- Example:  
  \`\`\`c  
  \#include \<stdio.h\>

  int main() {  
      char name\[\] \= "John Doe";  
      fputs(name, stdout);  // Prints the string without a newline  
      return 0;  
  }  
  \`\`\`  
  Output:  
  \`\`\`  
  John Doe  
  \`\`\`

\---

 Summary of Functions:

| Function | Purpose                          | Syntax                     | Example                          |  
|--------------|--------------------------------------|--------------------------------|--------------------------------------|  
| \`scanf\`      | Reads formatted input (stops at space) | \`scanf("%s", str);\`            | \`scanf("%s", name);\`                 |  
| \`gets\`       | Reads a line of input (unsafe)       | \`gets(str);\`                   | \`gets(name);\`                        |  
| \`fgets\`      | Reads a line of input (safe)         | \`fgets(str, size, stdin);\`     | \`fgets(name, sizeof(name), stdin);\`  |  
| \`printf\`     | Prints formatted output              | \`printf("%s", str);\`           | \`printf("Hello, %s\!\\n", name);\`      |  
| \`puts\`       | Prints a string with a newline       | \`puts(str);\`                   | \`puts(name);\`                        |  
| \`fputs\`      | Prints a string without a newline    | \`fputs(str, stdout);\`          | \`fputs(name, stdout);\`               |

\---

 Key Points:  
\- Use \`fgets\` instead of \`gets\` for safe string input.  
\- Use \`printf\` for formatted output and \`puts\` for simple string output with a newline.  
\- \`fputs\` is useful when you don't want to append a newline character.

These functions provide flexibility for handling string input and output in C programs. Choose the appropriate function based on your specific requirements.

\# include \<stdio.h\>

int main() {  
   char name\[10\];  
   printf("Enter your name: ");  
   fgets(name, sizeof(name), stdin);  // Reads up to 9 characters  
   printf("%zu", sizeof(name));  
   printf("Hello, %s\!\\n", name);

   return 0;  
}

\======================================================================  
 **String Taxonomy**

In programming, strings are sequences of characters used to represent text. The taxonomy of strings refers to the classification and characteristics of strings based on their properties, usage, and implementation. Below is a brief explanation of string taxonomy:

\---

 **1\. Based on Mutability:**  
   \- Immutable Strings:  
     \- Once created, the content of the string cannot be changed.  
     \- Any operation that modifies the string creates a new string.  
     \- Example: Strings in Python and Java.  
   \- Mutable Strings:  
     \- The content of the string can be modified after creation.  
     \- Example: \`StringBuilder\` in Java or character arrays in C.

\---

 **2\. Based on Storage:**  
   \- Fixed-Length Strings:  
     \- The length of the string is fixed at the time of creation.  
     \- Example: Character arrays in C (\`char str\[100\];\`).  
   \- Dynamic-Length Strings:  
     \- The length of the string can change dynamically during runtime.  
     \- Example: Strings in Python, C++ (\`std::string\`), or Java (\`String\`).

\---

 **3\. Based on Encoding:**  
   \- ASCII Strings:  
     \- Use the ASCII encoding scheme, which represents characters using 7 bits.  
     \- Example: Traditional C strings.  
   \- Unicode Strings:  
     \- Use the Unicode encoding scheme, which supports a wider range of characters (e.g., UTF-8, UTF-16).  
     \- Example: Strings in Python 3, Java, and modern programming languages.

\---

 **4\. Based on Language Implementation:**  
   \- C-Style Strings:  
     \- Represented as arrays of characters terminated by a null character (\`\\0\`).  
     \- Example: \`char str\[\] \= "Hello";\`  
   \- Object-Oriented Strings:  
     \- Represented as objects with built-in methods for manipulation.  
     \- Example: \`std::string\` in C++, \`String\` in Java, and \`str\` in Python.

\---

 **5\. Based on Usage:**  
   \- Literal Strings:  
     \- Hardcoded strings in the source code.  
     \- Example: \`"Hello, World\!"\`  
   \- Dynamic Strings:  
     \- Created and manipulated at runtime.  
     \- Example: User input or strings generated by the program.

\---

 **6\. Based on Language Support:**  
   \- Primitive Strings:  
     \- Treated as primitive data types with limited functionality.  
     \- Example: Strings in older languages like BASIC.  
   \- First-Class Strings:  
     \- Treated as first-class objects with rich functionality.  
     \- Example: Strings in Python, Java, and C\#.

\---

 Summary of String Taxonomy:

| Category          | Types                          | Examples                              |  
|-----------------------|------------------------------------|------------------------------------------|  
| Mutability        | Immutable, Mutable                | Python strings (immutable), C++ \`std::string\` (mutable) |  
| Storage           | Fixed-Length, Dynamic-Length      | C character arrays (fixed), Python strings (dynamic) |  
| Encoding          | ASCII, Unicode                    | C strings (ASCII), Python 3 strings (Unicode) |  
| Language Implementation | C-Style, Object-Oriented      | C strings (C-Style), Java \`String\` (Object-Oriented) |  
| Usage             | Literal, Dynamic                  | \`"Hello"\` (literal), user input (dynamic) |  
| Language Support  | Primitive, First-Class            | BASIC strings (primitive), Python strings (first-class) |

\---

 Key Points:  
\- Strings can be classified based on their mutability, storage, encoding, implementation, usage, and language support.  
\- Understanding string taxonomy helps in choosing the right string type and operations for a given programming task.  
\- Different programming languages provide various string implementations, each with its own advantages and limitations.

This taxonomy provides a structured way to understand and work with strings in different programming contexts.

\=====================================================================  
**Below is a C program that calculates the area of a circle using pointers**. The program takes the radius of the circle as input, uses a pointer to pass the radius to a function, and calculates the area.

\---

**C Program: Calculate Area of a Circle Using Pointers**

\`\`\`c  
\#include \<stdio.h\>

// Function to calculate the area of a circle  
void calculateArea(float radius, float \*area) {  
    \*area \= 3.14159 \* radius \* radius;  // Area \= π \* r^2  
}

int main() {  
    float radius, area;

    // Input: Get the radius of the circle  
    printf("Enter the radius of the circle: ");  
    scanf("%f", \&radius);

    // Calculate the area using the function and pointers  
    calculateArea(radius, \&area);

    // Output: Display the area of the circle  
    printf("The area of the circle is: %.2f\\n", area);

    return 0;  // Indicates successful execution  
}  
\`\`\`

\---

Explanation of the Code:

1\. Function Definition:  
   \- The \`calculateArea\` function takes two arguments:  
     \- \`radius\`: The radius of the circle (passed by value).  
     \- \`\*area\`: A pointer to store the calculated area (passed by reference).  
   \- The area is calculated using the formula:    
     \\\[  
     \\text{Area} \= \\pi \\times r^2  
     \\\]  
   \- The result is stored in the memory location pointed to by \`area\`.

2\. Main Function:  
   \- The program prompts the user to enter the radius of the circle.  
   \- The \`calculateArea\` function is called with the radius and the address of the \`area\` variable.  
   \- The calculated area is displayed using \`printf\`.

\---

Example Input and Output:

\#Input:  
\`\`\`  
Enter the radius of the circle: 5  
\`\`\`

\#Output:  
\`\`\`  
The area of the circle is: 78.54  
\`\`\`

\---

Key Points:  
\- The program uses a pointer to pass the result of the area calculation back to the \`main\` function.  
\- The formula for the area of a circle is \\(\\pi \\times r^2\\), where \\(\\pi\\) is approximated as \`3.14159\`.  
\- Using pointers allows the function to modify the value of a variable in the calling function.

This program demonstrates how to use pointers to calculate and return values from a function in C.

\===================================================================  
**Structure to Store Customer Information**

In C, a structure (\`struct\`) is a user-defined data type that allows you to group related data items of different types under a single name. To store customer information, you can define a structure that includes fields such as name, address, phone number, email, and customer ID.

\---

Example: Structure to Store Customer Information

\`\`\`c  
\#include \<stdio.h\>  
\#include \<string.h\>

// Define the structure to store customer information  
struct Customer {  
    int customerID;          // Unique identifier for the customer  
    char name\[50\];           // Customer's name  
    char address\[100\];       // Customer's address  
    char phoneNumber\[15\];    // Customer's phone number  
    char email\[50\];          // Customer's email address  
};

int main() {  
    // Declare a variable of type struct Customer  
    struct Customer customer1;

    // Input: Assign values to the structure fields  
    customer1.customerID \= 101;  
    strcpy(customer1.name, "John Doe");  
    strcpy(customer1.address, "123 Main St, Springfield, IL");  
    strcpy(customer1.phoneNumber, "555-123-4567");  
    strcpy(customer1.email, "johndoe@example.com");

    // Output: Display the customer information  
    printf("Customer ID: %d\\n", customer1.customerID);  
    printf("Name: %s\\n", customer1.name);  
    printf("Address: %s\\n", customer1.address);  
    printf("Phone Number: %s\\n", customer1.phoneNumber);  
    printf("Email: %s\\n", customer1.email);

    return 0;  // Indicates successful execution  
}  
\`\`\`

\---

Explanation of the Code:

1\. Structure Definition:  
   \- The \`struct Customer\` defines a structure with the following fields:  
     \- \`customerID\`: An integer to store the unique identifier for the customer.  
     \- \`name\`: A character array to store the customer's name.  
     \- \`address\`: A character array to store the customer's address.  
     \- \`phoneNumber\`: A character array to store the customer's phone number.  
     \- \`email\`: A character array to store the customer's email address.

2\. Structure Variable:  
   \- \`customer1\` is a variable of type \`struct Customer\` used to store the information of a specific customer.

3\. Input:  
   \- Values are assigned to the structure fields using the dot (\`.\`) operator.  
   \- The \`strcpy\` function is used to copy strings into the character arrays.

4\. Output:  
   \- The program displays the customer information using \`printf\`.

\---

Example Output:

\`\`\`  
Customer ID: 101  
Name: John Doe  
Address: 123 Main St, Springfield, IL  
Phone Number: 555-123-4567  
Email: johndoe@example.com  
\`\`\`

\---

Key Points:  
\- A structure allows you to group related data items of different types under a single name.  
\- The dot (\`.\`) operator is used to access the fields of a structure.  
\- The \`strcpy\` function is used to copy strings into character arrays within the structure.

This structure can be extended to include additional fields (e.g., date of birth, gender, etc.) or used in arrays to store information for multiple customers. It provides a flexible way to organize and manage customer data in C programs.

\======================================================================  
**Below is a C program that calculates the length of a string without using any library functions like \`strlen\`.** The program iterates through the string until it encounters the null character (\`\\0\`), which marks the end of the string.

\---

 C Program: Find Length of a String Without Using Library Functions

\`\`\`c  
\#include \<stdio.h\>

// Function to calculate the length of a string  
int stringLength(char str\[\]) {  
    int length \= 0;

    // Iterate through the string until the null character is found  
    while (str\[length\] \!= '\\0') {  
        length++;  
    }

    return length;  // Return the length of the string  
}

int main() {  
    char str\[100\];

    // Input: Get the string from the user  
    printf("Enter a string: ");  
    scanf("%\[^\\n\]", str);  // Read the entire line (including spaces)

    // Calculate the length of the string  
    int length \= stringLength(str);

    // Output: Display the length of the string  
    printf("The length of the string is: %d\\n", length);

    return 0;  // Indicates successful execution  
}  
\`\`\`

\---

 Explanation of the Code:

1\. Function \`stringLength\`:  
   \- The function takes a character array (\`str\`) as input.  
   \- It initializes a variable \`length\` to 0\.  
   \- A \`while\` loop iterates through the string until the null character (\`\\0\`) is encountered.  
   \- The length of the string is returned.

2\. Main Function:  
   \- The program prompts the user to enter a string.  
   \- The \`scanf("%\[^\\n\]", str);\` statement reads the entire line of input, including spaces.  
   \- The \`stringLength\` function is called to calculate the length of the string.  
   \- The length is displayed using \`printf\`.

\---

 Example Input and Output:

\# Input:  
\`\`\`  
Enter a string: Hello, World\!  
\`\`\`

\# Output:  
\`\`\`  
The length of the string is: 13  
\`\`\`

\---

 Key Points:  
\- The program calculates the length of a string by iterating through the characters until the null character (\`\\0\`) is found.  
\- The \`scanf("%\[^\\n\]", str);\` statement reads the entire line of input, including spaces.  
\- This approach avoids using the \`strlen\` function from the standard library.

This program demonstrates how to calculate the length of a string manually in C. It is a useful exercise for understanding how strings are stored and manipulated in memory.

\# include \<stdio.h\>

// Write a program to find the length of a string without using the library function.  
int main() {  
   char name\[20\];  
   int length \= 0;

   printf("Enter your name: ");  
   scanf("%s", name);

   while (name\[length\] \!= '\\0') {  
       printf("%c\\n", name\[length\]);  
       length\++;  
   }  
   printf("The length of the string is: %d\\n", length);

   return 0;  
}

\====================================================================  
 **Definition of a Pointer**

A pointer in C is a variable that stores the memory address of another variable. Pointers are used to indirectly access and manipulate the data stored in memory. They are powerful tools for dynamic memory allocation, array handling, and function arguments.

\---

 Declaration and Usage of Pointers

\# Syntax for Declaring a Pointer:  
\`\`\`c  
data\_type \*pointer\_name;  
\`\`\`  
\- \`data\_type\`: The type of data the pointer will point to (e.g., \`int\`, \`float\`, \`char\`).  
\- \`\*\`: Indicates that the variable is a pointer.  
\- \`pointer\_name\`: The name of the pointer variable.

\# Example: Declaring and Using a Pointer

\`\`\`c  
\#include \<stdio.h\>

int main() {  
    int num \= 10;  // Declare and initialize an integer variable  
    int \*ptr;      // Declare a pointer to an integer

    ptr \= \&num;    // Assign the address of 'num' to the pointer 'ptr'

    // Output: Display the value and address of 'num' using the pointer  
    printf("Value of num: %d\\n", num);      // Direct access  
    printf("Address of num: %p\\n", \&num);   // Address of 'num'  
    printf("Value of num using pointer: %d\\n", \*ptr);  // Indirect access  
    printf("Address stored in ptr: %p\\n", ptr);        // Address stored in 'ptr'

    // Modify the value of 'num' using the pointer  
    \*ptr \= 20;  
    printf("Updated value of num: %d\\n", num);  // Value of 'num' is now 20

    return 0;  // Indicates successful execution  
}  
\`\`\`

\---

 Explanation of the Code:

1\. Variable Declaration:  
   \- \`int num \= 10;\`: Declares and initializes an integer variable \`num\` with the value \`10\`.

2\. Pointer Declaration:  
   \- \`int \*ptr;\`: Declares a pointer \`ptr\` that can store the address of an integer.

3\. Assigning Address to Pointer:  
   \- \`ptr \= \&num;\`: Assigns the address of \`num\` to the pointer \`ptr\`. The \`&\` operator is used to get the address of a variable.

4\. Accessing Value Using Pointer:  
   \- \`\*ptr\`: Dereferences the pointer to access the value stored at the address it points to (i.e., the value of \`num\`).

5\. Modifying Value Using Pointer:  
   \- \`\*ptr \= 20;\`: Modifies the value of \`num\` indirectly through the pointer.

6\. Output:  
   \- The program displays the value and address of \`num\` directly and indirectly using the pointer.

\---

 Example Output:

\`\`\`  
Value of num: 10  
Address of num: 0x7ffee4b5c9ac  
Value of num using pointer: 10  
Address stored in ptr: 0x7ffee4b5c9ac  
Updated value of num: 20  
\`\`\`

\---

 Key Points:  
\- A pointer stores the memory address of another variable.  
\- The \`&\` operator is used to get the address of a variable.  
\- The \`\*\` operator is used to dereference a pointer and access the value stored at the address it points to.  
\- Pointers allow indirect access and manipulation of variables, which is useful for dynamic memory allocation and function arguments.

This example demonstrates how to declare, initialize, and use pointers in C to access and modify variables indirectly.

\===================================================================  
 **Syntax to Declare a Structure**

In C, a structure is a user-defined data type that allows you to group related data items of different types under a single name. The syntax to declare a structure is as follows:

\`\`\`c  
struct structure\_name {  
    data\_type member1;  
    data\_type member2;  
    ...  
    data\_type memberN;  
};  
\`\`\`

\- \`struct\`: Keyword used to define a structure.  
\- \`structure\_name\`: The name of the structure (optional but recommended).  
\- \`data\_type\`: The data type of each member (e.g., \`int\`, \`float\`, \`char\`, etc.).  
\- \`member1\`, \`member2\`, ..., \`memberN\`: The members (fields) of the structure.

\---

 Example: Declaring and Using a Structure

Below is an example of declaring a structure to store information about a student, including their name, roll number, and marks.

\`\`\`c  
\#include \<stdio.h\>  
\#include \<string.h\>

// Declare a structure named 'Student'  
struct Student {  
    int rollNumber;      // Roll number of the student  
    char name\[50\];       // Name of the student  
    float marks;         // Marks obtained by the student  
};

int main() {  
    // Declare a variable of type 'struct Student'  
    struct Student student1;

    // Assign values to the structure members  
    student1.rollNumber \= 101;  
    strcpy(student1.name, "John Doe");  
    student1.marks \= 85.5;

    // Output: Display the student information  
    printf("Student Roll Number: %d\\n", student1.rollNumber);  
    printf("Student Name: %s\\n", student1.name);  
    printf("Student Marks: %.2f\\n", student1.marks);

    return 0;  // Indicates successful execution  
}  
\`\`\`

\---

 Explanation of the Code:

1\. Structure Declaration:  
   \- The \`struct Student\` defines a structure with three members:  
     \- \`rollNumber\`: An integer to store the student's roll number.  
     \- \`name\`: A character array to store the student's name.  
     \- \`marks\`: A float to store the student's marks.

2\. Structure Variable:  
   \- \`student1\` is a variable of type \`struct Student\` used to store the information of a specific student.

3\. Assigning Values:  
   \- Values are assigned to the structure members using the dot (\`.\`) operator.  
   \- The \`strcpy\` function is used to copy the student's name into the \`name\` member.

4\. Output:  
   \- The program displays the student's information using \`printf\`.

\---

 Example Output:

\`\`\`  
Student Roll Number: 101  
Student Name: John Doe  
Student Marks: 85.50  
\`\`\`

\---

 Key Points:  
\- A structure allows you to group related data items of different types under a single name.  
\- The dot (\`.\`) operator is used to access the members of a structure.  
\- The \`strcpy\` function is used to copy strings into character arrays within the structure.

This example demonstrates how to declare, initialize, and use a structure in C. Structures are widely used to represent real-world entities like students, employees, products, etc.  
\===================================================================

### **1a. Explain different types of computers. (6 Marks)**

Computers are classified into the following types based on their size, purpose, and performance:

1. **Supercomputers**: Extremely fast and used for complex calculations in scientific research, weather forecasting, and simulations.  
2. **Mainframe Computers**: Large, powerful machines used by organizations for bulk data processing, banking, and government operations.  
3. **Mini Computers**: Mid-sized computers used for industrial applications, servers, and scientific computations.  
4. **Microcomputers** (Personal Computers \- PC): Small, affordable, and used by individuals for personal and business applications.  
5. **Embedded Systems**: Specialized computers embedded in devices like washing machines, ATMs, and medical devices.

### **1b. What is Software? Explain different types of software. (6 Marks)**

**Software** is a collection of programs that instruct the computer to perform tasks.

Types of Software:

1. **System Software**: Manages hardware and system resources. Examples: Operating System (Windows, Linux), Device Drivers.  
2. **Application Software**: Designed for end-users to perform specific tasks. Examples: MS Office, Media Players.  
3. **Utility Software**: Supports system operations like file management, antivirus, compression tools.  
4. **Programming Software**: Used for software development. Examples: Compilers, Debuggers.

---

### **1c. With a neat diagram, explain the basic structure of a computer. (8 Marks)**

A computer consists of the following basic components:

1. **Input Unit**: Takes input from external devices (keyboard, mouse).  
2. **Central Processing Unit (CPU)**:  
   * **Arithmetic Logic Unit (ALU)**: Performs arithmetic and logical operations.  
   * **Control Unit (CU)**: Manages instruction execution.  
   * **Registers**: Small storage for quick data access.  
3. **Memory (RAM/ROM)**: Stores data and instructions temporarily and permanently.  
4. **Storage Devices**: Hard drives, SSDs for long-term storage.  
5. **Output Unit**: Displays results through monitors, printers.

**Diagram:**

pgsql  
CopyEdit  
        \+----------------------+  
         |      Input Unit      |  
         \+----------------------+  
                  ↓  
         \+----------------------+  
         |      CPU (ALU \+ CU)  |  
         \+----------------------+  
                  ↓  
         \+----------------------+  
         |        Memory        |  
         \+----------------------+  
                  ↓  
         \+----------------------+  
         |   Storage Devices    |  
         \+----------------------+  
                  ↓  
         \+----------------------+  
         |      Output Unit     |  
         \+----------------------+

---

### **2a. Explain the general structure of a C program with an example. (8 Marks)**

A basic C program has the following structure:

c  
CopyEdit  
\#include \<stdio.h\>  // Header files

int main() {        // Main function  
    printf("Hello, World\!");  // Statement  
    return 0;       // Return statement  
}

Components:

1. **Preprocessor Directives**: \#include \<stdio.h\> \- Includes libraries.  
2. **Main Function**: int main() { } \- Entry point of execution.  
3. **Statements & Expressions**: printf("Hello, World\!"); \- Code logic.  
4. **Return Statement**: return 0; \- Ends the program.

---

### **2b. What is a token? Explain different types of tokens in C. (8 Marks)**

**Token**: The smallest unit in a C program.

Types:

1. **Keywords**: Reserved words (e.g., int, return).  
2. **Identifiers**: User-defined names (e.g., main, sum).  
3. **Constants**: Fixed values (e.g., 3.14, 100).  
4. **Strings**: Sequence of characters (e.g., "Hello").  
5. **Operators**: Symbols for operations (\+, \-, \*, /).  
6. **Special Symbols**: {, }, ;, , used in syntax.

---

### **2c. Evaluate the expressions. (4 Marks)**

Given:

* a=11, b=6, c=0, d=7, e=5

#### **Expression 1: 22 \+ 3 \< 6 && \!5 || 22 \== 7 && 22 – 2 \> \+5**

* 25 \< 6 && \!5 || 22 \== 7 && 20 \> 5  
* 0 && 0 || 0 && 1  
* 0 || 0  
* **Result \= 0**

#### **Expression 2: a \+ 2 \> b || \!c && a \== d \* a \- 2 \<= e**

* 11 \+ 2 \> 6 || \!0 && 11 \== 7 \* 11 \- 2 \<= 5  
* 13 \> 6 || 1 && 11 \== 77 \- 2 \<= 5  
* 1 || 1 && 0  
* 1 || 0  
* **Result \= 1**

---

## **MODULE 2**

### **3a. Explain formatted input and output statements with examples. (6 Marks)**

**Formatted Input (scanf())**: Reads formatted data from the user.

Example:

c  
CopyEdit  
int a;  
scanf("%d", \&a);  // Reads integer input

**Formatted Output (printf())**: Displays formatted output.

Example:

c  
CopyEdit  
printf("Value: %d", a);  // Prints integer value

---

### **3b. Explain if, if-else, nested if-else, and cascaded if-else with examples and syntax. (8 Marks)**

1. **if Statement**:

c  
CopyEdit  
if (a \> 0\) {  
    printf("Positive");  
}

2. **if-else Statement**:

c  
CopyEdit  
if (a \> 0\)  
    printf("Positive");  
else  
    printf("Negative");

3. **Nested if-else**:

c  
CopyEdit  
if (a \> 0\) {  
    if (a % 2 \== 0\)  
        printf("Even Positive");  
    else  
        printf("Odd Positive");  
}

4. **Cascaded if-else**:

c  
CopyEdit  
if (a \> 0\)  
    printf("Positive");  
else if (a \< 0\)  
    printf("Negative");  
else  
    printf("Zero");

---

### **3c. Electricity bill calculation program. (6 Marks)**

c  
CopyEdit  
\#include \<stdio.h\>

int main() {  
    char name\[50\];  
    int units;  
    float charge, total;

    printf("Enter name and units consumed: ");  
    scanf("%s %d", name, \&units);

    if (units \<= 200\)  
        charge \= units \* 0.80;  
    else if (units \<= 300\)  
        charge \= 200 \* 0.80 \+ (units \- 200\) \* 0.90;  
    else  
        charge \= 200 \* 0.80 \+ 100 \* 0.90 \+ (units \- 300\) \* 1.00;

    total \= charge \< 100 ? 100 : charge;  
    if (total \> 400\)  
        total \+= total \* 0.15;

    printf("User: %s, Total Bill: Rs. %.2f\\n", name, total);  
    return 0;  
}

---

I have provided complete answers for **Module 1 & 2**. Let me know if you want **Module 3, 4, and 5** as well\!

4o

##### **You said:**

yes

###### **ChatGPT said:**

Here are the answers to all the questions from the **C-Programming for Problem Solving (18CPS13/23)** paper.

---

## **MODULE 1**

### **1 (a) Explain different types of computers. (6 Marks)**

Computers are classified based on size, purpose, and processing power:

1. **Supercomputers** – High-performance machines for scientific calculations, weather forecasting, and simulations.  
2. **Mainframe Computers** – Used in large organizations for bulk data processing (e.g., banking, government).  
3. **Minicomputers** – Mid-range computers used in business and research.  
4. **Microcomputers (Personal Computers \- PCs)** – Used by individuals for daily computing tasks.  
5. **Embedded Computers** – Special-purpose systems inside devices like washing machines, ATMs, and smartwatches.

---

### **1 (b) What is software? Explain different types of software. (6 Marks)**

**Software** is a set of instructions that control computer hardware.

1. **System Software** – Includes the OS (Windows, Linux) and utilities that manage hardware.  
2. **Application Software** – User programs like MS Office, browsers, and media players.  
3. **Programming Software** – Compilers, debuggers, and editors for writing code.  
4. **Middleware** – Connects different software systems (e.g., database middleware).

---

### **1 (c) With a neat diagram, explain the basic structure of a computer. (8 Marks)**

A computer consists of:

1. **Input Unit** – Keyboard, mouse, scanner, etc.  
2. **CPU (Central Processing Unit)** –  
   * **ALU (Arithmetic and Logic Unit)** – Performs calculations and logical operations.  
   * **Control Unit (CU)** – Directs data flow and execution of instructions.  
3. **Memory Unit** – Primary (RAM, ROM) and Secondary (HDD, SSD).  
4. **Output Unit** – Monitor, printer, speakers, etc.

*(Diagram: Basic block diagram of a computer system.)*

---

### **\*\***

##### **You said:**

now give me 3 & 4 modules only

###### **ChatGPT said:**

## **MODULE 3**

### **5 (a) What is an array? How are single-dimensional and two-dimensional arrays declared and initialized? (12 Marks)**

An **array** is a collection of elements of the same data type stored in contiguous memory locations.

**Single-Dimensional Array (1D Array)**  
 **Declaration:**

 c  
CopyEdit  
int arr\[5\]; // Declares an array of 5 integers  
 **Initialization:**

 c  
CopyEdit  
int arr\[5\] \= {10, 20, 30, 40, 50};

* 

**Two-Dimensional Array (2D Array)**  
 **Declaration:**

 c  
CopyEdit  
int matrix\[3\]\[3\]; // Declares a 3x3 matrix  
 **Initialization:**

 c  
CopyEdit  
int matrix\[2\]\[3\] \= {  
    {1, 2, 3},   
    {4, 5, 6}  
};

* 

---

### **5 (b) Write an algorithm and develop a C program that reads N integer numbers and arranges them in ascending order using Selection Sort. (8 Marks)**

#### **Algorithm for Selection Sort**

1. Start from the first element, assume it as the minimum.  
2. Compare it with all other elements in the array.  
3. Swap with the smallest element found.  
4. Repeat for all elements until the array is sorted.

#### **C Program for Selection Sort**

c  
CopyEdit  
\#include \<stdio.h\>

void selectionSort(int arr\[\], int n) {  
    int i, j, min, temp;  
    for (i \= 0; i \< n \- 1; i++) {  
        min \= i;  
        for (j \= i \+ 1; j \< n; j++) {  
            if (arr\[j\] \< arr\[min\])  
                min \= j;  
        }  
        temp \= arr\[i\];  
        arr\[i\] \= arr\[min\];  
        arr\[min\] \= temp;  
    }  
}

int main() {  
    int arr\[100\], n, i;  
    printf("Enter the number of elements: ");  
    scanf("%d", \&n);  
      
    printf("Enter %d integers: ", n);  
    for (i \= 0; i \< n; i++)  
        scanf("%d", \&arr\[i\]);

    selectionSort(arr, n);

    printf("Sorted array: ");  
    for (i \= 0; i \< n; i++)  
        printf("%d ", arr\[i\]);  
      
    return 0;  
}

---

### **6 (a) Explain string manipulation library functions with their syntaxes. Write a program to check whether a string is palindrome or not. (12 Marks)**

**Common String Manipulation Functions:**

| Function | Description | Syntax |
| ----- | ----- | ----- |
| strlen() | Returns string length | int len \= strlen(str); |
| strcpy() | Copies one string to another | strcpy(dest, src); |
| strcat() | Concatenates two strings | strcat(str1, str2); |
| strcmp() | Compares two strings | strcmp(str1, str2); |
| strrev() | Reverses a string (Not standard in C) | strrev(str); |

#### **C Program to Check Palindrome String**

c  
CopyEdit  
\#include \<stdio.h\>  
\#include \<string.h\>

int main() {  
    char str\[100\], rev\[100\];  
    printf("Enter a string: ");  
    scanf("%s", str);  
      
    strcpy(rev, str);  
    strrev(rev); // Reverse the string

    if (strcmp(str, rev) \== 0\)  
        printf("Palindrome\\n");  
    else  
        printf("Not a Palindrome\\n");

    return 0;  
}

---

### **6 (b) Write an algorithm and develop a C program to search an integer from N numbers in ascending order using binary search. (8 Marks)**

#### **Algorithm for Binary Search**

1. Initialize low \= 0, high \= N-1.  
2. Find mid \= (low \+ high) / 2.  
3. If arr\[mid\] \== key, return index.  
4. If arr\[mid\] \< key, search the right half.  
5. If arr\[mid\] \> key, search the left half.  
6. Repeat until low \> high.

#### **C Program for Binary Search**

c  
CopyEdit  
\#include \<stdio.h\>

int binarySearch(int arr\[\], int n, int key) {  
    int low \= 0, high \= n \- 1, mid;  
    while (low \<= high) {  
        mid \= (low \+ high) / 2;  
        if (arr\[mid\] \== key)  
            return mid;  
        else if (arr\[mid\] \< key)  
            low \= mid \+ 1;  
        else  
            high \= mid \- 1;  
    }  
    return \-1;  
}

int main() {  
    int arr\[100\], n, key, i;  
    printf("Enter number of elements: ");  
    scanf("%d", \&n);  
      
    printf("Enter sorted elements: ");  
    for (i \= 0; i \< n; i++)  
        scanf("%d", \&arr\[i\]);

    printf("Enter element to search: ");  
    scanf("%d", \&key);

    int result \= binarySearch(arr, n, key);  
    if (result \!= \-1)  
        printf("Element found at index %d\\n", result);  
    else  
        printf("Element not found\\n");

    return 0;  
}

---

## **MODULE 4**

### **7 (a) What is a function? Explain different classifications of user-defined functions based on parameter passing and return type with examples. (12 Marks)**

A **function** is a reusable block of code that performs a specific task.

**Classification of User-Defined Functions:**

**Function without parameters and return type**  
 c  
CopyEdit  
void greet() {  
    printf("Hello, World\!\\n");  
}

1. 

**Function with parameters but no return type**  
 c  
CopyEdit  
void add(int a, int b) {  
    printf("Sum: %d\\n", a \+ b);  
}

2. 

**Function with no parameters but return type**  
 c  
CopyEdit  
int getNumber() {  
    return 10;  
}

3. 

**Function with parameters and return type**  
 c  
CopyEdit  
int multiply(int a, int b) {  
    return a \* b;  
}

4. 

---

### **7 (b) Write a C-program using functions to generate the Fibonacci series. (8 Marks)**

c  
CopyEdit  
\#include \<stdio.h\>

void fibonacci(int n) {  
    int a \= 0, b \= 1, c;  
    printf("Fibonacci Series: %d %d ", a, b);  
    for (int i \= 2; i \< n; i++) {  
        c \= a \+ b;  
        printf("%d ", c);  
        a \= b;  
        b \= c;  
    }  
}

int main() {  
    int n;  
    printf("Enter number of terms: ");  
    scanf("%d", \&n);  
    fibonacci(n);  
    return 0;  
}

---

### **8 (a) What is recursion? Explain. Write a C-program using a recursive function for Binary to Decimal Conversion. (10 Marks)**

**Recursion** is a function calling itself until a base condition is met.

#### **Binary to Decimal Conversion Using Recursion**

c  
CopyEdit  
\#include \<stdio.h\>

int binaryToDecimal(int n) {  
    if (n \== 0\)  
        return 0;  
    else  
        return (n % 10 \+ 2 \* binaryToDecimal(n / 10));  
}

int main() {  
    int binary;  
    printf("Enter binary number: ");  
    scanf("%d", \&binary);  
    printf("Decimal equivalent: %d\\n", binaryToDecimal(binary));  
    return 0;  
}

---

### **8 (b) Write a C program using functions to swap two numbers using global variables and call by reference. (6 Marks)**

c  
CopyEdit  
\#include \<stdio.h\>

void swap(int \*a, int \*b) {  
    int temp \= \*a;  
    \*a \= \*b;  
    \*b \= temp;  
}

int main() {  
    int x \= 5, y \= 10;  
    swap(\&x, \&y);  
    printf("Swapped values: x \= %d, y \= %d\\n", x, y);  
    return 0;  
}

---

[image1]: <data:image/png;base64,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>