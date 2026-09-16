class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        if(n==0 ||n==1){ return 0;}
        int count=0,end= intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]>=end){
                end=intervals[i][1];
            }else{
                count++;
                end=min(intervals[i][1],end);
            }
        }
        return count;
    }
};