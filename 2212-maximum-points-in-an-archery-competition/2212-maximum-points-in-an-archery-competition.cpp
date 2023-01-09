class Solution {
public:
    vector<int> maximumBobPoints(int numArrows, vector<int>& aliceArrows) {
        int finalMask = 0,finalScore=0;
        for(int i=1;i< (1<<12) ;i++){
            int score  = 0;
            int arrows = numArrows;
            bool wrongMask=false;
            for(int j=1;j<12;j++){
                if((1<<j)&i){
                    int arrowsNeeded = aliceArrows[j] + 1; 
                    if(arrows-arrowsNeeded >= 0){
                        arrows -= arrowsNeeded;
                        score += j;
                    }
                    else{
                        wrongMask=true;
                        break;
                    }
                }
            }
            if(!wrongMask && score>finalScore){
                finalScore=score;
                finalMask=i;
            }
        }
        vector<int> ans(12);
        int sum=numArrows;
        for(int i=1;i<12;i++){
            if((1<<i)&finalMask){
                ans[i] = aliceArrows[i]+1;
                sum -= ans[i];
            }
        }
        if(sum>0){
            ans[0] = sum;
        }
        cout<<finalScore;
        return ans;
    }
};