#include<iostream>
#include<vector>
using namespace std;
///189. Rotate Array


void rotate(vector<int>& nums, int k) {

        int size = nums.size();
        k = k % size ;
        if(k==0)return;
        vector<int> temp(nums);
        nums.clear();
        // k = k % size ;
        // if(k==0)return;// error because nums=[] 
        int start = size - k ; int end = size-1;
        while( start <= end)
        {
            nums.push_back(temp[start]);
            start++;
        }
        start = 0 ;
        end = size - k - 1 ;
        while( start <= end)
        {
            nums.push_back(temp[start]);
            start++;
        }
        
    }
    int main(){
    vector<int> num = {0,1,0,3,12};
    rotate(num,3);
    
    return 0;
}