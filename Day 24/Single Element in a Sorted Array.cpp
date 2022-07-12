int uniqueElement(vector<int> arr, int n)
{
	// Write your code here
//     int low = 0,high = n-1;
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(arr[mid]!=arr[mid-1] and arr[mid]!=arr[mid])
//     }
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
