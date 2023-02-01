#include <stdio.h>
// declaration/prototype
void printHello();
int main()
{
    printHello();
    printHello(); // function call
    printHello();
    return 0;
}
// function Defination
void printHello()
{
    printf("My name is ");
    printf("Himel\n");
}