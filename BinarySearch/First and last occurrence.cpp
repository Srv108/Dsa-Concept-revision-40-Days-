class Solution{
    public:
        int firstOccurrence (vector<int>& nums, int target){
            int n = nums.size();
            int low = 0, high = n-1;
    
            while(low <= high){
                int mid = (low + high) / 2;
    
                if(nums[mid] >= target){
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
    
            return low;
        }
        int lastOccurrence (vector<int>& nums, int target){
            int n = nums.size();
            int low = 0, high = n-1;
    
            while(low <= high){
                int mid = (low + high) / 2;
    
                if(nums[mid] <= target){
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
    
            return high;
        }
        vector<int> searchRange(vector<int> &nums, int target) {
    
            int firstIndex = firstOccurrence(nums,target);
            
            if(firstIndex == nums.size() || nums[firstIndex] != target){
                return {-1, -1};
            }
            
            int lastIndex = lastOccurrence(nums,target);
    
    
            return {firstIndex,lastIndex};
        }
    };