#include "main.h"
#include <stdio.h>
/* tests */
void check(int a, int b)
{
    printf("TEST _printf=>[%d] printf=>[%d] ? ", a, b);
    if (a != b)
        printf("FAILED");
    else
        printf("OK");
    printf(" \n");
}

int main(void)
{
    setbuf(stdout, 0);

    check(
        _printf("hello world \n"),
        printf("hello world \n"));
    check(
        _printf("hello world [%d] \n", 42),
        printf("hello world [%d] \n", 42));
    check(
        _printf("hello world [%i] \n", 42),
        printf("hello world [%i] \n", 42));
    check(
        _printf("", 42),
        printf("", 42));
    check(
        _printf(""),
        printf(""));
    check(
        _printf("string null -> %s \n", NULL),
        printf("string null -> %s \n", NULL));
    check(
        _printf("string valid -> %s \n", "nice"),
        printf("string valid -> %s \n", "nice"));
    check(
        _printf("test number -> %c \n", 'a'),
        printf("test number -> %c \n", 'a'));
    check(
        _printf("%"),
        printf("%"));
    check(
        _printf("%%%%"),
        printf("%%%%"));
    check(
        _printf("%%%d"),
        printf("%%%d"));

    return (0);
}
