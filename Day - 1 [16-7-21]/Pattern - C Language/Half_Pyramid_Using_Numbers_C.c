#include <stdio.h>

int main(void) {
	int rows;
	scanf("%d\n",&rows);
	for(int i=1;i<=rows;i++)
	{
	    for(int j=1;j<=i;j++)
	    {
	        printf("%d",i);
	    }
	    printf("\n");
	}
	return 0;
}

