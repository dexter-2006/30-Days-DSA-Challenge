#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector <int> &arr){ //dont forget to add & id refernce of
    int i=0; // we are considering that at index 0 we have unique element
    for(int j=1;j<arr.size();j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    arr.resize(i+1);// resize resize i is index it will start from 0 so we need to add +1
    return i+1;
}
int main(){
    vector <int> arrs={1,2,2,3,3,4,4,4,5,5};
    removeDuplicates(arrs);
    for(auto it:arrs){
        cout<<it<<endl;
    }
    return 0;
}