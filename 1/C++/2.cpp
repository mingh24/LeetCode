class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2, -1);
        map<int, int> myMap;

        for (int i = 0; i < nums.size(); ++i) {
            if (myMap.count(target - nums[i]) > 0) {
                result[0] = myMap[target - nums[i]];
                result[1] = i;
            }            
            myMap[nums[i]] = i;
        }
        
        return result;
    }
};
