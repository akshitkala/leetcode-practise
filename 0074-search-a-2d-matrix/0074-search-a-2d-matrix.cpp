class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int column=matrix[0].size();
        int low=0,high= row*column-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int r=mid/column;
            int c=mid%column;
            if(matrix[r][c]==target){
                return true;
            }else if(matrix[r][c]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
};