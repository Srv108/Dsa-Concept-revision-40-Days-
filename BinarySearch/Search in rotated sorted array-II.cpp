class Solution {
    public:
        bool bs (vector<int>& arr, int target ){
            int n = arr.size();
            int low = 0, high = n-1;
    
            while(low <= high){
                int mid = (low + high) / 2;
    
                if(arr[mid] == target) return true;
                /* find the sorted portion and remove half search space */
                else if (arr[low] == arr[mid] && arr[mid] == arr[high]) {
                    low++;
                    high--;
                } else if (arr[low] <= arr[mid]){
                    /* search target exist in this search space or not */
                    if(arr[low] <= target && target <= arr[mid]){
                        high = mid - 1;
                    } else {
                        low = mid + 1;
                    }
                } else {
                    /* search target exist in this search space or not */
                    if(arr[mid] <= target && target <= arr[high]){
                        low = mid + 1;
                    } else {
                        high = mid - 1;
                    }
                }
            }
    
            return false;
        }
        bool searchInARotatedSortedArrayII(vector<int> &nums, int k)  {
          return bs(nums,k);
        }
    };