#include <stdio.h>
struct employeeType {
    char firstName[50];
    char lastName[50];
    char empID[20];
    char address1[100];
    char address2[100];
    char city[50];
    char state[50];
    char zip[20];
    int hireMonth;
    int hireDay;
    int hireYear;
    char phone[20];
    char cellphone[20];
    char fax[20];
    char email[50];
    double salary;
};

void printEmployee(struct employeeType emp) {
    printf("Employee ID: \t\t%s\n", emp.empID);
    printf("Name: \t\t\t%s %s\n", emp.firstName, emp.lastName);
    printf("Address: \t\t%s, %s, %s, %s, %s\n", emp.address1, emp.address2, emp.city, emp.state, emp.zip);
    printf("Hire Date: \t\t%d/%d/%d\n", emp.hireMonth, emp.hireDay, emp.hireYear);
    printf("Contact Info: Phone: \t%s, Cell: %s, Fax: %s, Email: %s\n",
           emp.phone, emp.cellphone, emp.fax, emp.email);
    printf("Salary: \t\t$%.2f\n", emp.salary);
}

int main() {
    struct employeeType employee1 = {
        "Bill",
        "Gates",
        "E12345",
        "123 Elm St",
        "Apt 4B",
        "Springfield",
        "IL",
        "62701",
        6,
        15,
        2015,
        "555-1234",
        "555-5678",
        "555-4321",
        "billgates.microsoft@email.com",
        75000.00
    };
    printEmployee(employee1);
    return 0;
}
