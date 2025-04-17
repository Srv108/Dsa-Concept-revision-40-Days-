class Solution {
    public:
        int bs (vector<int>& nums,int target){
            int n = nums.size();
            int low = 0, high = n-1;
    
            while(low <= high){
                int mid = (low + high) / 2;
    
                if(nums[mid] == target) return mid;
                /* find which portion is sorted */
                else if(nums[low] <= nums[mid]){ /* left half is sorted */
                    /* find the element exist in this portion or not */
                    if(nums[low] <= target && target < nums[mid]){
                        high = mid - 1;
                    } else {
                        low = mid + 1;
                    }
                } else {
                    /* find the element exist in this portion or not */
                    if(nums[mid] <= target && target <= nums[high]){
                        low = mid + 1;
                    } else {
                        high = mid - 1;
                    }
                }
            }
    
            return -1;
        }
        int search(vector<int> &nums, int k) {
           return bs(nums,k);
        }
    };