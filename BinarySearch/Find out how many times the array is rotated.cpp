class Solution {
    public:
        int pivotElement (vector<int>& nums){
            int n = nums.size();
            int low = 0, high = n-1;
    
            while(low <= high){
                int mid = (low + high) / 2;
    
                if(nums[mid] <= nums[n-1]){
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
    
            return high;
        }
        int findKRotation(vector<int> &nums)  {
            return pivotElement(nums) + 1;
        }
    };