class Solution {
public:
    int findComplement(int num) {
       long long int b=0;long long int i=0;
        while(num>0){
            int c=num%2;
            if(c==0)
                b=b+pow(2,i);
        num=num/2;
            i++;
        }
        return b;
        
    }
};