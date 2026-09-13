class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        sort(intervals.begin(),intervals.end());
        if (intervals.size()==0) return {{}};
        int start=intervals[0][0],end=intervals[0][1];
        for(int i=1;i<=intervals.size();i++){
            if(i==intervals.size() || intervals[i][0]>end){
               
                result.push_back({start,end});
                if(i!=intervals.size()){
                start=intervals[i][0];
                end=intervals[i][1];
                }
            }else{
                start=min(intervals[i][0],start);
                end=max(intervals[i][1],end);
            }
        }
        return result;
    }
};