#include "libs.h"
#include "Vector.h"

using namespace std;

int main() {

	try {

		Vector V;

		while (true) {

			int cmd;
			cin >> cmd;

			if (cmd == 1) {
				int value;
				cin >> value;
				V.push_back(value);
				cout << "Size: " << V.size() << "\n";
				cout << V << "\n";
			}
			if (cmd == 2) {
				V.pop_back();
				cout << "Size: " << V.size() << "\n";
				cout << V << "\n";
			}
			if (cmd == 3) {
				cout << V.back() << '\n';
			}
			if (cmd == 4) {
				unsigned i;
				cin >> i;
				V.erase(i);
				cout << "Size: " << V.size() << "\n";
				cout << V << "\n";
			}
			if (cmd == 5) {
				unsigned i;
				int value;
				cin >> i >> value;
				V.insert(i, value);
				cout << "Size: " << V.size() << "\n";
				cout << V << "\n";
			}
			if (cmd == 6) {
				unsigned i;
				cin >> i;
				cout << V[i] << '\n';
			}
			if (cmd == 7) {
				unsigned i;
				int value;
				cin >> i >> value;
				V[i] = value;
				cout << "Size: " << V.size() << "\n";
				cout << V << "\n";
			}
			if (cmd == 8) {
				unsigned new_size;
				int value;
				cin >> new_size >> value;
				V.resize(new_size, value);
				cout << "Size: " << V.size() << "\n";
				cout << V << "\n";
			}
		}
	}
	catch (const char* Error) {
		cout << Error << "\n";
	}
	

	return 0;
}
