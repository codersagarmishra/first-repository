#include <iostream>
using namespace std;
void change(int x[]){
    x[0]= {20};
}
int main(){
    int x[]={15,10,3};
    change(x);
    cout<<x[0]<<endl;
}