// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
// vector <int> v;          //empty Array
//     vector<int> arr(10,-1);
//     int n= arr.size();
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
// }


// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> arr(10,-1);
//     int n= arr.size();
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     arr.push_back(5);         //(add an element at end)
//     arr.push_back(9);         //(add an element at end)
//     arr.pop_back();           // (delete last element)
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> v;
// v.push_back(4);
// v.push_back(8);
// v.push_back(9);
// v.push_back(1);
// v.push_back(0);
// v.push_back(5);
// v.push_back(2);
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// }


#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v(7);
    v.push_back (5);
    cout<<v.size()<<" "<<v.capacity();
}