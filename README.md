# push_swap

This is a project that focuses on sorting a stack of integers using a limited set of operations. The goal is to arrange the stack in ascending order by applitying a a series of limited operations.

## Features

- Sorting a stack of integers in ascending order.
- Utilizes the 'push' and 'swap' operations on the stack.
- Validation of the sorted stack using the 'checker' program.

## Usage

1.- Clone the repository.

2.- Compile it through the 'make' rule. (The Makefile will handle everything)

    make

3.- Run the 'push_swap' program, passing the unsorted stack of integers as command-line arguments.

    ./push_swap 1 5 3 2 4

or

    ./push_swap "1 5 3 2 4"

4.- Optionally, use the 'bonus'rule to compile the 'checker' program passing the sorted stack as command-line arguments.

    ./push_swap 1 5 3 2 4 | ./checker 1 5 3 2 4

or    

    ./push_swap "1 5 3 2 4" | ./checker "1 5 3 2 4"
