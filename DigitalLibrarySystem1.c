#include<stdio.h>
#include<string.h>

struct library{
char title[50];
char author[50];
float price;
};

int main(){
int n;
printf("Enter number of Book information: ");
scanf("%d",&n);

struct library s[n];
printf("Enter details for %d books:\n",n);
for(int i=0;i<n;i++){
  printf("Title: ");
  while(getchar() != '\n');
  fgets(s[i].title,sizeof(s[i].title),stdin);
  s[i].title[strcspn(s[i].title, "\n")] = '\0';
//  while(getchar() != '\n');
  printf("Author: ");
  fgets(s[i].author,sizeof(s[i].author),stdin);
  s[i].author[strcspn(s[i].author, "\n")] = '\0';
  printf("Price: ");
  scanf("%f",&s[i].price);
//  getchar();

}

printf("\n|%-20s|%-10s|%-10s|\n","Title","Author","Price");
printf("-------------------- ---------- ----------\n");
for(int i=0;i<n;i++){
printf("|%-20s|%-10s|%-10f|\n",s[i].title,s[i].author,s[i].price);
  }
return 0;
}
