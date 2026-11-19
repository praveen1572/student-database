# Student Record Management System

A menu-driven **Student Record Management System** developed in C using a Singly Linked List. The application allows users to efficiently manage student information through various record operations, searching, sorting, and file handling.

## Features

- **Add Records:** Create new student records using dynamic memory allocation.
- **Delete Records:** Delete student records using roll number or name.
- **Display Records:** View all stored student details.
- **Modify Records:** Update student information using roll number, name, or percentage.
- **Search Records:** Find student records based on specified criteria.
- **Sort Records:** Arrange records based on:
  - Roll Number
  - Name
  - Percentage
- **Reverse List:** Reverse the order of nodes in the linked list.
- **Delete All:** Remove all student records and free allocated memory.
- **File Handling:**
  - Save student records to a file.
  - Load previously saved records.
  - Save and exit or exit without saving.

## Data Structure

The project uses a **Singly Linked List** to store student records dynamically. Each node contains the student's roll number, name, percentage, and a pointer to the next node.

```c
typedef struct student {
    int roll;
    char name[50];
    float percentage;
    struct student *next;
} stu;
```

## Concepts Used

- C Programming and Modular Programming
- Structures and Pointers
- Dynamic Memory Allocation (`malloc`, `free`)
- Singly Linked List Operations
- File Handling (`fopen`, `fread`, `fwrite`, `fclose`)
- String Manipulation
- Searching and Sorting Algorithms
- Header Files and Multiple Source Files
- Makefile and GCC Compilation

## Project Highlights

- Dynamic creation and management of student records without a predefined array size.
- Efficient insertion, deletion, modification, and traversal of linked list nodes.
- Memory management using dynamic allocation and deallocation.
- File-based storage for maintaining student records between executions.
- Modular code organization for better readability and maintainability.
- Menu-driven interface for user interaction.

## Compilation and Execution

The project includes a Makefile to simplify compilation.

```bash
make
```

Run the executable:

```bash
./a.out
```

## Objective

To develop a practical application in C that demonstrates the implementation of linked lists, pointers, dynamic memory allocation, file handling, searching, sorting, and modular programming through a student record management system.
