#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={20,47,56,78,90};
    int n = sizeof(arr)/4;
    int mx= INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>mx) mx=arr[i];
    }
    int smx= INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>smx && arr[i]!=mx) smx=arr[i];
    }
    cout<<smx;


}