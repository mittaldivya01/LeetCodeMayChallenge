class Solution {
public:

string frequencySort(string str) {
     int n = str.length();  
    int arr[256]={0};
    //storing frequency of characters.
    for(int i=0;i<n;i++)
        ++arr[int(str[i])];
    //vector to store character frequency and char
    vector<pair<int, char> > vp; 
        for (int i = 0; i < 256; i++) { 
             if(arr[i]>0)
                vp.push_back( 
                    make_pair( 
                        arr[i], 
                        char(i))); 
    }
    //sorting vector on frequency
    sort(vp.begin(), vp.end()); 
    string s2="";
    for (int i = vp.size()-1; i >=0; i--) 
        s2.append(vp[i].first,vp[i].second);
    return s2;

}

};
