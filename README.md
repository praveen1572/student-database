# Student Record Management System

A menu-driven Student Record Management System written in C.

## Features

- Add new student records
- Delete records by roll number or name
- Display student records
- Modify records by roll number, name, or percentage
- Search student records
- Sort records by:
  - Roll number
  - Name
  - Percentage
- Reverse the linked list
- Delete all records
- Save records to a file
- Load records from a file
- Save and exit / exit without saving
- Dynamic memory allocation
- Singly linked list implementation
- Modular programming using multiple source files
- Makefile for compilation

## Data Structure

The project uses a singly linked list:

```c
typedef struct student {
    int roll;
    char name[50];
    float percentage;
    struct student *next;
} stu;