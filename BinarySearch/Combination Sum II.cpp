class Solution {
    public:
        void findCombination (vector<int>& arr, vector<vector<int> >& ans, vector<int> list, int index, int target, int n){
            if(target == 0){
                ans.push_back(list);
                return;
            }
    
            if(target < 0 || index == n) return;
    
            /* exclude the current element and ensure there is no duplicates*/
            for(int i=index+1;i<n;i++){
                if(arr[i] != arr[index]) { 
                    findCombination(arr, ans, list, i, target, n);
                    break;
                }
            }
    
            /* include the current element */
            if(target >= arr[index]){
                list.push_back(arr[index]);
                findCombination(arr, ans, list, index + 1, target - arr[index], n);
            }
        }
        vector<vector<int> > combinationSum2(vector<int>& candidates, int target) {
            //your code goes here
    
            sort(candidates.begin(),candidates.end());
    
            vector<vector<int> > ans;
            vector<int> list;
    
            findCombination(candidates, ans, list, 0, target, candidates.size());
    
            return ans;
        }
    };