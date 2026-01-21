class Solution {
public:

    vector<vector<int>>result;
    vector<int>temp;

void backtrack(int index, vector<int>& nums){
      result.push_back(temp);

    for(int i = index; i<nums.size(); i++){
        temp.push_back(nums[i]);
        backtrack(i+1,nums);
        temp.pop_back();
    }
}

    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(0,nums);
        return result;
    }
};