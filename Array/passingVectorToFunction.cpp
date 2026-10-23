#include <iostream>
#include <vector>
using namespace std;
// void change (vector <int> v){    //pass by value
// v[2]=90;
// }
void change (vector <int> &v){    //pass by refrences
v[2]=90;
}
int main(){
    vector <int> v={20,5,8,9,3,6};
    change(v);
    cout<<v[2]<<endl;


}
