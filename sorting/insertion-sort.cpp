#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> nums = {5,1,6,0};
    for(int i=1;i<nums.size();i++){
       int temp = nums[i];
       int j=i-1;
       for(;j>=0;j--){
        if(nums[j]>temp){
            nums[j+1]=nums[j];
        }
        else{
            break;
        }
       }
       nums[j+1]=temp;
    }

    for(auto i : nums){
        cout<<i<<" ";
    }
    return 0;
}