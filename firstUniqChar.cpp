class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int> charset;
        int l= s.length();
        int res=-1;
        for(int i=l-1;i>=0;i--)
        {
            if(charset.find(s[i])==charset.end())
            {
                res=i;
                charset.insert(make_pair(s[i],1));
            }
            else 
                ++charset[s[i]];
        }
        for(int i=0;i<l;i++)
        if(charset[s[i]]==1 )
            return i;
        return -1;
        
    }
};
