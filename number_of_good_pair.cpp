class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int gpair=0,n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
            if(nums[i]==nums[j] && i<j)
            {
                gpair++;
            }
            }
        }
        return gpair;
    }
};