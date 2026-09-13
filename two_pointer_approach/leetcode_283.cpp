

#include<iostream>
#include<vector>
using namespace std;
///69. SQRT using binary search.

void moveZeroes(vector<int>& nums) {
        int zero = 0 ,num = 0;
        int size = nums.size();
        while(num < size)
        {
            if(nums[num] == 0)
            {
                num++;
            }
            else{
                swap(nums[num],nums[zero]);
                zero++;
                num++;
            }
        }
    }
int main(){
    vector<int> num = {0,1,0,3,12};
    moveZeroes(num);
    
    return 0;
}