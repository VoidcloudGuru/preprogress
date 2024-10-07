#include <stdio.h>

#define max_title_length 10
#define max_name_length 40
// we use fixed memory for the arrays created
struct Employee_info
{
    char first_name[max_name_length];
    char second_name[max_name_length];
    int employeeID;
    int SSN;
    char title[max_title_length];
};

struct employee_details
{
    struct Employee_info employee1;
    struct Employee_info employee2;
};

int main(void)
{
    struct employee_details employees;

    // information for employee one
    printf("Enter employee first name: ");
    scanf("%s", employees.employee1.first_name);

    printf("Enter employee second day: ");
    scanf("%s", employees.employee1.second_name);

    printf("Enter employee's id number: ");
    scanf("%d", &employees.employee1.employeeID);

    printf("Enter employee's last four digits of SSN: ");
    scanf("%d", &employees.employee1.SSN);

    printf("Enter employee's title: ");
    scanf("%s", employees.employee1.title);

    // information for employee 2
    printf("Enter first name of employes2: ");
    scanf("%s", employees.employee2.first_name);

    printf("Enter second name of employee2: ");
    scanf("%s", employees.employee2.second_name);

    printf("Enter employee id for employee2: ");
    scanf("%d", &employees.employee2.employeeID);

    printf("Enter employee2's last four digits of SSN: ");
    scanf("%d", &employees.employee2.SSN);

    printf("Enter employee2's title: ");
    scanf("%s", employees.employee2.title);

    // printing information for employee1
    printf("Employee information for %s %s\n", employees.employee1.first_name, employees.employee1.second_name);
    printf("ID: %d\n", employees.employee1.employeeID);
    printf("SSN:%d\n", employees.employee1.SSN);
    printf("Title:%s\n", employees.employee1.title);

    // information for employee2
    printf("Employee information for %s %s\n", employees.employee2.first_name, employees.employee2.second_name);
    printf("ID:%d\n", employees.employee2.employeeID);
    printf("SSN:%d\n", employees.employee2.SSN);
    printf("Title:%s\n", employees.employee2.title);

    return 0;
}
