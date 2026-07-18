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

// WHAT IS Range Based Lopp
// it was introduced in C++11
// it use to iterate over every element of container
// container like vector , array, string, set, map
// so internally we dont have to write V.begin and v.end it will automatically added by the complier


// for example if you Dont use Range based loop

vector <int> v={10,20,30};
for(auto it =v.begin; it!=v.end; it++){
cout<<<*it;
}

// in this see if we use range based loop then the v.begin and v.end and it++
// will be added internally by the complier
