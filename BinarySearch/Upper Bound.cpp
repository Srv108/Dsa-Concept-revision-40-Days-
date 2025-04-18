// 1st way

class Solution{
    public:
        int upperBound(vector<int> &nums, int x){
            return upper_bound(nums.begin(),nums.end(),x)-nums.begin();
        }
    };

class Solution{
    public:
        int bs (vector<int>& nums, int target){
            int n = nums.size();
            int ans = 0;
            int low = 0, high = n-1;
    
            while(low <= high){
                int mid = (low + high) / 2;
    
                if(nums[mid] > target){
                    ans = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
    
            return ans;
        }
        int upperBound(vector<int> &nums, int x){
            return upper_bound(nums.begin(),nums.end(),x)-nums.begin();
        }
    };

    class Solution{
        public:
            int bs (vector<int>& nums, int target){
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
        
                return low;
            }
            int upperBound(vector<int> &nums, int x){
                return upper_bound(nums.begin(),nums.end(),x)-nums.begin();
            }
        };