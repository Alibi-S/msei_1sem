//https://informatics.msk.ru/mod/statements/view.php?id=206&chapterid=51#1

#include <iostream>
#include <stack>
using namespace std;
int main(){
	string s;
	cin>>s;
	stack<char> st;
	bool flag = true;
	for (int i=0; i<s.size(); i++){
		if (s[i]=='(' || s[i]=='[' || s[i]=='{'){
			st.push(s[i]);
		}
		if (s[i]==')'){
			if (st.size()==0 || st.top()!='('){
				flag = false;
				break;
			}
			else{
				st.pop();
			}
		} 
		if (s[i]==']'){
			if (st.size()==0 || st.top()!='['){
				flag = false;
				break;
			}
			else{
				st.pop();
			}
		}
		if (s[i]=='}'){
			if (st.size()==0 || st.top()!='{'){
				flag = false;
				break;
			}
			else{
				st.pop();
			}
		}
	}
	if (st.size()!=0){
		flag = false;
	}
	if (flag==false){
		cout<<"no";
	} 
	if (flag==true){
		cout<<"yes";
	}
}
