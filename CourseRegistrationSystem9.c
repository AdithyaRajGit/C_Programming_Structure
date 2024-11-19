#include<stdio.h>
#include<string.h>

struct course{
 char cname[40];
 char ccode[10];
 int chour;
};

int main(){
int n;
printf("Enter the number of Course: ");
scanf("%d",&n);

struct course reg[n];
 for(int i=0;i<n;i++){
  printf("Course %d:\n",i+1);
  while(getchar()!='\n');
  printf("Course Name:");
  fgets(reg[i].cname,sizeof(reg[i].cname),stdin);
  reg[i].cname[strcspn(reg[i].cname,"\n")]='\0';
  printf("Course Code: ");
  fgets(reg[i].ccode,sizeof(reg[i].ccode),stdin);
  reg[i].ccode[strcspn(reg[i].ccode,"\n")]='\0';
   printf("Credit Hours:");
  scanf("%d",&reg[i].chour);
}

printf("Course Registration List:");
printf("\n------------------------------------------------------------------------\n");
printf("|%-40s|%-15s|%-15s|","Course Name","Course Code","Credit Hours");
printf("\n---------------------------------------- --------------- ---------------\n");
for(int i=0;i<n;i++){
printf("|%-40s|%-15s|%-15d|\n",reg[i].cname,reg[i].ccode,reg[i].chour);
}
return 0;
}
