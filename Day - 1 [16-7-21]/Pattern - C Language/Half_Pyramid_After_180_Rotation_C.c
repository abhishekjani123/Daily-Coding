#include <stdio.h>

int main(void) {
	int rows;
	scanf("%d\n",&rows);
	for(int i=1;i<=rows;i++)
	{
	    for(int j=1;j<=rows;j++)
	    {
	        if(j<=rows-i)
	        {
	            printf(" ");
	        }
	        else
	        {
	            printf("*");
	        }
	    }
	    printf("\n");
	}
	return 0;
}

