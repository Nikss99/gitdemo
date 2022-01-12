#include<stdio.h>
#include<string.h>
struct employee
{
 int employeeID;
 char Name[20];
 int Salary;
}
int main()
{
 void display(struct employee d);
 void calculate(struct employee d);
 struct employee d;
 scanf("%d%s%d",&d.employeeID,d.Name,&d.Salary);
 display(d);
 calculate(d);
 
}
void display(struct employee d)
{
printf("employeeID is %d\tName is %s\tSalary is %d",d.employeeID,d.Name,d.Salary);
}
void calculate(struct employee d)
{
int j;
 j=d.Salary-200;
printf("\nGross salary is %d",j);
}