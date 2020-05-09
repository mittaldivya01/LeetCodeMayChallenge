class Solution {
public:
bool isPerfectSquare(int num) {
//perfect square property check to reduce testcase ending with 2, 3, 7, 8
if(num%10 ==2 || num%10 ==3 || num%10 ==7 || num%10 ==8)
{
return false;
}
if(num==1)
return true;
long long l=2,r=num/2,mid;

    while(l<=r)
    {
        mid=l+ (r-l)/2;
        if(num%mid==0 && mid*mid==num)
            return true;
        if(mid*mid >num )
            r=mid-1;
        else
            l=mid+1;
    }
   return false; 
}

};
