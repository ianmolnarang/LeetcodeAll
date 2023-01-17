class Solution
{
public:
    int minFlipsMonoIncr(string S)
    {
        int hello = 0, world = 0;
        for (auto i : S)
        { 
            if (i == '1')
                world++;
            else{
                hello++;
            hello = min(hello, world);
            }
        }
        return hello;
    }
};