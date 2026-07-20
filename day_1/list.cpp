// list behaves like doubly linked list
#include <iostream>
#include <list>
using namespace std;
int main(){
     // list <data type> variable;
     list <string> cars = {"honda","verna","hero","splendor"};

    //  for(string car:cars){
    //     cout << car<<"\n";
    //  }

     // note we cant access list by index instead we use .front and .back
      
     //cout<<cars.front()<<endl;
     // first elements at index 0

     //cout << cars.back()<<endl;
     // last elements

     // change list elements

     cars.front()="audi";
     cars.back()="lambo";

    //  for (string car:cars){
    //     cout<<car<<endl;
    //  }

     // add list elements 
     cars.push_front("yolo");
     cars.push_back("i10");

    //  for(string c:cars){
    //     cout<<c<<endl;
    //  }

     // remember to remove any elements use pop_front() and pop_back()
      
     cout<<"Using pop_front() to remove first elements that is yolo"<<endl;
     cars.pop_front();

     for(string a:cars){
        cout<<a<<endl;
     }

     cout<<"Using pop_back() to remove last elements that is i10"<<endl;
     cars.pop_back();

     for(string b:cars){
        cout<<b<<endl;
     }

     // the size of the list
     cout<<"The size of the list"<<endl;
     cout<<cars.size()<<endl;

     // to check the list is empty or not
     cout<<"to check the list is empty"<<endl;
     cout<<cars.empty()<<endl;

     cars.clear();
     cout<<"now check"<<endl;
     cout<<cars.empty()<<endl;

}