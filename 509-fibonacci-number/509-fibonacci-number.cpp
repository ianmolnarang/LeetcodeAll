class Solution {
public:
    int fib(int n) {
        if(n <=1)
            return n;
        int previous1 = 1;
        int previous2 = 0;
        for(int i=2;i<=n;i++)
        {
            int currentvalue = previous1+previous2;
            previous2 = previous1;
            previous1 = currentvalue;
        }
       return previous1;
        
    }
};