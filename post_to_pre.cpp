#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
#define ha "YES"
#define na "NO"
#define fo(i,a,b) for(int i=a;i<b;i++)
#define arrin int n;cin>>n;vector<int> a(n);for(int i=0;i<n;i++)cin>>a[i];
#define sumarr int sum=0;for(int i=0;i<n;i++)sum+=a[i];
#define forloop for(int i=0;i<n;i++)
#define allr(v) (v).rbegin(),(v).rend()
#define vi vector <int>
#define set_bits __builtin_popcountll
#define mp map<int,int>
#define pb push_back
#define po pop_back
#define int long long
#define endl "\n"
#define F first
#define S second
#define mod 1e9 + 7
#define inf 1e15
signed main() {
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  string t;
  cin>>t;
  stack<string>s;
  for(int i=0;i<t.length();i++){
  	if((t[i]>='a' && t[i]<='z') or (t[i]>='A' && t[i]<='Z')) {
  		string e(1,t[i]);
  		s.push(e);
  	}
  	else{
  		string s1=s.top();
  		s.pop();
  		string s2=s.top();
  		s.pop();
  		s.push(t[i]+s2+s1);
  	}
  }
  string pre="";
  while(!s.empty()){
  	pre+=s.top();
  	s.pop();
  }
  cout<<pre;
return 0;    
}
