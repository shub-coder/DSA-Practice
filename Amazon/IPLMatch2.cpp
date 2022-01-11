vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        int lar_ele;
        vector<int>v;
        //int n = arr.size();
        deque<int>d;
        for(int i=0; i<k; i++)
        {
           d.push_back(arr[i]);
        }
        lar_ele = *max_element(d.begin(), d.end());
        //cout<<lar_ele;
        v.push_back(lar_ele);
        for(int i=k; i<arr.size(); i++)
        {
            d.pop_front();
           // cout<<d.size()<<" ";
            d.push_back(arr[i]);
           // for(auto &c: d) cout<<c<<" ";
            lar_ele = *max_element(d.begin(), d.end());
            v.push_back(lar_ele);
        }
        return v;
    }