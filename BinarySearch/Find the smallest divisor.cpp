class Solution {
    public:
        int sum (vector<int>& arr , int x){
            int sum = 0;
            for(int i=0;i<arr.size();i++){
                sum += ceil(double(arr[i]) / double(x));
            }
    
            return sum;
        }
        int bs (vector<int>& arr, int limit) {
            int n = arr.size();
            int low = 1, high = *max_element(arr.begin(),arr.end());
            while(low <= high){
                int mid = (low + high) / 2;
    
                if(sum(arr,mid) <= limit) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
    
            }
    
            return low;
        }
        int smallestDivisor(vector<int> &nums, int limit) {
            return bs(nums,limit);
        }
    };