class Solution{
    public:
        bool bs (vector<int>& nums, int target){
            int n = nums.size();
    
            int low = 0, high = n-1;
    
            while(low <= high){
                int mid = (low + high) / 2;
    
                if(nums[mid] == target) return true;
                else if(nums[mid] < target){
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
    
            return false;
        }
        int findRow (vector< vector<int> >& mat,int target){
            int n = mat.size();
            int low = 0, high = n-1;
    
            while(low <= high){
                int mid = (low + high) / 2;
    
                int size = mat[mid].size();
                int firstElement = mat[mid][0];
                int lastElement = mat[mid][size-1];
    
                if(target >= firstElement && target <= lastElement){
                    return mid;
                } else if (target > lastElement) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
    
            return -1;
        }
        bool searchMatrix(vector<vector<int>> &mat, int target){
            int row = findRow(mat,target);
    
            if(row == -1) return false;
    
            return bs(mat[row],target);
        }
    };