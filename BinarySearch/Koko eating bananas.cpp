class Solution {
    public:
        long long sum (vector<int>& arr, int target ){
            long long sum = 0;
            for(int i=0;i<arr.size();i++){
                sum += ceil(double(arr[i]) / double(target));
            }
    
            return sum;
        }
        int bs (vector<int>& arr,int h){
            int n = arr.size();
            int low = 1, high = *max_element(arr.begin(),arr.end());
    
            while(low <= high){
                int mid = (low + high) / 2;
    
                if(sum(arr,mid) <= h){
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
    
            return low;
        }
        int minimumRateToEatBananas(vector<int> nums, int h) {
            return bs(nums,h);
        }
    };
    