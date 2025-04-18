class Solution {
    public:   
    int firstIndex(vector<int>& nums,int target){
        int n = nums.size();

        int low = 0, high = n-1;
        while(low <= high){
            int mid = (low + high) / 2;

            if(nums[mid] >= target){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
    int rowWithMax1s(vector < vector < int >> & mat) {
        int ans = -1;
        int maxOnes = 0;
        for(int i=0;i<mat.size();i++){
            vector<int> temp = mat[i];
            int index = firstIndex(temp,1);
            int n = temp.size();
            int count = (n - index);
            if(count > maxOnes){
                ans = i;
                maxOnes = count;
            }
        }

        return ans;
    }
};


class Solution {
    public:   
    int rowWithMax1s(vector < vector < int >> & mat) {
        int ans = -1;
        int maxOnes = 0;
        for(int i=0;i<mat.size();i++){
            vector<int> temp = mat[i];
            int index = lower_bound(temp.begin(),temp.end(),1) - temp.begin();
            int n = temp.size();
            int count = (n - index);
            if(count > maxOnes){
                ans = i;
                maxOnes = count;
            }
        }

        return ans;
    }
};