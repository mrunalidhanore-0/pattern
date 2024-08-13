#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,k=1;
	
	for(x=1; x<=5; x++)
	{
		for(y=1; y<=x; y++)
		{
			printf("%d",k);
			k++;	
		}
		printf("\n");
	}

}
