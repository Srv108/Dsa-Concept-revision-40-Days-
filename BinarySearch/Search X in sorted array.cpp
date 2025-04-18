class Solution{
    public:
        int bs(vector<int>& arr, int target){
            int n = arr.size();
            int low = 0, high = n-1;
    
            while(low <= high){
                int mid = (low + high) / 2;
    
                if(arr[mid] == target) return mid;
                else if (arr[mid] < target){
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
    
            return -1;
        }
        int search(vector<int> &nums, int target){
            return bs(nums,target);
        }
    };