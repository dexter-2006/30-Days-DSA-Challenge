#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v1={10,20,30,40,50};

    vector <int> v2={11,22,33,44,55};

    //For size of the vector v.size()

    cout<<"The size of the vector"<<endl;

    cout<<v1.size()<<endl;

    // To remove the last element use v.pop_back()

    cout<<"To remove the last element from vector"<<endl;

    //cout<< v1.pop_back()<<endl; this line is wrong we cant print it

    v1.pop_back(); // just add this line

    for(auto it=v1.begin();it!=v1.end();it++){
        cout<<*it<<endl;
    }
    
    // to swap the v1 and v2 elements

    v1.swap(v2); // v1={11,22,33,44,55}
                 // v2={10,20,30,40}
    cout<<"The v1 elements after swap"<<endl;
    for(auto it=v1.begin();it!=v1.end();it++){
          cout<<*it<<endl;
    }
    cout<<"The v2 elements after swap"<<endl;
    for(auto it=v2.begin();it!=v2.end();it++){
        cout<<*it<<endl;
    }

    // v.clear() = it clear the vector
    // v.empty() = it checks the vector is empty or not . give output in 0 or 1

    v1.clear(); // it clear the vector

    cout<<v1.empty()<<endl; // it checks the vector is empty or not

}