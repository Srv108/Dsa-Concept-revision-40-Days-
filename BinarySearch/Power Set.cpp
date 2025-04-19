class Solution {
    public:	
        void set(vector<int>& nums, vector<int> list,vector<vector<int>>& ans,int index){
            if(index == nums.size()){
                ans.push_back(list);
                return;
            }
    
            /* did not want to insert */
            set(nums, list, ans, index + 1);
    
            /*  want to insert */
            list.push_back(nums[index]);
            set(nums, list, ans, index + 1);
        }
        vector<vector<int> > powerSet(vector<int>& nums) {
            //your code goes here
            vector< vector<int> > ans;
            vector<int> list;
    
            set(nums, list, ans, 0);
            return ans;
        }
    };