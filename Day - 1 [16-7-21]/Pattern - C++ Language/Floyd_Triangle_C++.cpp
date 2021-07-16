#include <iostream>
using namespace std;

int main() {
	int rows;
	cin>>rows;
	int a = 0;
	for(int i=1;i<=rows;i++)
	{
	    for(int j=1;j<=i;j++)
	    {
	        a = a+1;
	        cout<<a<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
