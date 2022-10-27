class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int n = s.size();
    map<char,int> mp;
    int m=0;
    int l=0,r=-1;
    for(int i=0;i<n;i++)
    {
        m = max(m,r-l+1);
        auto it=mp.find(s[i]);
        if(it==mp.end())
        {
            mp[s[i]]=i;
            r++;
        }
        else
        {
            if(l>=(*it).second+1);
            else
                l=(*it).second+1;
            mp[s[i]]=i;
            r++;
        }
    }
    m = max(m,r-l+1);
    return m;
    }
};
