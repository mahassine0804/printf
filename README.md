___Printf Project___
This team project is part of the curriculum at [Your Institution's Name]. The _printf function replicates the functionality of the standard C library's printf() function.

___Table of Contents___
Introduction
Usage
File Compilation
Return Value
Format Specification
Examples
Tasks
Contributing
License
Acknowledgments
___Introduction___
The _printf function provides a way to print formatted text to the standard output. It accepts a format string with various conversion specifiers, which allow for the insertion of different types of data into the output. This project serves as an opportunity to learn the complexities of implementing a key feature of the C standard library.

___Usage__
To use the _printf function, call it as follows:

c
Copy code
int _printf(const char *format, ...);
Where:

format is the format string that contains conversion specifiers and regular characters.
The ellipsis (...) represents variable arguments corresponding to the format specifiers.
File Compilation
All project files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with the following command:

bash
Copy code
$ gcc -Wall -Werror -Wextra -pedantic *.c
Return Value
The _printf function returns the number of characters printed on success.
It returns -1 on failure.
Format Specification
The format string can contain the following conversion specifiers:

%c: Converts an input into a character.
%s: Converts an input into a string.
%d: Converts an input into a base 10 integer.
%i: Converts an input into an integer.
%b: Converts an unsigned int argument into binary.
%u: Converts an input into an unsigned integer.
%o: Converts an input into an octal number.
%x: Converts an input into a hexadecimal number.
%X: Converts an input into a hexadecimal number with capital letters.
%S: Prints a string, handling non-printable characters as \x followed by the ASCII code value in hexadecimal (upper case, always 2 characters).
%p: Converts an integer input into a pointer address.
%r: Prints the reversed string.
%R: Prints the ROT13'ed string.
Examples
c
Copy code
_printf("Hello, main\n");        // Prints "Hello, Main" followed by a new line
_printf("%s", "Hello");          // Prints "Hello"
_printf("This is a number: %d", 98); // Prints "This is a number: 98"
Tasks
This project is divided into several tasks. Completed tasks are linked to the corresponding files. These tasks involve:

Task 0: Implementing basic functionality for conversion specifiers %c and %s.
Task 1: Handling conversion specifiers %d and %i.
Task 2: Creating a man page for the function.
Task 3: Implementing conversion specifier %b.
Task 4: Handling conversion specifiers %u, %o, %x, and %X.
Task 5: Using a local buffer to minimize write calls.
Task 6: Adding custom conversion specifier %S.
Task 7: Implementing conversion specifier %p.
Task 8: Handling flag characters +, space, and # for non-custom conversion specifiers.
Task 9: Implementing length modifiers l and h for non-custom conversion specifiers.
Task 10: Implementing the field width for non-custom conversion specifiers.
Task 11: Handling precision for non-custom conversion specifiers.
Task 12: Handling the 0 flag character for non-custom conversion specifiers.
Task 13: Handling the - flag character for non-custom conversion specifiers.
Task 14: Adding custom conversion specifier %r.
Task 15: Adding custom conversion specifier %R.
Task 16: Ensuring that all options work well together.
Contributing
If you'd like to contribute to this project, please follow our guidelines for contributions. You can also reach out to [Your Name] for more details on how to get involved.

License
This project is licensed under the [Your License Type] - see the LICENSE.md file for details.

Acknowledgments
We'd like to thank [List Any Contributors or Acknowledgments] for their contributions to this project.

© [2023] [ZAYAD and MOHAMMED]




