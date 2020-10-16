//https://informatics.msk.ru/mod/statements/view.php?id=207#1

#include <iostream> 
#include <vector>

using namespace std;

struct Stack {
    vector<int> nodes;
    
	void push(int num){
		nodes.push_back(num);
	}

	void pop(){
		cout<<nodes[nodes.size()-1]<<endl;
		nodes.erase(nodes.begin()+nodes.size()-1);
	}

	void back(){
		cout<<nodes[nodes.size()-1]<<endl;
	}

	void size(){
		cout<<nodes.size()<<endl;
	}

	void clear(){
	    vector<int> temp;
	    nodes = temp;
	}
};

int main(){
	Stack st;
	while(true){
		string command;
		cin >> command;
		if(command == "exit"){
		    cout<<"bye"<<endl;
		    break;
		}
		else if (command == "push"){ 
		    int num;
		    cin>>num;
		    st.push(num);
		    cout<<"ok"<<endl;
		}
		else if (command == "pop") st.pop();
		else if (command == "back") st.back();
		else if (command == "size") st.size();
		else if (command == "clear"){
		    st.clear();
		    cout<<"ok"<<endl;
		}
	}
}


