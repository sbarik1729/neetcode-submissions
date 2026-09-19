class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>m;

        for(int i=0;i<nums.size();i++)
        {
            int iSecond = target - nums[i];

            if(m.find(iSecond) != m.end())
            {
                return {m[iSecond], i};
            }

            m[nums[i]] = i;
        }
        return {};
    }
};
