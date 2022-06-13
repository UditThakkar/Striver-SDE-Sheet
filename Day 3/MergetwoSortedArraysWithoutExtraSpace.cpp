#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& n1, vector<int>& n2, int m, int n) {
	// Write your code here.
    int i=m-1;
        int j=n-1;
        int a=m+n-1;
        
        while(i>=0&&j>=0){
            if(n1[i]>n2[j]){
                n1[a]=n1[i];
                i--;
                a--;
            }
            else{
                n1[a]=n2[j];
                j--;
                a--;
            }
        }
        while(i>=0){
            n1[a]=n1[i];
            i--;
            a--;
        }
        while(j>=0){
            n1[a]=n2[j];
            j--;
            a--;
        }
    return n1;
}
