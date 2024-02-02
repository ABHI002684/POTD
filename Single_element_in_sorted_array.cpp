class Solution {
public:

    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int start=0,end=nums.size()-1,ans=0;
        if(n==1) return nums[0];//for array having one element
        // if first or last element is unique element
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        while(start<=end)
     {
         int mid=start+(end-start)/2;
         if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
            return nums[mid];
        }
    // after the if  there must be either nums[mid]==nums[mid+1]  OR nums[mid]==nums[mid-1]
    // if mid is even there are odd number of elements so if nums[mid]==nums[mid+1] and there is only one unique number
    //number before mid are of pair so we have to search in Right
     // if mid is odd there are even number of elements so if nums[mid]==nums[mid-1] and there is only one unique number
    //number before mid and mid are of pair so we have to search in Right  otherwise in left
         if((mid%2==1 && nums[mid]==nums[mid-1]) || (mid%2==0 && nums[mid]==nums[mid+1]))
        {
            start=mid+1;//search in right
        }else{
            end=mid-1;//search in left
        }
     }
     return -1;
    }
};