long long merge(long long arr[], int l, int mid, int r){
    int i = l, j = mid, k = 0;
    long long inv = 0;
    int temp[(r - l + 1)];

    while ((i < mid) && (j <= r)){
        if (arr[i] <= arr[j]){
            temp[k] = arr[i];
            ++k;
            ++i;
        }
        else{
            temp[k] = arr[j];
            inv += (mid - i);
            ++k;
            ++j;
        }
    }

    while (i < mid){
        temp[k] = arr[i];
        ++k;
        ++i;
    }

    while (j <= r){
        temp[k] = arr[j];
        ++k;
        ++j;
    }

    for (i = l, k = 0; i <= r; i++, k++){
        arr[i] = temp[k];
    }

    return inv;
}
long long mergeSort(long long arr[], int l, int r){
    long long inv = 0;

    if (r > l){
        int mid = (r + l) / 2;
        inv = mergeSort(arr, l, mid);
        inv += mergeSort(arr, mid + 1, r);
        inv += merge(arr, l, mid + 1, r);
    }
    return inv;
}

long long getInversions(long long arr[], int n){
    return mergeSort(arr, 0, n - 1);
}
