# _printf

Hey there! We're excited to share our custom implementation of the classic C programming function `printf`. This project is a cool showcase of the C skills we've been developing. Big shoutout to Christophe MARIE REINE and Thomas VIARD from cohort 22 at Holberton School IDF at l'Esplanade de la Défense for bringing this to life!

## Authors 
Thomas Viard https://github.com/ThomasVrd11 #C22 Holberton IDF  
Christophe Marie Reine https://github.com/christophemr #C22 Holberton IDF

## What's `_printf`?
It's our take on the standard `printf` function. Here's the prototype:

### Some quick examples

- **Strings**:
  - **Input**: `_printf("%s\n", "This should be a string.");`
  - **Output**: `This should be a string.`

- **Characters**:
  - **Input**: `_printf("The first letter in the alphabet is %c\n", 'A');`
  - **Output**: `The first letter in the alphabet is A`

- **Integers**:
  - **Input**: `_printf("Im a student from Cohort %i\n", 22);`
  - **Output**: `Im a student from Cohort 22`

## Project requirements
- We're compiling all files on Ubuntu 14.04 LTS.
- We use gcc 4.8.4 with flags `-Wall -Werror -Wextra -pedantic`.
- Our code sticks to the Betty style and its a nightmare.
- No global variables here!
- Authorized functions and macros include `write`, `malloc`, `free`, `va_start`, `va_end`, `va_copy`, `va_arg`.

## What we've done precisely!
### Mandatory tasks
- Wrote a function that outputs with conversion specifiers `c`, `s`, and `%`.
- Handled conversion specifiers `d`, `i`.
- Whipped up a man page for our function.



## File breakdown, what is what ?
- `_printf.c`: The main attraction! Implements `_printf` that outputs formatted text.
- `_putchar.c`: Our helper to write characters to stdout.
- `main.h`: The header file with all the function prototypes for `_printf`.
- `print_id.c print_int.c print_deci.c print_s.c print_c.c print_purcent.c`: The core functions handling specifiers `c`, `s`, `%`, `d` and `i`.
- `selection.c`: Plays matchmaker, linking format specifiers to their respective functions.
- `man_3_printf`: The manual page. Check it out by typing `man ./man_3_printf` in your terminal.

## Getting started with our `_printf` ! (you should try) Guide for beginners

Curious to try out our `_printf` function? Awesome! Here's a quick guide to get you up and running. Don't worry if you're new to this – we'll walk you through step by step.

### Prerequisites

Before we get started, make sure you have `gcc` installed on your machine. You'll need it to compile the source code. You can check if `gcc` is installed and its version by running this in your terminal:
````
gcc --version
````

### Installation

1. **Clone the Repository**:  
   First, clone this repo to your local machine. Open your terminal and run:
````
git clone https://github.com/ThomasVrd11/holbertonschool-printf.git
````

3. **Compile the Code**:  
Now, let's compile all the source files. Run this command:
`````
gcc -Wall -Werror -Wextra -pedantic *.c -o _printf
`````
This will compile all the `.c` files and create an executable named `_printf`.

4. **Run the Executable**:  
You're all set! Try running the program:
`````
./_printf
`````

### Usage

Feel free to use our `_printf` function in your C programs. Just include our header file in your code, and you're good to go:
`````c
#include "main.h"
`````
That's it! Enjoy using _printf, and we hope it makes your coding a bit more fun and a lot easier. If you have any questions or run into issues, don't hesitate to reach out.

Happy coding!
## Flowchart
