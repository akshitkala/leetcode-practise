class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        intervals.push_back(newInterval);
        int n= intervals.size();
        sort(intervals.begin(),intervals.end());
        int start=intervals[0][0];
        int end= intervals[0][1];
        for(int i=1;i<=n;i++){
            if(i==n || intervals[i][0]>end){
                result.push_back({start,end});
                if(i!=n){
                    start=intervals[i][0];
                    end=intervals[i][1];
                }
            }else{
                start=min(start,intervals[i][0]);
                end=max(end,intervals[i][1]);
            }
        }
        return result;
    }
};