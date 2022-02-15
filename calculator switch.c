#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    char op;
    int a,b;

    printf("Selectati tipul calculului (+,-,/,*):\n");
        scanf("%c",&op);

    printf("Introduceti numerele:\n");
        scanf("%d",&a);
        scanf("%d",&b);

    switch(op)
    {
        case'+': printf("%d + %d = %d",a,b,a+b);
        break;
        case'-': printf("%d - %d = %d",a,b,a-b);
        break;
        case'/': printf("%d / %d = %d",a,b,a/b);
        break;
        case'*': printf("%d * %d = %d",a,b,a*b);
        break;
    }
       return 0;
}
