/*RECURSION*/

#include <stdio.h>

void outerFn();
int main()
{
    outerFn();
   // innerFn();

    return 0;
}
void outerFn()
{
    
    printf("Outer fn\n");
    void innerFn()
    {
        printf("Innerfn\n");
    }
    innerFn();
}
    