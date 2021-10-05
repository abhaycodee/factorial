#include<stdio.h>
#include<conio.h>
int main(){
	
int number,i;
int fact=1;
printf("enter the number which you want favtorial\n");
scanf("%d",&number);
for(i=number;i>1;i--)
{
	fact=fact*i;
	printf("%dx",i);
}
printf("%d",i);	
	printf("=%d",fact);
	
	
	
	
	
	
	
	
}