class Solution {
    //KMP algorithm very important
public:
    string longestPrefix(string s) {
        int n = s.size();
        //creating lps array using kmp algorithm
        int i=1,j=0;
        vector<int> lps(n,0);
        while(i<n){
            if(s[i] == s[j]){
                //lps ki value previous + 1 hoyeghy or j+1 
                 lps[i] = j + 1;
                 i++;
                 j++;
            }
            else{
                //chk karna padegha ki out of bound na hojay array ke
                if(j > 0){
                    j = lps[j-1];
                }
                else{
                    //agar hua tau lps ki value 0 set kardo
                    lps[i] == 0;
                    i++;
                }
            }
        }
        //second last value will denote the len
        int lenOfPrefixSuffix = lps[n-1];
        //ans string mai dena hai
        string ans = s.substr(0,lenOfPrefixSuffix);
        return ans;
    }
};