class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size(),minimum=INT_MAX;
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]<minimum)
        //     {
        //         minimum=nums[i];
        //     }
        // }
        // return minimum;
        int start=0,end=n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[start]<=nums[mid]){
                minimum=min(nums[start],minimum);
                start=mid+1;
            }else{
               minimum =min(nums[mid],minimum);
               end=mid-1;
            }
        }
        return minimum;
    }
};