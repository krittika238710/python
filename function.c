#include<stdio.h>
int total(int a, int b, int c, int d, int e);
int avg(int tot);
main(){
int a,b,c,d,e;
printf("enter a mark1 \n");
scanf ("%d",&a);
printf("enter a mark2 \n");
scanf ("%d",&b);
printf("enter a mark3 \n");
scanf ("%d",&c);
printf("enter a mark4 \n");
scanf ("%d",&d);
printf("enter a mark5 \n");
scanf ("%d",&e);
 int tot=total(a,b,c,d,e);
 printf(" the total mark is %d \n",tot);
 avg(tot);
 }
 int total(int a, int b, int c, int d, int e){
 return a+b+c+d+e;
}
int avg(tot){
	printf("the avg is %d", tot/5);
	return 0;
	}
