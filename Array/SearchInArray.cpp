// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={20,48,38,50,90};
//     int n= sizeof (arr)/4;
//     int target=50;
//     for (int i=0;i<n;i++){
//         if(arr[i]== target) cout<<"found element";
//         break;
//     }
// }


#include <iostream>
using namespace std;
int main(){
    int arr[]={20,48,38,50,90};
    int n= sizeof (arr)/4;
    int target=40;
    bool flag=false;
    for (int i=0;i<n;i++){
        if(arr[i]== target) 
        flag=true;
        break;
    }
    if(flag==true)  cout<<"found element"<<endl;
    else cout<<"not found";
}
