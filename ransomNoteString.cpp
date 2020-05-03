class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int l1=ransomNote.length();
        int l2=magazine.length();
        int array[26]={0};
        for(int i=0;i<l1;i++)
        {
           ++array[ransomNote[i]-'a'];
        }
        for(int i=0;i<l2;i++)
        {
           --array[magazine[i]-'a'];
        } 
        for(int i=0;i<26;i++)
        {
           if(array[i]>0)
                return false;
        }
        return true;
    }
};
