#include <stdio.h>
#include <unistd.h>
int main()
{
    printf("hello\n");
    fork();
    fork();
}
