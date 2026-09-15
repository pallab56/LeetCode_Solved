#include<iostream>
#include<vector>
using namespace std;

/// 1752. Check if Array Is Sorted and Rotated
bool check(vector<int>& nums) {

        int count = 0 ;
        // casses can be like:
        // 1 , 2 , 3 , 4 , 5 , 6 --> true
        // 3 , 4, 5 , 6 , 1 , 2  --> true rotated sorted array
        // 1 , 1 , 1             --> true 
        // 3 , 4 , 5 , 6 , 1 , 2 , 4 --> false not direct sorted or rotated sorted
        for(int i = 1 ; i < nums.size() ; i++)
        {
            if(nums[i-1] > nums[i])
            {
                count++;
            }
        }
        // check for array like 3 , 4, 5 , 1 , 2

        if(nums[nums.size()-1] > nums[0])
        {
            count++;
        }

        return count <=1 ;
        
    }

    int main(){
    vector<int> num = { 3 , 4 , 5 , 6 , 1 , 2 };
    
    check(num);
    
    return 0;
}