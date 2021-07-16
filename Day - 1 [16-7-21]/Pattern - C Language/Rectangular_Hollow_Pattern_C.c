#include <stdio.h>

int main(void) {
	int rows,cols;
	scanf("%d %d\n",&rows,&cols);
	for(int i=0;i<rows;i++)
	{
	    for(int j=0;j<cols;j++)
	    {
	        if(i==0 || i==rows-1){
	           printf("*"); 
	        }
	        else if(j==0 || j==cols-1){
	            printf("*");
	        }
	        else{
	            printf(" ");
	        }
	    }
	    printf("\n");
	}
	return 0;
}

