#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v= {10,20,30,40};
    
    for(auto it:v){
        //this is called Range based for loop
        //in which we dont have to write anything
        cout<<it<<endl;
    }
}