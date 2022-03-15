#include <stdio.h>
#include <unistd.h>
int main(void)
{
    printf("hello\n");
    fork();
    printf("idiot\n");
    fork();
    printf("hiluuuu");
    return 0;
}
