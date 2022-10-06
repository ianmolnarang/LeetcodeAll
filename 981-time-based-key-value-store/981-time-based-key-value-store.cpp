class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>> mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        
        mp[key].push_back({timestamp,value});
    }
    string getVal(vector<pair<int,string>> &v,string key,int tmp)
    {
        
        int low=0;
        int high=v.size()-1;
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            
            if(v[mid].first==tmp)
            return v[mid].second;
            
            else
            if(v[mid].first<tmp)
            low=mid+1;
            else
            high=mid-1;
        }
        if(low==0)
        return "";
        
        return v[low-1].second;
    }
    string get(string key, int tmp) {
        
        return getVal(mp[key],key,tmp);
        
        
        
    }
};