#include <iostream>
using namespace std;
#include <vector>
int main(){
    vector <int> v={10,20,30,40,50};
                 // 0, 1, 2, 3, 4

    // single element delete
    // remember always include v.begin()+where to remove

    // v.erase(v.begin()+1);

    // to remove multiple elements
    //    then use v.erase[start,end)
    //                           end is not included

    v.erase(v.begin()+2,v.begin()+4);

    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
        // use pointer *
    }
}