class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]=i;
            nums1[i]=-1;
        }
        stack<int> st;
        // vector<int> arr(nums1.size(),0);
        for(int i=0;i<nums2.size();i++){
            while(!st.empty() && st.top()<nums2[i]){
                nums1[mp[st.top()]]=nums2[i];
                st.pop();
            }
            if(mp.find(nums2[i])!=mp.end()){
                st.push(nums2[i]);
            }
        }
        return nums1;
    }
};