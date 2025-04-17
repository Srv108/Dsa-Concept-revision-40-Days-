// 1st Way 

#include<bits/stdc++.h>
class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        return lower_bound(nums.begin(),nums.end(),x) - nums.begin();
    }
};

// 2nd way


class Solution{
    public:
        int bs (vector<int> &nums,int target){
            int n = nums.size();
            int low = 0, high = n-1;
            int ans = n;
    
            while(low <= high){
                int mid = (low + high) / 2;
                if (nums[mid] >= target){
                    ans = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
    
            return ans;
        }
        int lowerBound(vector<int> &nums, int x){
            return bs(nums,x);
        }
    };

    // 3rd way 
    class Solution{
        public:
            int bs (vector<int> &nums,int target){
                int n = nums.size();
                int low = 0, high = n-1;
        
                while(low <= high){
                    int mid = (low + high) / 2;
                    if(nums[mid] == target){
                        if(nums[mid-1] != target) return mid;
                        else high = mid;
                    } else if (nums[mid] > target){
                        high = mid - 1;
                    } else {
                        low = mid + 1;
                    }
                }
        
                return low;
            }
            int lowerBound(vector<int> &nums, int x){
                return bs(nums,x);
            }
        };