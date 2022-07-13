bool canPlace(vector<int> pos,int n,int c,int dist){
    int coow = pos[0],count = 1;
    for(int i=1;i<n;i++){
        if(pos[i]-coow>=dist){
            count++;
            coow = pos[i];
        }
    }
    if(count>=c) return true;
    return false;
}

int chessTournament(vector<int> pos , int n ,  int c){
	// Write your code here
    sort(pos.begin(),pos.end());
    int res;
    int low = 1,high = pos[n-1]-pos[0];
    while(low<=high){
        int mid = (low+high)/2;
        if(canPlace(pos,n,c,mid)){
            res = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return res;
}
