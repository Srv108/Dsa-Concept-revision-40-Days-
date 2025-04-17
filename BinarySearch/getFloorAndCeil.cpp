class Solution {
    public:
        int getFloor(vector<int>& nums, int target){
            int n = nums.size();
            int low = 0, high = n-1;
    
            while( low <= high){
                int mid = (low + high) / 2;
                
                if (nums[mid] <= target){
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
    
            return (high >= 0 && high < n) ? nums[high] : -1;
        }
        int getCeil(vector<int>& nums, int target){
            int n = nums.size();
            int low = 0, high = n-1;
    
            while( low <= high){
                int mid = (low + high) / 2;
                
                if(nums[mid] >= target){
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
    
            return (low >= 0 && low < n) ? nums[low] : -1;
        }
        vector<int> getFloorAndCeil(vector<int> nums, int target) {
            vector<int> ans;
    
            int floorValue = getFloor(nums,target);
            int ceilValue = getCeil(nums,target);
    
            ans.push_back(floorValue);
            ans.push_back(ceilValue);
    
            return ans;
        }
    };