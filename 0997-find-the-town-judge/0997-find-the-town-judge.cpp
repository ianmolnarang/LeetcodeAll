class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
     
        //he trust 
        //trusted by
        vector<pair<int,int>> arr(N+1,{0,0});
        for(int i=0;i<trust.size();++i)
        {
            arr[trust[i][0]].first +=1;
            arr[trust[i][1]].second +=1;
        }
        
        //Now find who is trusted by N-1 others and he/she do not trusts others
        for(int i=1;i<=N;++i)
            if(arr[i].first==0 && arr[i].second==N-1)
                return i;
        
        return -1;
    }
};