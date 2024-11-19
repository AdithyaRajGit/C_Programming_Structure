#include<stdio.h>
struct rect{
 float length;
 float width;
};

int main(){
int n;
printf("Enter the number of Rectangle: ");
scanf("%d",&n);

struct rect a[n];
printf("Enter details for %d rectangles: \n",n);
for(int i=0;i<n;i++){
  printf("Rectangle %d:\n",i+1);
  printf("Length: ");
  scanf("%f",&a[i].length);
  printf("Width: ");
  scanf("%f",&a[i].width);
}
printf("Rectangle areas: \n");
printf("---------------------------------------------------------------");
printf("\n|%-15s|%-15s|%-15s|%-15s|","Rectangle","Length","Width","Area");
printf("\n--------------- --------------- --------------- ---------------\n");
for(int i=0;i<n;i++){
printf("|%-15d|%-15.3f|%-15.3f|%-15.3f|\n",i+1,a[i].length,a[i].width,a[i].length*a[i].width);
}
return 0;
}
