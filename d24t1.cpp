class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> v;
        vector<pair<int,int> > vec;

        for(int i=0;i<nums.size();i++)
        {
            vec.push_back({nums[i],i});
        }

        sort(vec.begin(),vec.end());
        int start = 0 , end = nums.size()-1;
        while(true)
        {
            if(vec[start].first+vec[end].first == target)
            {
                v.push_back(vec[start].second);
                v.push_back(vec[end].second);
                return v;
            }
            else if(vec[start].first + vec[end].first > target)
            {
                end--;
            }
            else
            {
                start++;
            }
        }

    }
};
