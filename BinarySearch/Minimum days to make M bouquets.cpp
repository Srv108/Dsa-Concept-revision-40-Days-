class Solution {
    public:
        bool possible(vector<int>& arr, int k, int m,int day){
            int total = 0;
            int count = 0;
            for(int i=0;i<arr.size();i++){
                if(arr[i] <= day){
                    count++;
                } else {
                    total += (count / k);
                    count = 0;
                }
            }
            total += (count / k);
    
            return total >= m;
        }
        int bs (vector<int>& arr, int k, int m){
            int n = arr.size();
    
            /* if roses is smaller than total required */
            if(n < k*m) return -1;
    
            int low = *min_element(arr.begin(),arr.end());
            int high = *max_element(arr.begin(),arr.end());
    
            while(low <= high){
                int mid = (low + high) / 2;
    
                if(possible(arr,k,m,mid)){
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
    
            return low;
        }
        int roseGarden(int n,vector<int> nums, int k, int m) {
            return bs(nums,k,m);
        }
    };