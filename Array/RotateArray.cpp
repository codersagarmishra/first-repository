#include <iostream>
#include <vector>
using namespace std;
void reverse( vector <int> &arr,int i,int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
void rotate (vector <int> &arr, int k){
    int n=arr.size();
    reverse (arr,0,n-1);
    reverse (arr,0,k-1);
    reverse (arr,n-k,n-1);

}
int main(){
    cout<<reverse<<" ";

}