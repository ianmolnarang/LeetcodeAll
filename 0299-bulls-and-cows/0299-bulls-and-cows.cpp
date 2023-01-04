class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls= 0 ; 
        int cows = 0 ; 
        vector<int> s(10, 0) ; 
        vector<int> g(10,0) ;
        
        for(int i = 0 ; i< secret.length() ; i++){
            if(secret[i]==guess[i]){
                bulls++ ; 
            }
            else{
                //maintaing the two freq array
                g[guess[i]-'0']++  ;
                s[secret[i]-'0']++  ;
                
            }
        }
        for(int i = 0; i  <10 ; i++){
            cows = cows + min(s[i], g[i]) ;
            
        }
        string ans = "" ; 
        ans = ans + to_string(bulls) ;
        ans = ans + 'A' ;
        ans = ans + to_string(cows) ;
        ans = ans + 'B' ;
         
        return ans ; 
    }
};