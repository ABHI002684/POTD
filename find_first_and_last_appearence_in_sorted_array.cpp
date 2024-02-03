class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int ansLeft=-1,ansRight=-1;
        int start=0,end=nums.size()-1;
    //searching first occurence 
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(nums[mid]==target)
        {
            ansLeft=mid;
            end=mid-1;//search in left to get the first occurence
        }else if(nums[mid]<target){
            start=mid+1;//search in right 
        }else{
            end=mid-1;//search in left
        }
    } 
    // searcing last occurence
    start=0,end=nums.size()-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            ansRight=mid;
            start=mid+1;//search in right to get another occurence of target in right
        }else if(nums[mid]>target){
            end=mid-1;//search in left
        }else{
            start=mid+1;//search in right
        }
    }
    return {ansLeft,ansRight};
    }
};