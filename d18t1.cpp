class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index){
        
        vector<int> v2;

        for(int i=0;i<nums.size();i++)
        {
            v2.insert(v2.begin()+index[i] , nums[i]);
        }

        return v2;
    }
};
