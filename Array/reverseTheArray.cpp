void reverseArray(vector<int>& arr, int i=0) {
    int n = arr.size();
    for(int i=0; i<n/2; i++){
        swap(arr[i], arr[n-i-1]);
    }
}