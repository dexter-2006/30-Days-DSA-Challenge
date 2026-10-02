#include <iostream>
#include <vector>
using namespace std;
    void rotate(vector<int>& nums, int k) {
        //read the question first it says right rotate
        int n=nums.size();
        int rotate=k%n;
        for(int j=1;j<=rotate;j++){
            int temp=nums[n-1];
            for(int i=n-2;i>=0;i--){
                nums[i+1]=nums[i];
            }
            nums[0]=temp;
        }
        //return k;
    }
int main(){
    vector <int> arr={1,2,3,4,5};
    rotate(arr,2);
    for(auto it:arr){
        cout<<it<<endl;
    }
    return 0;
}

// 1 2 3 4
// 0 1 2 3  