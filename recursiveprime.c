#include<stdio.h>
#include<conio.h>

int check_prime(int,int);

int main()
{
	int no,f;
	printf("\nEnter the value:");
	scanf("%d",&no);
	
	f=check_prime(2,no);
	if(f==0)
	        printf("\nNumber is prime ");
	else
	        printf("\nNumber is not prime");
	getch();
	return 0;
}

int check_prime(int i,int no)
{
	if(i==no)
	        return 0;
	else 
	        if(no%i==0)
	                   return 1;
	        else
	                   return(check_prime(i+1,no));
}          
