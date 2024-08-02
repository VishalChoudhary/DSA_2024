// https://leetcode.com/problems/maximum-subarray/
// To find largest sum along with the subarray.

#include <bits/stdc++.h>
using namespace std;

void maxSubArray(vector<int>& nums) {
        int sum = 0;
        int start=0, numsStart=-1, numsEnd=-1;
        int maxi = INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(sum==0){
                start=i;
            }
            sum+=nums[i];
            if(sum>maxi){
                maxi=sum;
                numsStart=start;
                numsEnd=i;
            }
            if(sum<0){
                sum=0;
            }
        }
    cout<<"Largest Sum of Sub-Array is: "<<maxi<<endl;
    cout<<"The Largest Sub-Array: "<<endl;
    for(int i=numsStart;i<=numsEnd;i++){
        cout<<nums[i]<<" ";
    }  
}

int main()
{
    vector<int> vector1 { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    maxSubArray(vector1);
    return 0;
}

