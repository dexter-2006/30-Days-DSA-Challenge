// stacks follows the principal of LIFO (LAST IN FIRST OUT)

// the elements you have added last will be access 
#include <iostream>
using namespace std;
#include <stack>
int main(){

    // stack <string> cars ={"bmw","mercedes"}; we cannot add elements at the time of declartion
    
    // similar to queue

    stack <string> cars;

    // to add elements we have to use .push()

    cars.push("bmw");
    cars.push("mercedes");
    cars.push("tesla");
    cars.push("alto");

    // we cannot acces elements using index 

    // to access we have to use .top()
    cout<<cars.top()<<endl;

    // to remove the element we have to use .pop()

    cars.pop();

    cout<<cars.top()<<endl;
    

    // cars.size() for length of the stack
    // cars.empty() to check if the stack is empty or not
}