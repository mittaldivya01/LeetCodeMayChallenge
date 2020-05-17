class Solution {
public:
bool compare(int *count_p,int *count_s)
{
for(int i=0;i<256;i++)
if(count_p[i]!=count_s[i])
return false;
return true;
}
vector findAnagrams(string s, string p) {

    int len_p=p.length();
    int len_s=s.length();
    int count_p[256]={0};
    int count_s[256]={0};
    vector<int> res;
    if(len_p>len_s)
        return res;
    for(int i=0;i<len_p;i++)
    {
        ++count_p[p[i]];
        ++count_s[s[i]];
    }
    for(int i=len_p;i<len_s;i++)
    {
        if(compare(count_p,count_s))
            res.push_back(i-len_p);
        
        ++count_s[s[i]];
        --count_s[s[i-len_p]];
    }
    if(compare(count_p,count_s))
            res.push_back(len_s-len_p);
    return res;
}

};
