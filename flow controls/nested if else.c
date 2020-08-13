#include<stdio.h>

int main()
{
    int marks;

    printf("Enter your marks for paper : ");
    scanf("%d",&marks);

    if(marks>=35)
    {
        if(marks<=100){
            printf("Pass\n");
        }
        else{
            printf("Invalid (your marks>100)\n");
        }
    }

    else
    {
        if(marks>=0){
            printf("Fail\n");
        }
        else{
            printf("Invalid (your marks<0)\n");
        }

    }

    printf("Keep it up\n");
    return 0;
}




