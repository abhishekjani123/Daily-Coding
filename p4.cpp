#include <iostream>
using namespace std;

void insatend(int *arr, int ele, int& n){
    n++;
    arr[n-1]=ele;
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
    insatend(a,e,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
