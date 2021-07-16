#include <stdio.h>

int main(void) {
	int rows,cols;
	scanf("%d %d\n",&rows,&cols);
	for(int i=0;i<rows;i++)
	{
	    for(int j=0;j<cols;j++)
	    {
	        printf("*");
	    }
	    printf("\n");
	}
	return 0;
}

