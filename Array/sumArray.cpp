#include <iostream>
using namespace std;
int main(){
    int arr[]={20,40,37,48,28,58};
    int sum=0;
    int n= sizeof (arr)/4;
    for (int i=0;i<n;i++){
        sum += arr[i];
    }
    cout<<sum<<endl;

}