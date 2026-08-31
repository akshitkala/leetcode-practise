class Solution {
public:
    int binary(vector<int> nums,int low,int high,int target){
        if(low>high) return -1;
        int mid=low+(high-low)/2;
        if(nums[mid]== target) return mid;
        int left=low,right=high;
        int ans1=-1,ans2=-1;
        if(nums[low]<nums[mid]){
            right=mid;
            low=mid+1;
        }else{
            left=mid+1;
            high=mid-1;
        }
        while(left<=right){
            int middle=left+(right-left)/2;
            if(nums[middle]==target){
                ans1=middle;
                break;
            }else if(nums[middle]>target){
                right=middle-1;
            }else{
                left=middle+1;
            }
        }
        ans2= binary(nums,low,high,target);
        return max(ans1,ans2);
    }
    int search(vector<int>& nums, int target) {
        return binary(nums,0,nums.size()-1,target);
    }
};