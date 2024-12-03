#include <stdio.h>

struct nameType {
    char first[50];
    char middle[50];
    char last[50];
};

struct addressType {
    char address1[100];
    char address2[100];
    char city[50];
    char state[50];
    char zip[20];
};

struct dateType {
    int month;
    int day;
    int year;
};

struct contactType {
    char phone[20];
    char cellphone[20];
    char fax[20];
    char email[50];
};

struct employeeType {
    struct nameType name;
    char empID[20];
    struct addressType address;
    struct dateType hireDate;
    struct contactType contact;
    double salary;
};

void printEmployee(struct employeeType emp) {
    printf("Employee ID: \t\t%s\n", emp.empID);
    printf("Name: \t\t\t%s %s %s\n", emp.name.first, emp.name.middle, emp.name.last);
    printf("Address: \t\t%s, %s, %s, %s, %s\n", emp.address.address1, emp.address.address2,
           emp.address.city, emp.address.state, emp.address.zip);
    printf("Hire Date: \t\t%d/%d/%d\n", emp.hireDate.month, emp.hireDate.day, emp.hireDate.year);
    printf("Contact Info: Phone: \t%s, Cell: %s, Fax: %s, Email: %s\n",
           emp.contact.phone, emp.contact.cellphone, emp.contact.fax, emp.contact.email);
    printf("Salary: \t\t$%.2f\n", emp.salary);
}

int main() {
    struct employeeType employee1 = {
        {"Steve", "Jobs", "Apple"},
        "E12345",
        {"123 Elm St", "Apt 4B", "Springfield", "IL", "62701"},
        {6, 15, 2015},
        {"555-1234", "555-5678", "555-4321", "steve.apple@email.com"},
        75000.00
    };
    printEmployee(employee1);

    return 0;
}
