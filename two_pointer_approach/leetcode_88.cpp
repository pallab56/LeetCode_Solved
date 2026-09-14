
#include<iostream>
#include<vector>
using namespace std;
///88. Merge Sorted Array

 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      long long int start = 0 , first = 0 , second = 0 ;
        vector<int> temp = nums1 ;
        while(first < m && second < n)
        {
            if(temp[first] < nums2[second])
            {
                nums1[start] = temp[first];
                first++;
                start++;
            }
            else{
                nums1[start] = nums2[second];
                second++;
                start++;
            }
        }

        while(first < m)
        {
            nums1[start] = temp[first];
            first++;
            start++;
        }

        while(second < n)
        {
            nums1[start] = nums2[second];
            second++;
            start++;
        }
        
    }
    int main(){
    vector<int> num = {1,4,7,3,2 , 0, 0};
    vector<int> num2 = {3,2};
    merge(num,7,num2,2);
    
    return 0;
}