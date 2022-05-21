class Solution {
public:
    struct Node {
        int value = -1;
    };
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, Node> mem;
        int i = 0,  aux;
        bool flag = false;
        vector<int> ans;
        while(i < nums.size() && !flag){
            aux = target - nums[i];
            if(mem[aux].value == -1) {
                
            } else {
                flag = true;
                ans.push_back(mem[aux].value);
                ans.push_back(i);
            }
        
            mem[nums[i]].value = i;
            i++;
        }
        return ans;
    }
};
