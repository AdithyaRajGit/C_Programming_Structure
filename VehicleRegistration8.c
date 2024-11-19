#include<stdio.h>
#include<string.h>

struct vehicle{
 char rno[20];
 char model[20];
 char owner[30];
 int mfg;
};

int main(){
int n;
printf("Enter the number of vehicle: ");
scanf("%d",&n);

struct vehicle reg[n];
 for(int i=0;i<n;i++){
  printf("Vehicle %d:\n",i+1);
  while(getchar()!='\n');
  printf("Registaration Number:");
  fgets(reg[i].rno,sizeof(reg[i].rno),stdin);
  reg[i].rno[strcspn(reg[i].rno,"\n")]='\0';
  //while(getchar()!="\n");
  printf("Model name: ");
  fgets(reg[i].model,sizeof(reg[i].model),stdin);
  reg[i].model[strcspn(reg[i].model,"\n")]='\0';
  printf("Owner name: ");
  fgets(reg[i].owner,sizeof(reg[i].owner),stdin);
  reg[i].owner[strcspn(reg[i].owner,"\n")]='\0';
  printf("Manufacturing Date:");
  scanf("%d",&reg[i].mfg);
}

printf("Vehicle Registration List:");
printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
printf("|%-30s|%-30s|%-30s|%-30s|","Registration Number","Model","Owner","Year of manufacture");
printf("\n------------------------------ ------------------------------ ------------------------------ ------------------------------\n");
for(int i=0;i<n;i++){
printf("|%-30s|%-30s|%-30s|%-30d|\n",reg[i].rno,reg[i].model,reg[i].owner,reg[i].mfg);
}
return 0;
}
