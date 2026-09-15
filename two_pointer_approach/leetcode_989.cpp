#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
///88. Merge Sorted Array

vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        int i = num.size() - 1;
        
        
        while (i >= 0 || k > 0) {
            if (i >= 0) {
                k += num[i];
                i--;
            }
            ans.push_back(k % 10); 
            k /= 10;               
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
      int main(){
    vector<int> num = {1, 2 , 0 , 0};
    int k = 34 ;
    addToArrayForm(num,k);
    
    return 0;
}