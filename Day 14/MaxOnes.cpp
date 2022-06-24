class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int count = 0,ans = 0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                count++;
            }
            else{
                ans = max(ans,count);
                count = 0;
            }
        }
        ans = max(ans,count);
        return ans;
    }
};
