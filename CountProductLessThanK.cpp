 #include<bits/stdc++.h>
 using namespace std;
 int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int j=0;
        long long prod=1;
        int max_no = 0;
        for(int i=0; i<n; i++)
        {
            prod *= a[i];
            while(prod>=k)
            {
                prod /= a[j];
                j++;
                
            }
            max_no += (i-j+1);
        }
        return max_no;
 }
 int main()
 {
     int n,i;
     long long k;
     cin>>n >>k;
     vector<int>arr(n);
     for(int i=0; i<n; i++)
     {
         cin>>arr[i];
     }
     cout<<countSubArrayProductLessThanK(arr, n,k);
     return 0; 
 }