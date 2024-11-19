#include<stdio.h>
#include<string.h>

struct grades{
char name[30];
float mark1;
float mark2;
float mark3;
char grade;
};



int main(){
int n;
printf("Enter the number of students: ");
scanf("%d",&n);
float avg[n];
struct grades stu[n];
 for(int i=0; i<n; i++){
  printf("Student %d:\n",i+1);
  while(getchar()!='\n');
  printf("Name:");
  fgets(stu[i].name, sizeof(stu[i].name),stdin);
  stu[i].name[strcspn(stu[i].name,"\n")]='\0';
  printf("Enter the marks of three subjects: ");
  scanf(" %f %f %f",&stu[i].mark1,&stu[i].mark2,&stu[i].mark3);
  avg[i]=((stu[i].mark1+stu[i].mark2+stu[i].mark3)/3.0);
  stu[i].grade = (avg[i] >= 90)? 'A':
		 (90 > avg[i] && avg[i] >= 75)? 'B':
		 (75 > avg[i] && avg[i] >= 60)? 'C':
		 'D';
 }
printf("Student report:");
printf("\n-------------------------------------------------------------------------------- \n");
printf("|%-30s|%-10s|%-10s|%-10s|%-10s|%-5s","Name","Mark 1","Mark 2","Mark 3","Average","Grade");
printf("\n--------------------------------------------------------------------------------\n");
for(int i=0;i<n;i++){
printf("|%-30s|",stu[i].name);
printf("%-10.3f|",stu[i].mark1);
printf("%-10.3f|",stu[i].mark2);
printf("%-10.3f|",stu[i].mark3);
printf("%-10.3f|",avg[i]);
printf("%-5c|",stu[i].grade);
printf("\n");
}
return 0;

}
