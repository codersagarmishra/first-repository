// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
    
//     vector <int> v={20,40,37,15,68};
//     sort (v.begin(),v.end());
//     for(int ele :v) cout<<ele<<" ";
// }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
    
//     vector <int> v={20,40,37,15,68};
//     reverse (v.begin(),v.end());
//     for(int ele :v) cout<<ele<<" ";
// }


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    
    vector <int> v={20,40,37,15,68};
    reverse (v.begin()+1,v.end());
    for(int ele :v) cout<<ele<<" ";

}