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
class Stack{
	int size,Top;
	char st[10];
	public:
	    Stack(){
	    	size=0;
	    	Top=-1;
	    }
	   void push(char s){
	   	  st[++Top]=s;
	   } 
	   char top(){
	   	 char x=st[Top];
	   	 return x;
	   }
	   char pop(){
	   	  char x=st[Top];
	   	  Top--;
	   	  return x;
	   }
	   bool empty(){
	   	  if(Top==-1) return true;
	   	  else return false;
	   }
	   bool full(){
	   	  if(Top==size-1) return true;
	   	  else return false;
	   }
};
signed main() {
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
    Stack st;
    string s; cin>>s;
    for(int i=0;i<s.length();i++){
    	if(st.empty()) st.push(s[i]);
    	else if((s[i]==')' and st.top()=='(') or (s[i]=='}' and st.top()=='{')
    	or (s[i]==']' and st.top()=='[')) st.pop();
    	else st.push(s[i]);
    }
if(st.empty()) cout<<"balanced";
else cout<<"not";
   
    cout<<endl;
}
return 0;    
}
