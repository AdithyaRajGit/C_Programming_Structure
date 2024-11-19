#include<stdio.h>
#include<string.h>
struct employee{
char name[30];
int id;
float slry;
};

int main(){
int n;
printf("Enter number of employee details: ");
scanf("%d",&n);
struct employee em[n];
printf("Enter details for %d employees:\n",n);
for(int i=0;i<n;i++){
  printf("\nEmployee %d:",i+1);

  while(getchar()!='\n');
  printf("\nName: ");
  fgets(em[i].name,sizeof(em[i].name),stdin);
  em[i].name[strcspn(em[i].name,"\n")]='\0';

//  while(getchar()!='\n');
  printf("ID: ");
  scanf("%d",&em[i].id);

  while(getchar()!='\n');
  printf("Salary: ");
  scanf("%f",&em[i].slry);
}

printf("Employee Payroll:");
printf("\n--------------------------- --------- ----------------\n");
printf("|%-30s|%-10s|%-10s|","Name","ID","Salary");
printf("\n--------------------------- --------- ----------------\n");
for(int i=0;i<n;i++){
printf("|%-30s|%-10d|%-10.3f|\n",em[i].name,em[i].id,em[i].slry);
}
return 0;}
