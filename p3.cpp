#include <iostream>
using namespace std;

void delatind(int *arr,int pos,int& n){
    for(int j=pos;j<n;j++){
        arr[j-1]=arr[j];
    }
    n--;
}

int main()
{
    int n,p;
    cin>>n;
    int *a= new int(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Position: ";
    cin>>p;
    delatind(a,p,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
