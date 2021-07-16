#include <stdio.h>

int main(void) {
	int rows;
	int a=0;
	scanf("%d\n",&rows);
	for(int i=1;i<=rows;i++)
	{
	    for(int j=1;j<=i;j++)
	    {
	        a = a+1;
	        printf("%d ",a);
	    }
	    printf("\n");
	}
	return 0;
}

