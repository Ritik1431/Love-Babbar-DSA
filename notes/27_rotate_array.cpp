#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size()); //we are using this temp to prevent the overridding

        for(int i =0;i<nums.size();i++)
        {
            temp[(i+k)%nums.size()] = nums[i];
        }
        nums = temp;
    }
};
int main()
{
    return 0;
}