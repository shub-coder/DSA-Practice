#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}

string encode(string src)
{     
  //Your code here 
  map<char,int>mp;
  string s="";
  s +=src[0];
  int z=1;
  for(int i=1; i<src.size(); i++)
  {
      if(src[i]==src[i-1])
      {
          z++;
      }
      else
      {
          s += to_string(z);
          s += src[i];
          z=1;
      }
  }
  s += to_string(z);
  
  return s;
}     
 
