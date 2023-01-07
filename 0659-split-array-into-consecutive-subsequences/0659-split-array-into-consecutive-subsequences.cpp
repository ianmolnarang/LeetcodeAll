class Solution {
public:
    bool isPossible(vector<int>& nums) {
        //creating a frequency map 
        unordered_map<int , int> frq ; 
        for(auto it: nums) 
            frq[it]++ ; 
        
        //creating map for storing the n+1 value 
        //which will help in checking if there exists a another number in the array or not 
        unordered_map<int, int> req ; 
        for(auto n:  nums ){
            //all occurences of cur num is already taken
            if(frq[n] == 0) continue;
            
            if(req[n]>0){
                req[n]-- ;
                frq[n]-- ; 
                
                //adding to the req 
                req[n+1]++ ; 
            }
            
            //adding the 3 
            else if(frq[n]>0 && frq[n+1]>0 && frq[n+2]>0 ){
                frq[n]-- ; 
                    frq[n+1]-- ;  
                     frq[n+2]-- ;
                
                req[n+3]++ ;
            }
            
            else{
                return false ; 
            }
        }
        return true ; 
        
    } 
};

   
