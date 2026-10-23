#include <iostream>
using namespace std;
int main(){
    int arr []={2,5,30,28,78};
    int n= sizeof(arr)/4;
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max= arr[i];

    }
    cout<<max;

}