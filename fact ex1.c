#include<stdio.h>
#include<conio.h>
int main(){
	
int number,i;// take two variable of integer type
int fact=1;// initialise value of fact by 1
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
