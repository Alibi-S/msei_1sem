//https://informatics.msk.ru/mod/statements/view.php?id=207&chapterid=58#1
#include <iostream> 
#include <vector>

using namespace std;

struct Queue {
    vector<int> nodes;
    
	void push(int num){
		nodes.push_back(num);
		//cout << "ok\n";
	}

	void pop(){
		cout<<nodes[0]<<endl;
		nodes.erase(nodes.begin());
	}

	void front(){
		cout<<nodes[0]<<endl;
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
	Queue st;
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
		else if (command == "front"){
		    if(st.size()>=1)
		        st.front();
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

