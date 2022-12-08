#include<stdio.h>
#include<conio.h>
void main()
{
int a[10] = { 1,2,3,4,6,5,7,8,9,10},i,sum=0,find=5;
float avg =0;
clrscr();
     /*
	printf("Nubers In Orderd =");
	for(i=0;i<=4;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\n");
	printf("Numbers In Reverse Orderd =");
	for(i=4;i>=0;i--)
	{
		printf(" %d",a[i]);
	}

	//printing the sum of all Given Arry
	for(i=0;i<=10 ;i++)
	{
		sum =sum + a[i];
	}
	printf("%d",sum);

	//printing the sum of even number

	for(i=0;i<=10;i++)
	{
		if(a[i] % 2==0)
		{
			sum += a[i];
		}
	}
		printf("%d",sum);

	//PRINTING THE ODD NUMBER IN ARRAY
	for(i=0;i<=10;i++)
	{
		if(a[i] % 2!=0 )
		{
			printf("%d \n",a[i]);
		}
	}


	// average of all numbers

	for(i=0;i<=10;i++)
	{
		sum += a[i];
		avg = sum/10;
	}
		printf("%2f \n",avg);
		*/

	for(i=0;i<=10;i++)
	{
		if(a[i] == find)
			printf("Value Avaible on The Index %d ",a[i]);
	}



getch();
}
