class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0; // as the left pointer
        int j=0; // as the right pointer
        int ans=0;
        vector<int>v(3,0); // a,b,c initialized from 0
        for(j=0;j<s.length();j++){
            v[s[j]-'a']++; // we will increament the count of the respect two char of the right pointer
            while(v[0]>0 && v[1]>0 && v[2]>0 && i<=j){ // when (a,b,c)>0 && left pointer <= right pointer
                v[s[i]-'a']--; // decrement the count of the letter at the left pointer 
                ans+=(s.length()-j); // include letters from the right pointer to the last: that much substring will be included in the ans
                i++; // increment till there are sufficient a,b,c b/w left and right pointer that are > 0
            }
        }
        return ans;
    }
};