//https://informatics.msk.ru/mod/statements/view.php?id=207&chapterid=61#1
#include <iostream> 
#include <vector>

using namespace std;

struct dQueue {
    vector<int> nodes;
    
	void push_backk(int num){
		nodes.push_back(num);
	}
	
	void push_frontt(int num){
		nodes.insert(nodes.begin(), num);
	}

	void pop_back(){
		cout<<nodes[nodes.size()-1]<<endl;
		nodes.erase(nodes.begin()+nodes.size()-1);
	}
	
	void pop_front(){
		cout<<nodes[0]<<endl;
		nodes.erase(nodes.begin());
	}

	void front(){
		cout<<nodes[0]<<endl;
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
	dQueue st;
	while(true){
		string command;
		cin >> command;
		if(command == "exit"){
		    cout<<"bye"<<endl;
		    break;
		}
		else if (command == "push_back"){ 
		    int num;
		    cin>>num;
		    st.push_backk(num);
		    cout<<"ok"<<endl;
		}
		else if (command == "push_front"){ 
		    int num;
		    cin>>num;
		    st.push_frontt(num);
		    cout<<"ok"<<endl;
		}
		else if (command == "pop_front"){
		    if(st.size()>=1)
		        st.pop_front();
		    else
		        cout<<"error"<<endl;
		}
		else if (command == "pop_back"){
		    if(st.size()>=1)
		        st.pop_back();
		    else
		        cout<<"error"<<endl;
		}
		else if (command == "front"){
		    if(st.size()>=1)
		        st.front();
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
