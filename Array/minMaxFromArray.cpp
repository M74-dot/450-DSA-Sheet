// sorting the array 
vector<int> minMax(vector<int>&arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    return {arr[0], arr[n-1]};
}

// By iterating through the arr
vector<int> minMax(vector<int>&arr){
    int mn=INT_MAX, mx=INT_MIN;
    for(auto num: arr){
        if(num<mn)mn=num;
        if(num>mx)mx=num;
    }
    return {mn,mx};
}