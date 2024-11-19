#include <stdio.h>
#include<string.h>

struct Employee {
    char name[30];
    int id;
    float basicSalary;
    float bonus;
    float totalSalary;
};

int main() {
int n;
printf("Enter the number of Employees: ");
scanf("%d",&n);

struct Employee details[5];
 for(int i = 0; i < n; i++) {
        printf("Employee %d\n", i+1);
	while(getchar()!='\n');
        printf("Name: ");
        fgets(details[i].name,sizeof(details[i].name),stdin);
	details[i].name[strcspn(details[i].name,"\n")]='\0';
        printf("Employee ID: ");
        scanf("%d", &details[i].id);
        printf("Basic Salary: ");
        scanf("%f", &details[i].basicSalary);
        printf("Bonus: ");
        scanf("%f", &details[i].bonus);
        details[i].totalSalary = details[i].basicSalary + details[i].bonus;
    }
printf("\nEmployee Details:\n");
printf("\n------------------------------ --------------- --------------- --------------- ---------------\n");
printf("%-30s %-15s %-15s %-15s %-15s", "Name", "Employee ID", "Basic Salary", "Bonus", "Total Salary");
printf("\n------------------------------ --------------- --------------- --------------- ---------------\n");

for(int i = 0; i < n; i++) {
  printf("%-30s %-15d %-15.2f %-15.2f %-15.2f\n",
       details[i].name,
       details[i].id,
       details[i].basicSalary,
       details[i].bonus,
       details[i].totalSalary);
    }
return 0;
}
