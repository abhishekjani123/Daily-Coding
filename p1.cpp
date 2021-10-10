#include <iostream>
using namespace std;

int srch(int *arr, int ele, int n){
    for(int j=0;j<n;j++){
        if(arr[j]==ele){
            return j+1;
        }
    }
    return -1;
}

int main()
{
    int n,e;
    cin>>n;
    int *a= new int(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Element to search: ";
    cin>>e;
    cout<<srch(a,e,n);
    return 0;
}
