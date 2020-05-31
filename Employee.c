#include<stdio.h>
struct employee
  {
      char name[30];
      int emp_id,salary;
  }emp[20];
void main()
  {
      int n,i;
      printf("Enter the number of employee : ");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
        printf("\nEmployee %d ",i+1);
        printf("\nEnter Employee Name :");
        scanf("%s",emp[i].name);
        printf("\nEnter Employee Id :");
        scanf("%d",&emp[i].emp_id);
        printf("\nEnter Employee Salary :");
        scanf("%d",&emp[i].salary);
     }
     printf("\nEmployee Information \n");
     for(i=0;i<n;i++)
     {
        printf("\n\nEmployee %d\nEmployee Name : %s\nEmployee Id : %d\nSalary : %d",i+1,emp[i].name,emp[i].emp_id,emp[i].salary);
     }
  }
     
