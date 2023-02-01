#include <stdio.h>
// funciton declaration
void indian();
void bangladeshi();
int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch == 'i')
    {
        indian(); // function calling
    }
    if (ch == 'b')
    {
        /* code */
        bangladeshi(); // function calling
    }

    return 0;
}

// funciton defination

void indian()
{
    printf("Namaste");
}
void bangladeshi()
{
    printf("Assalamualaikum");
}