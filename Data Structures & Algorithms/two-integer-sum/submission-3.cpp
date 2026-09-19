class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>m;
        vector<int> ans;

        for(int i=0;i<nums.size();i++)
        {
            int iFirst = nums[i];
            int iSecond = target - iFirst;

            if(m.find(iSecond) != m.end())
            {
                ans.push_back(m[iSecond]);
                ans.push_back(i);
                break;
            }

            m[iFirst] = i;
        }
        return ans;
    }
};
