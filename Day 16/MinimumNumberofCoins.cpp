int findMinimumCoins(int amount) 
{
    // Write your code 
    int count = 0;
    int arr[9] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    for(int i=8;i>=0;i--){
        if(amount>0 and arr[i]>amount){
            continue;
        }
        else{
            int ind = amount/arr[i];
            count+=ind;
            amount-=arr[i]*ind;
        }
    }
    return count;
}
