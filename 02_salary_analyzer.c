#include <stdio.h>

int main()
{
    float salary[5] = {45000.0, 85000.0, 62000.0, 95000.0, 50000.0};
    int total_Employes = 5;

    float total_expense = 0.0;
    float highest_salary = salary[0];

    for (int i = 0; i < total_Employes; i++)
    {
        printf("Employee %d salary: %.2f\n", i + 1, salary[i]);
        total_expense += salary[i];

        if (salary[i] > highest_salary)
        {
            highest_salary = salary[i];
        }
    }

    printf("Total expense on salaries: %.2f\n", total_expense);
    printf("Highest salary: %.2f\n", highest_salary);

    return 0;
}