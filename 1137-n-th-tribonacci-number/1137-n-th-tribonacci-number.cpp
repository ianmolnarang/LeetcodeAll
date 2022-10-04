class Solution {
public:
// Approach- using Recursion & Memoization:

// auxiliary function:
int fun(int n,vector<int> &trib){
if(n==0 || n==1)return n;
if(n==2)return 1;
if(trib[n]!=-1)return trib[n];
return trib[n]=fun(n-1,trib)+fun(n-2,trib)+fun(n-3,trib);
}
// Main Function:
int tribonacci(int n) {
if(n==0 || n==1)return n;
if(n==2)return 1;
vector trib(n+1,-1);
trib[0]=0;trib[1]=1;trib[2]=1;
int res=fun(n,trib);
return res;
}
};