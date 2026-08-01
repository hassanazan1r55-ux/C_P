#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    if (scanf("%d", &age) != 1)
    {
        printf("Invalid input. Please enter a valid integer for age.\n");
        return 1;
    }

    if (age < 0 || age > 120)
    {
        printf("Invalid age. Please enter an age between 0 and 120.\n");
    }
    else if (age >= 18)
    {
        printf("You are eligible to vote.\n");
    }
    else
    {
        int yearsLeft = 18 - age;

        if (yearsLeft == 1)
        {
            printf("You will be eligible to vote in 1 year.\n");
        }
        else
        {
            printf("You will be eligible to vote in %d years.\n", yearsLeft);
        }
    }

    return 0;
}