README.md

0x12. C - Singly linked lists

## 0. Print list
A function that prints all the elements of a list_t list.

## 1. List length
A function that returns the number of elements in a linked list_t list.
Prototype: size_t list_len(const list_t *h);

## 2. Add node
A function that adds a new node at the beginning of a list_t list.
Prototype: list_t *add_node(list_t **head, const char *str);

## 3. Add node at the end
A function that adds a new node at the end of a list_t list.
Prototype: list_t *add_node_end(list_t **head, const char *str);

## 4. Free list
A function that frees a list_t list.
Prototype: void free_list(list_t *head);

## 5. The Hare and the Tortoise
 A function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed using printf.

## 6. Real programmers can write assembly code in any language
Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
Used: 
.the printf function
.interrupts
-Program will be compiled using nasm and gcc:
