// queue stores multiple elements in a specific order called FIFO
// first in first out

#include <iostream>
#include <queue>
using namespace std;
int main(){
    // queue <string> cars ={"honda","verna","grand","vitara"}; xx wrong

    // the big mistake you have done is that queue we cannot add elements at the

    // time of declaration

    queue <string> cars;

    // to add Elements :- .push()

    // remember that .push() function in queue add elements add the end of the queue

    cars.push("honda");
    cars.push("verna");
    cars.push("grand");
    cars.push("vitara");
    cars.push("tata");


//     for(string c : cars){   the problem in using for each loop in queues is that 

//         cout<<c<<endl;      because queue does not support begin() and end() function

//     }                       it wants to preserve it fifo behavior
// }

// TO access the element in queue.  note we cant use index method

// use .front() and .back()

cout<<"for first element"<<endl;

cout<<cars.front()<<endl;

cout<<"for last element"<<endl;

cout<<cars.back()<<endl;

// to change the front() and back() elements

// cars.front()="tesla";
// cars.back()="mercedes";

// cout<<cars.front()<<endl;
// cout<<cars.back()<<endl;

// to remove elements from queue 

// use pop()

//
cars.pop();

// very important

// the pop() does not remove the last element it remove the element which was added first and oldest


cout<<cars.front()<<endl;
cout<<cars.back()<<endl;

cout<<cars.size()<<endl;
cout<<cars.empty()<<endl;
}