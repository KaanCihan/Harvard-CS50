#include <stdio.h>

int main(void)
{
    str name = get_string("What is your name?");
    printf("Hello, world %s\n",name);
}