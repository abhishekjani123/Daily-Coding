#include <iostream>
using namespace std;

void insatind(int *arr, int ele,int pos, int& n){
    n++;
    for(int j=n;j>=pos;j--){
        arr[j+1]=arr[j];
        arr[j]=arr[j-1];
    }
    arr[pos-1]=ele;
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
    cout<<"Position: ";
    cin>>p;
    insatind(a,e,p,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
