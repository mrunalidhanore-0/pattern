#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	
	for(x=5; x>=1 ; x--)
	{
		for(y=1; y<=x; y++)
		{
			if(x%2==0)
			{
				printf("0 ");
			}
			else{
				printf("1 ");
			}
		}
		printf("\n");
	}

}
