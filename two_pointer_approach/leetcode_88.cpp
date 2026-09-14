
#include<iostream>
#include<vector>
using namespace std;
///88. Merge Sorted Array


  /// without using extra spaces
    // void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    //     int size = nums1.size() - 1;
    //         m = m-1; n = n-1;
    //         while(m >= 0  && n >= 0)
    //         {
    //             if(nums1[m] < nums2[n])
    //             {
    //                 nums1[size--] = nums2[n--];
                    
    //             }
    //             else{
    //                 nums1[size--] = nums1[m--];
    //             }
    //         }
    //         // check for if left alement inside first vector
    //         // put inside the num1
    //         while(m >= 0)
    //         {
    //             nums1[size--] = nums1[m--];
    //         }
    //         // check for if left alement inside second vector
    //         // put inside the num1
    //         while(n >= 0)
    //         {
    //             nums1[size--] = nums2[n--];
    //         }
            
    //     }


    /// usinfg extra space temp vecotr<int>
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