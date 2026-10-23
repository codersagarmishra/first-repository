// #include <iostream>
// #include <vector>
// using namespace std;
// void print (vector <int> &arr){
//     for (int ele: arr) cout<<ele<<" ";
//     cout<<endl;

// }
// int main(){
//     vector <int> arr={10,20,38,49,50,60};
//     print(arr);
//     int i=0; int j=arr.size()-1;
//     while(i<j){
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         i++;
//         j--;

//     }
//     print(arr);

// }


#include <iostream>
#include <vector>
using namespace std;
void print (vector <int> &arr){
    for (int ele: arr) cout<<ele<<" ";
    cout<<endl;

}
int main(){
    vector <int> arr={10,20,38,49,50,60};
    print(arr);
    int i=0; int j=arr.size()-1;
    while(i<j){
        // int temp=arr[i];
        // arr[i]=arr[j];
        // arr[j]=temp;
        swap(arr[i],arr[j]);
        i++;
        j--;

    }
    print(arr);

}