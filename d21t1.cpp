class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;
        if(s.size()==1)
            return 1;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        //cout<<s;
        for(int i = 0;i<s.size();i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' & s[i]<='9'))
            {    
                v.push_back(s[i]);
                cout<<s[i];
            }
            
        }
        // for(auto i: v)
        //     cout<<i;
        int n = v.size();
        if(v.size() == 0)
            return 1;
        for(int i =0;i<=n/2;i++)
        {
            if(v[i] == v[n-i-1])
                continue;
            else
                return 0;
        }
        return 1;

    }
};
