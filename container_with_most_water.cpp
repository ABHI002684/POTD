
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxArea=0;
        int start=0,end=n-1;
        while(start<end)
        {
            int length=min(height[start],height[end]);
            int breadth=end-start;
            int area=length*breadth;
            maxArea=max(area,maxArea);
            if(height[start]<height[end]){
                start++;
            }else{
                end--;
            }
        }
        return maxArea;
    }
};