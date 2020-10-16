//https://informatics.msk.ru/mod/statements/view.php?id=206&chapterid=50#1
#include <bits/stdc++.h>
#include <queue>
using namespace std;
int const N = 1e6;

int main() {
	queue<int> p1, p2;
	int num;

	for (int i = 1; i <= 5; i++){
		cin >> num;
		p1.push(num);
	}

	for (int i = 1; i <= 5; i++){
		cin >> num;
		p2.push(num);
	}


	for (int i = 1; i <= N; i++){
		int a = p1.front();
		p1.pop(); 
		int b = p2.front();
		p2.pop();

		if (a > b){
			if (a == 9 && b == 0){
				p2.push(a);
				p2.push(b);
			}
			else {
				p1.push(a);
				p1.push(b);
			}
		}

		else {
			if (b == 9 && a == 0){
				p1.push(a);
				p1.push(b);
			}
			else {
				p2.push(a);
				p2.push(b);
			}
		}


		if (p1.size() == 0){
			cout << "second " << i;
			break;
		}
		if (p2.size() == 0){
			cout << "first " << i;
			break;
		}
		if (i == N){
			cout << "botva";
			break;
		}
	}
}
