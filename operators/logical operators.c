#include<stdio.h>

int main()
{
    printf("\n  AND Operator :\n");
    printf("%d\n",0&&0);
    printf("%d\n",234&&0);
    printf("%d\n",0&&1);
    printf("%d\n",234&&100);

    printf("\n  OR Operator :\n");
    printf("%d\n",0||0);
    printf("%d\n",234||0);
    printf("%d\n",0||1);
    printf("%d\n",234||100);

    printf("\n  NOT Operator :\n");
    printf("%d\n",!0);
    printf("%d\n",!234);

    return 0;
}



