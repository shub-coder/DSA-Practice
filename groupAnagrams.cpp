//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
       
        map<string, vector<string>>mv;
        vector<vector<string>>v;
        string word;
        for(int i=0; i<string_list.size(); i++)
        {
            word = string_list[i];
            sort(word.begin(), word.end());
            mv[word].push_back(string_list[i]);
        }
        for(auto i: mv)
        {
            v.push_back(i.second);
        }
        return v;
    }
};
  