// Normal queue follows FIRST IN FIRST OUT (FIFO)

// the element which enter first will be remove first also

// in priority queue it follows heap data structure 

// the element with highest priority will be removed first

#include <iostream>
using namespace std;
#include <queue>
int main(){
    priority_queue <int> cars;

    // to add element use .push()
    cars.push(10);
    cars.push(15);
    cars.push(6);
    cars.push(9);
    cars.push(18);

    // in priority queue the elements are stored in priority order
    // in heap data structure 
    // heap is the special binary data structure that always keep the highest 
    // priority data at the top

    cout<<cars.top()<<endl;// output is 18

    // MIN HEAP

    priority_queue <int,vector<int>,greater <int>> pq;

    // the int data type

    // the queue dont store data by itself it usese vector <int>

    // the greater<int> and less <int>
    // use to do comaprison 
    // greater <int> gives lower value
    // less <int> gives higher value

    pq.push(80);
    pq.push(70);
    pq.push(89);
    pq.push(3);

    cout<<pq.top(); // it gives lower value
}