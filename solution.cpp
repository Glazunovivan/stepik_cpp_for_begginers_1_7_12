//Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., 
//последний элемент переходит на место A[0]).

#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++) {
		int temp = a[i];
		a[i] = a[0];
		a[0] = temp;
	}
	for (auto now : a)
		cout << now << " ";
	return 0;
}