#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v={10,20,30,40,50};
                //   0, 1, 2, 3, 4
    
   // INSERT ONE ELEMENT
   // whenever you want insert use v.begin()

   // insert 23 at index 0 or starting position

   v.insert(v.begin(),23);
          // position , value
    for(auto it=v.begin();it!=v.end();it++){
        cout <<*it << endl;
    }

    // Insert at index 2
    v.insert(v.begin()+2,69);
             // always starts from v.begin() that is starting position then from 0 
             // then add the position where you want to insert
    cout<<"We have insert 69 at position 2"<<endl;
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    // INSERT MUTLIPLE COPIES OF THE SAME VALUE
    cout<<"Now we are inseerting 32 four times at index 3"<<endl;

    // SYNTAX= v.insert(position,count,value);
               v.insert(v.begin()+3,4,32);
    
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    // just remmber these things always
    // v.begin()
}