#include "TQueue.h"
#include <conio.h>
using namespace std;
int main() {
	try {
		int s, val;
		TQueue<int> q(4);
		while (true) {
			cout << "1 - add, 0 - remove" << endl;
			cin >> s;
			if (s) {
				cout << "enter a number: ";
				cin >> val;
				q.Push(val);
			}
			else
				q.Pop();
			cout << q << "CurSize = " << q.GetCurSize() << endl;
		}
	}
	catch (int er) {
		cout << "oof: " << er;
	}
	_getch();
	return 0;
}