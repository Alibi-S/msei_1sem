//https://informatics.msk.ru/mod/statements/view.php?id=207&chapterid=55#1

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

	int size(){
		return nodes.size();
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
		else if (command == "pop"){
		    if(st.size()>=1)
		        st.pop();
		    else
		        cout<<"error"<<endl;
		}
		else if (command == "back"){
		    if(st.size()>=1)
		        st.back();
		    else
		        cout<<"error"<<endl;
	    }
		else if (command == "size") 
		    cout<<st.size()<<endl;
		else if (command == "clear"){
		    st.clear();
		    cout<<"ok"<<endl;
		}
	}
}
