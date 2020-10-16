//https://informatics.msk.ru/mod/statements/view.php?id=206#1

#include <bits/stdc++.h> 
#include <vector>
#include <map>

using namespace std;

int main(){
	map<int,queue<string>> list;
	int num;
	string s;
	while (cin >> num >> s) list[num].push(s);

	for (auto x: list){
		while(!x.second.empty()){
			cout<<x.first<<" "<<x.second.front()<<endl;
			x.second.pop();
		}
	}
}
