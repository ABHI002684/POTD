class Solution {
public:
int binary_search(vector<int>& arr,int target){
    //searching is done by dividing the search interval
        int start=0,end=arr.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]==target) return mid;
            else if(arr[mid]>target) end=mid-1;
            else start=mid+1;
        }
        return -1;
}
    int search(vector<int>& nums, int target) {
        
       return  binary_search(nums,target);
       
    }
};