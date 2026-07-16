#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v={10,20,30,40,50};

    for (vector <int>::iterator it =v.begin();it!=v.end();it++){
        //it!=v.end() because v.end() point elements after the last element
        cout<<(*it)<<endl;
        // dont forget to add * because it works like pointer
    }

    // to make it short 
    // use auto 
    // auto automatically detects the data type 
    // we dont need to write vector <int> or iterator
    
    for(auto its=v.begin();its!=v.end();its++){
        cout<<*its<<endl;
    }
}