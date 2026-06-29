#include <stdio.h>

int main()
{
    int roll;
    char name[50];
    float m1, m2, m3, total, percent;

    printf("Enter Roll No: ");
    fgets(roll, 50, stdin);
    printf("Enter Name: ");
    fgets(name, 50, stdin);
    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percent = total / 3;

    printf("\nRoll: %d", roll);
    printf("Name:%s", name);
    printf("Total: %.2f, Percentage: %.2f%%\n", total, percent);

    if (percent >= 80)
        printf("Division: 1st\n");
    else if (percent >= 70)
        printf("Division: 2nd\n");
    else if (percent >= 60)
        printf("Division: 3rd\n");
    else if (percent >= 50)
        printf("Result: Pass\n");
    else
        printf("Result: Fail\n");

    return 0;
}