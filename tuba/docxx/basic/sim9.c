//The Display Size of the Different Data Type
#include<stdio.h>
void size();
//prototype
void size()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

 // sizeof evaluates the size of a variable
    printf("Size of int: %lu bytes\n", sizeof(intType));
    printf("Size of float: %lu bytes\n", sizeof(floatType));
    printf("Size of double: %lu bytes\n", sizeof(doubleType));
    printf("Size of char: %lu byte\n", sizeof(charType));
}
//main function
int main()
{
   size();
}
