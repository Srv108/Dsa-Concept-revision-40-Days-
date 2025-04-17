#include<bits/stdc++.h>

class Solution {
    public:
        int bs (vector<int>& arr){
            int n = arr.size();
            int ans = INT_MAX;
    
            int low = 0, high = n-1;
    
            while(low <= high){
                int mid = (low + high) / 2;
    
                /* find the sorted search space 
                    since in this portion first element is the smallest one
                 */
                ans = min(ans,arr[mid]);
    
                if(arr[mid] <= arr[high]){
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
    
            return ans;
        }
        int findMin(vector<int> &arr)  {
          return bs(arr);
        }
    };