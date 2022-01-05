bool canPair(vector<int> arr, int k) {
    int n=arr.size();
    if (n & 1)
    return false;

// Create a frequency array to count occurrences
// of all remainders when divided by k.
   unordered_map<int, int> freq;

// Count occurrences of all remainders
for (int i = 0; i < n; i++){
    freq[((arr[i] % k) + k) % k]++;
}

// Traverse input array and use freq[] to decide
// if given array can be divided in pairs
for (int i = 0; i < n; i++) {
    int rem = ((arr[i] % k) + k) % k;
    if (2 * rem == k) {
        if (freq[rem] % 2 != 0)
        return false;
}
else if (rem == 0) {
    if (freq[rem] & 1)
    return false;
}
else if (freq[rem] != freq[k - rem])
   return false;
}
   return true;
}