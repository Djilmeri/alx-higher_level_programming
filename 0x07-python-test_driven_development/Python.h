#ifndef PYTHON_H
#define PUTHON_H

#include <stdio.h>

/**
 * PyObject - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct PyObject
{
int n;
struct PyObject *next;
} PyObject;
/**
 * print_python_string - Prints information about Python strings.
 * @p: A PyObject string object.
 */
void print_python_string(PyObject *p);
#endif
