#include<stdio.h>

int main()
{
    int marks;

    printf("Enter your marks for paper : ");
    scanf("%d",&marks);

    if(marks>=35&&marks<=100)
    {
        printf("Pass\n");
    }
    else if(marks<35&&marks>=0)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Invalid\n");
    }

    printf("Keep it up");
    return 0;
}



