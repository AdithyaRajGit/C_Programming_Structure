#include<stdio.h>

struct datetime{
 int date,month,year;
 int hour,minute,second;
};

int main(){
int n;
printf("Enter the number of events:");
scanf("%d",&n);

struct datetime evnt[n];
 for(int i=0;i<n;i++){
  printf("Event %d:\n",i+1);
  while(getchar()!='\n');
  printf("Enter date (DD MM YYYY)");
  scanf("%d %d %d",&evnt[i].date,&evnt[i].month,&evnt[i].year);
  while(getchar()!='\n');
  printf("Enter time (HH MM SS)");
  scanf("%d %d %d",&evnt[i].hour,&evnt[i].minute,&evnt[i].second);
}

printf("\n----------------------------------------------------------------------------\n");
printf("|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|","Event","Day","Month","Year"," Hour","Minute","Second");
printf("\n---------- ---------- ---------- ---------- ---------- ---------- ----------\n");
for(int i=0;i<n;i++){
 printf("%-10d",i+1);
 printf("|%-10d|%-10d|%-10d|",evnt[i].date,evnt[i].month,evnt[i].year);
 printf("|%-10d|%-10d|%-10d|\n",evnt[i].hour,evnt[i].minute,evnt[i].second);
}
return 0;
}
