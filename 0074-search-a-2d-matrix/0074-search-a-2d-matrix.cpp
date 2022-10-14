class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size())  return false;
        int n = matrix.size();
        int m = matrix[0].size();
        int lo=0;
        int hi=(m*n-1);
        
        while(lo<=hi){
            int mid = (lo + (hi-lo)/2);
            if(matrix[mid/m][mid%m]==target)
                return true;
            else if(matrix[mid/m][mid%m]<target)
                lo=mid+1;
            else
                hi=mid-1;
        }
        
        // for(int i=matrix.size()-1;i>=0;i--){
        //     if(matrix[i][0]>target)
        //         continue;
        //     for(int j=0;j<matrix[i].size();j++){
        //         if(matrix[i][j]==target)
        //             return true;
        //     }
        // }
        return false;
    }
};