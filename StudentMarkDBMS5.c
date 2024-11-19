#include<stdio.h>
#include<string.h>

struct students{
char name[100];
int rno;
float mark;
};

int main(){
int n;
printf("Enter the number of students: ");
scanf("%d",&n);

struct students stu[n];
 for(int i=0;i<n;i++){
   printf("\nStudent %d:\n",i+1);
   while(getchar() != '\n');
   printf("Name: ");
   fgets(stu[i].name,sizeof(stu[i].name),stdin);
   stu[i].name[strcspn(stu[i].name,"\n")]='\0';
//   while(getchar() != '\n');
   printf("Roll Number: ");
   scanf("%d",&stu[i].rno);
   while(getchar() != '\n');
   printf("Mark: ");
   scanf("%f",&stu[i].mark);
}
printf("Mark of all students: ");
printf("\n----------------------------------------------------\n");
printf("%-30s %-10s %-10s","Name","Roll Nummber","Mark");
printf("\n------------------------------ ---------- ----------\n");
for(int i=0;i<n;i++){
printf("%-30s %-10d %-10f\n",stu[i].name,stu[i].rno,stu[i].mark);	}
return 0;
}
