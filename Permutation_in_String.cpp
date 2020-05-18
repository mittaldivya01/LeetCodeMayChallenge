class Solution {
public:
    bool allzero(int *arr)
    {
        for(int i=0;i<26;i++)
            if(arr[i]!=0)
                return false;
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        
        int count[26]={0};
        int len_s1=s1.length();
        int len_s2=s2.length();
        if(len_s1>len_s2)
            return false;
         for(int i=0;i<len_s1;i++) {
             --count[s1[i]-'a'];
             ++count[s2[i]-'a'];
         }
        for(int i=len_s1;i<len_s2;i++)
        {
            if(allzero(count))
                return true;
            --count[s2[i-len_s1]-'a'];
            ++count[s2[i]-'a'];
        }
       if(allzero(count))
            return true;
        return false;
    }
};
