class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& v) {
        int i,j,n,x;
        n=v.size();
        for(i=0;i<n;i++)
        {
            x=abs(v[i])-1;
            if(v[x]>0)
            {
                v[x]=-v[x];
            }
        }
        vector <int> u;
        for(i=0;i<n;i++)
        {
            if(v[i]>0)
            {
                u.push_back(i+1);
            }
        }
       
        return u;
    }
};