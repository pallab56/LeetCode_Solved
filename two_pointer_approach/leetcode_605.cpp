#include<iostream>
#include<vector>
using namespace std;
///605. Can Place Flowers

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s = flowerbed.size();
        if(s==1 ){
            if(n==1) return flowerbed[0]==0 ? true:false;
            else return true;  
        }
        if (flowerbed[0] == 0 && flowerbed[1] == 0){

            flowerbed[0]=1;
            n--;
        }
        for (int i = 1; i < s - 1; i++) {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 &&
                flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                 n--;
            }
        }
        if (flowerbed[s - 1] == 0 && flowerbed[s - 2] == 0)
            n--;
        
         return n <= 0;
    }
    int main(){
    vector<int> num = {1,0,0,0,1};
    canPlaceFlowers(num , 2);
    
    return 0;
}