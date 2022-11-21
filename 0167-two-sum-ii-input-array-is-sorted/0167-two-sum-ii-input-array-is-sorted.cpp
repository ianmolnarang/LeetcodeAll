class Solution {
public:
    int n;

    int binarysearch(int x, int xi, vector<int>& numbers)
    {
        int l = 0, r = n-1, id = -1;
        while(l <= r) {
            int mid = (l + r) / 2;
            if(numbers[mid] == x and mid != xi) {
                id = mid;
                break;
            }
            else if(numbers[mid] < x) l = mid + 1;
            else r = mid - 1;
        }
        return id;
    }

    vector<int> twoSum(vector<int>& numbers, int target) {
        n = numbers.size();
        vector<int> ans;
        for(int i=0; i<n; i++) {
            int id = binarysearch(target - numbers[i], i, numbers);
            if(id != -1) {
                ans = {i+1, id+1};
                break;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};