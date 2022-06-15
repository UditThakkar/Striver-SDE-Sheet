#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int a1=-1,a2=-1,c1=0,c2=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==a1) c1++;
        else if(arr[i]==a2) c2++;
        else if(c1==0){
            a1 = arr[i];
            c1 = 1;
        }
        else if(c2==0){ 
            a2 = arr[i];
            c2=1;
        }
        else{
            c1--;
            c2--;
        }
    }
    vector<int> ans;
    c1 = c2=0;
    for(int i =0;i<arr.size();i++){
        if(arr[i]==a1) c1++;
        else if(arr[i]==a2) c2++;
    }
    if(c1>arr.size()/3) ans.push_back(a1);
    if(c2>arr.size()/3) ans.push_back(a2);
    return ans;
}
