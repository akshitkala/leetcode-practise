class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> ans(m*n);
        int left=0,right=n-1,top=0,bottom=m-1,k=0;
        while(left<=right && bottom>=top){
            for(int i=left;i<=right;i++){
                ans[k++]=matrix[top][i];
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans[k++]=matrix[i][right];
            }
            right--;
            if(top<=bottom){

            for(int i=right;i>=left;i--){
                ans[k++]=matrix[bottom][i];
            }
            }
            bottom--;
            if(right>=left){

            for(int i=bottom;i>=top;i--){
                ans[k++]=matrix[i][left];
            }
            }
            left++;
        }
        return ans;
    }
};