#include <iostream>
using namespace std;

void insatbeg(int *arr, int ele, int& n){
    n++;
    for(int j=(n-1);j>0;j--){
        arr[j+1]=arr[j];
        arr[j]=arr[j-1];
    }
    arr[0]=ele;
}

int main()
{
    int n,e,p;
    cin>>n;
    int *a= new int(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Element to insert: ";
    cin>>e;
    insatbeg(a,e,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
