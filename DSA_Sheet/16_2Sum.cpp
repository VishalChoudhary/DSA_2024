#include <bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        cout<<"left value "<<left<<" "<<endl;
        cout<<"right value "<<right<<" "<<endl;
        cout<<"sum "<<sum<<" "<<endl;
        if (sum == target) {
            cout<<left<<" "<<right<<endl;
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}

int main()
{
    int n = 3;
    vector<int> arr = {3,2,4};
    int target = 6;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}