// deque
// double ended queue
// elements can add or remove from both ends
#include <iostream>
using namespace std;
#include <deque>

int main(){
    deque <string> cars={"volvo","honda","hero","activa","bus"};

    // in deque we cant add elements add the time of declaration
    // unlike queue we cant add at the time of declaration

    cout<<cars[1]<<endl; // in deque we can access elemements using index

    // the list of function where we can access the elements using indexing
    // 1. vector
    // 2. array
    // 3. deque
    // these only three

    // the list where we cant able to use index
    // 1. list
    // 2.queue
    // 3. stack

    cout<<cars.at(2)<<endl; // we can use at()

    // the advantage and disadvantage of uisng .at()

    // .at() gives error messgae if the element is out of range

    // .at() checks first the print

    // but in index it is direct it does not checks

    // example 

    cout<<cars[10]<<endl; // no error message

    // cout<<cars.at(10)<<endl; // error message

    // to remove elements from dequeue use

    // .pop_front() and .pop_back()

    // cars.pop_back();
    // cars.pop_front();

    for(string c:cars){
        cout<<c<<endl;
        
    }
    cout<<endl; 

    cars.pop_back(); // bus will remove
    for(string c:cars){
        cout<<c<<endl; 
    }
    cout<<endl;
    cars.pop_front(); // volvo will remove

    for(string c:cars){
        cout<<c<<endl;
    }
     cout<<endl;

    // all types of loops we can use in deque
    cout<<"the for loop using index"<<endl<<endl;
    for(int i=0;i<=cars.size();i++){
        cout<<cars[i]<<endl;
    }

    cout<<"the loop using iterator"<<endl;
    
    for(auto it=cars.begin();it!=cars.end();it++){
        cout<<*it<<endl;
    }
}