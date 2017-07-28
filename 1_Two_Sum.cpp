class Solution {
public:
    vector<int> twoSumV1(vector<int>& nums, int target) {
        vector<int> res;
        int n = nums.size();
        if (n < 2) {
            return res;
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }

        return res;
    }
    
    vector<int> twoSumV2(vector<int>& nums, int target) {
        vector<int> res;
        int n = nums.size();
        if (n < 2) {
            return res;
        }

        unordered_map<int, int> posOfNums;
        for (int i = 0; i < n; i++) {
            int num = target - nums[i];
            if (posOfNums.find(num) != posOfNums.end()) {
                res.push_back(posOfNums[num]);
                res.push_back(i);
                return res;
            }

            posOfNums[nums[i]] = i;
        }

        return res;
    }
};
