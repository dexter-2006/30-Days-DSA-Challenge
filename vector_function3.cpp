#include <iostream>
#include <vector>
using namespace std;

vector <int> x(int n,vector <int> a){
     cout<<"the value of n ="<<n<<endl;
     for(auto it:a){
        cout<<it<<" ";
     }
     return a;
}
int main(){
    int i=3;
    vector <int> arr={10,20,60,88};
    x(i,arr);
    return 0;
}