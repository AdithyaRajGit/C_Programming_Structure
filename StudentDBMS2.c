#include<stdio.h>
#include<string.h>

struct library{
char name[30];
int age;
float mark;
};

int main(){
int n;
printf("Enter number of students: ");
scanf("%d",&n);

struct library s[n];
printf("Enter details for %d students: \n",n);
for(int i=0;i<n;i++){
  printf("Name: ");
  while(getchar() != '\n');
  fgets(s[i].name,sizeof(s[i].name),stdin);
  s[i].name[strcspn(s[i].name, "\n")] = '\0';
  printf("Age: ");
  scanf("%d",&s[i].age);
  getchar();
  printf("Mark: ");
  scanf("%f",&s[i].mark);
}

printf("\n|%-20s|%-10s|%-10s|\n","Name","Age","Mark");
printf("-------------------- ---------- ----------\n");
for(int i=0;i<n;i++){
printf("|%-20s|%-10d|%-10.3f|\n",s[i].name,s[i].age,s[i].mark);
  }
return 0;
}


