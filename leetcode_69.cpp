#include<iostream>
using namespace std;
///69. SQRT using binary search.
int findIntSQRT(int value)
{
    int start = 0 , end = value  ;
    long long int mid = 0 , ans =-1;

    while(start <= end)
    {
        mid = start + (end -start)/2;
        long long int square = mid * mid ;
        if(square == value)
           return mid ;
        else if(square > value)
        {
            end = mid - 1 ;
        }
        else{
            start = mid + 1;
            ans = mid ;
        }
    }
    return ans;
}
int main(){
    int num = 150 ;
    int result = findIntSQRT(num);
    cout<<"SQRT of "<<num<<" is "<<result<<endl;
    return 0;
}