#include <stdio.h>

int main(void) {
	int rows;
	scanf("%d\n",&rows);
	for(int i=rows;i>0;i--)
	{
	    for(int j=0;j<i;j++)
	    {
	        printf("*");
	    }
	    printf("\n");
	}
	return 0;
}

