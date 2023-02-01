#include <stdio.h>
// Function declaration or protype
void printHello();
void goodBye();
int main()
{
    printHello(); // function calling
    goodBye();

    return 0;
}
// function defination
void printHello()
{
    printf("Hello\n");
}
void goodBye()
{
    printf("Good Bye");
}