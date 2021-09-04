# Shell project for Holberton School :mage_man:

# How to use:

## Compilation:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

## Usage:
```
$ ./hsh
$ /bin/ls
hsh main.c shell.c
$
$ exit
$
```
# Tasks:
- [x] Readme
- [ ] Man Page
- [ ] Authors File
- [ ] Betty Compliant
- [ ] Valgrind Compliant
- [ ] UNIX Command Line Interpreter
  - [ ] Display a prompt and wait for the user to type a command. A command line always ends with a new line.
  - [ ] The prompt is displayed again each time a command has been executed.
  - [ ] The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
  - [ ] The command lines are made only of one word. No arguments will be passed to programs.
  - [ ] If an executable cannot be found, print an error message and display the prompt again.
  - [ ] Handle errors.
  - [ ] Handle the “end of file” condition (Ctrl+D)
- [ ] Handle command lines with arguments
- [ ] Handle the PATH
  - [ ] fork must not be called if the command doesn’t exist
- [ ] Implement the exit built-in, that exits the shell
- [ ] Implement the env built-in, that prints the current environment
- [ ] blog post describing step by step what happens when you type ls -l *.c

# Authors:
[@CalicoWhoMan](https://github.com/CalicoWhoMan)

[@IsaacGreenMachine](https://github.com/IsaacGreenMachine)
