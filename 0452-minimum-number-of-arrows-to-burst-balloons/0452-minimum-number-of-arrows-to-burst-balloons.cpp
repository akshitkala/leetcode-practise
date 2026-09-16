class Solution {
public:
    static bool cmp(vector<int> &v1,vector<int> &v2){
        return v1[1]<v2[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        int n= points.size();
        if(n==0) return 0;
        sort(points.begin(),points.end(),cmp);
        int end=points[0][1],count=1;
        for(int i=1;i<n;i++){
            if(points[i][0]<=end){
                
            }else{
                count++;
                end=points[i][1];
            }
        }
        return count;
    }
};