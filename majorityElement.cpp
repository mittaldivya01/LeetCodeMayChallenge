class Solution {
public:
int majorityElement(vector& nums) {

    int size=nums.size();
    
    unordered_map<int,int> m;
    int res=nums[0],f=1;
    
    for(int i=0;i<size;i++)
    {
        if(m.find(nums[i])==m.end())
        {
            m.insert(make_pair(nums[i],1));
        }
        else
            ++m[nums[i]];
        if(m[nums[i]]>f)
        {
            f=m[nums[i]];
            res=nums[i];
        }
    }
    return res;
}

};
