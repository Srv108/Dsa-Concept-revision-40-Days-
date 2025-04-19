class Solution {
    public:
        void findCombination (vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int> list, int index, int n){
            if(target == 0) {
                ans.push_back(list);
                return;
            }
    
            if(index >= n) return;
    
            /* we can choose same element  */
            if(target >= candidates[index]){
                list.push_back(candidates[index]);
                findCombination(candidates, target-candidates[index], ans, list, index, n);
                list.pop_back();
            }
    
            /* insert next element  exclude current element */
            findCombination(candidates, target, ans, list, index+1, n);
        }
        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            //your code goes here
            vector<vector<int> > ans;
            vector<int> list;
            findCombination(candidates,target,ans,list,0,candidates.size());
    
            return ans;
        }
    };