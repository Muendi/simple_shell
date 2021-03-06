# 0x15. C - Simple Shell

## Description

In this project we are tasked with creating our own simple UNIX commandline interpreter. The program output must be the same output as sh (/bin/sh) as well as the exact same error output. The only difference is when you print an error, the name of the program must be equivalent to your argv[0].

---

## Instructions

* Compiling the program:
`gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
* Interactive mode:
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$ ```

* Non - interactive mode
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$ ```

---
## Project Requirements
- All your files will be compiled on Ubuntu 14.04 LTS
- Your C programs and functions will be compiled with gcc 4.8.4 using the flags `-Wall -Werror -Wextra and -pedantic`
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- No more than 5 functions per file
- All your header files should be include guarded
- Use system calls only when you need to

---
## Tasks

### 0. README, man, AUTHORS
* Write a (README)[./README.md]
* Write a (man)[./man_1_simple_shell] for your shell.
* You should have an (AUTHORS)[./AUTHORS] file at the root of your repository, listing all individuals having contributed content to the repository.

### 1. Betty would be proud
* Write a beautiful code that passes the Betty checks

### 2. Simple shell 0.1
* Write a UNIX command line interpreter.
* Your Shell should:
	- Display a prompt and wait for the user to type a command. A command line always ends with a new line.
	- The prompt is displayed again each time a command has been executed.
	- The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
	- The command lines are made only of one word. No arguments will be passed to programs.
	- If an executable cannot be found, print an error message and display the prompt again.
	- Handle errors.
	- You have to handle the "end of file" condition (Ctrl+D)

### 3. Simple shell 0.2
* Handle command lines with arguments

### 4. Simple shell 0.3
* Handle the PATH

### 5. Simple shell 0.4
* Implement the exit built-in, that exits the shell
* Usage: exit
* You dont have to handle any argument to the built-in exit

### 6. Simple shell 1.0
* Implement the env built-in, that prints the current environment

---
## Files

File|Description
---|---
[main.h](./main.h)|header file
[main.c](./main.c)|entry point for shell
[built.c](./built.c)|built-in functions
[strings.c](./strings.c)|inbuilt string functions
[strings_2.c](./strings_2.c)| additional string functiona
[_getenv.c](./_getenv.c)|gets inputted env
[man_1_simple_shell](./man_1_simple_shell)|man page
[shell.c](./shell.c)|executes the shell]

---

### 7. Simple shell 0.2.1
* Simple shell 0.2 +
* You are not allowed to use strtok

### 8. Simple shell 0.4.1 
* Simple shell 0.4 +
* handle arguments for the built-in exit
* Usage: exit status, where status is an integer used to exit the shell

### 9.  setenv, unsetenv 
* Simple shell 1.0 +

* Implement the setenv and unsetenv builtin commands

    * setenv
        Initialize a new environment variable, or modify an existing one
        Command syntax: setenv VARIABLE VALUE
        Should print something on stderr on failure
    * unsetenv
        Remove an environment variable
        Command syntax: unsetenv VARIABLE
        Should print something on stderr on failure
		
### 10. 





