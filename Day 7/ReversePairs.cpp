#include <bits/stdc++.h> 

int merge(vector < int > & arr, int l, int mid, int h) {
  int total = 0;
  int j = mid + 1;
  for (int i = l; i <= mid; i++) {
    while (j <= h && arr[i] > 2 * arr[j]) {
      j++;
    }
    total += (j - (mid + 1));
  }

  vector < int > t;
  int left = l, right = mid + 1;

  while (left <= mid && right <= h) {

    if (arr[left] <= arr[right]) {
      t.push_back(arr[left++]);
    } else {
      t.push_back(arr[right++]);
    }
  }

  while (left <= mid) {
    t.push_back(arr[left++]);
  }
  while (right <= h) {
    t.push_back(arr[right++]);
  }

  for (int i = l; i <= h; i++) {
    arr[i] = t[i - l];
  }
  return total;
}
int mergeSort(vector<int> &arr, int l, int r){
      if (l >= r)
        return 0;
      int mid = (l + r) / 2;
      int inv = mergeSort(arr, l, mid);
      inv += mergeSort(arr, mid + 1, r);
      inv += merge(arr, l, mid, r);
      return inv;
}


int reversePairs(vector<int> &arr, int n){
	// Write your code here.	
    return mergeSort(arr, 0, n - 1);
}
