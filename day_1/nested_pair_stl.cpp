#include <iostream>
#include <utility>

using namespace std;
int main()
{
    pair <int,pair<int,int>> p ={1,{3,4}};
    cout << "this is first one " << p.first << endl;
    cout << "this is from second pair first value " << p.second.first<<endl;
    cout << "this is from second pair second value "<<p.second.second<<endl;
}
