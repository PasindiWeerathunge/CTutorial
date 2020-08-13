#include <stdio.h>

int main()
{
    printf("Value :%6d\n", 85);
    printf("Value :%-6d\n\n", 85);
    printf("Value :%6d\n", -2913);
    printf("Value :%-6d\n\n", -2913);

    printf("Value :%10f\n", 5.4321);
    printf("Value :%-10f\n\n", 5.4321);
    printf("Value :%10f\n", -32.9814);
    printf("Value :%-10f\n\n", -32.9814);

    printf("Value :%5c\n", 'A');
    printf("Value :%-5c\n\n", 'A');
    printf("Value :%5c\n", 'j');
    printf("Value :%-5c\n\n", 'j');

    printf("Value :%10s\n", "coding");
    printf("Value :%-10s\n\n", "coding");
    printf("Value :%10s\n", "kp");
    printf("Value :%-10s\n\n", "kp");
    return 0;
}

