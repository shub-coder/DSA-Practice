int longestMountain(vector<int>& arr)
{
    int n=arr.size();
    int lo=0, hi=0, ans=0, i=1;
    while(i<n)
    {
        while(i<n && arr[i-1]==arr[i])
        {
            i++;
        }
        while(i<n && arr[i-1]<arr[i])
        {
            high++;
            i++
        }
        while(i<n && arr[i-1]>arr[i])
        {
            lo++
            i++
        }
        if(lo && hi)
        {
            ans = max(ans, lo+hi+1);
        }
        return ans;
    }
}