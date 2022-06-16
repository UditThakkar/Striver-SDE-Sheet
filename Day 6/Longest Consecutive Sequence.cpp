#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
        if(arr.size() == 0) return 0;
            sort(arr.begin(), arr.end());
            int now = 1, maxm = 1;
            for(int i = 1 ; i <arr.size() ; i++){
                if(arr[i] == arr[i-1]){
                    continue;
                }
                else if(arr[i] == arr[i-1] + 1){
                    now++;
                }
                else{
                    now=1;
                }
                maxm = max(maxm, now);
            }
            return maxm;
}
