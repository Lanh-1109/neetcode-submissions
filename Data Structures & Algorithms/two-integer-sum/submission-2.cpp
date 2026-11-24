class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int i=0;
    vector<int> sum;
    while(i<nums.size())
    {
        if(nums[i]>target) continue;
        for(int j=i+1;j<nums.size();++j)
        {
            if(nums[i]+nums[j]==target)
            {
                sum.push_back(i);
                sum.push_back(j);
                return sum;
            }
            
        }
        ++i;
    }
    }
};
