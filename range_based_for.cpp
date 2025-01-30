#include <iostream>
#include <vector>

void cin_arr(std::vector<int>& a, int n) {
	for (int i = 0; i < n; ++i) {
        int v;
		std::cin >> v;
		a.push_back(v);
	}

}

void cout_arr(std::vector<int>& a) {
	for (int& v : a) {
		std::cout << v << ' ';
	}
	
}
int main() {
	std::vector<int> a;
    int n;
    std::cin >> n;
	cin_arr(a, n);
	cout_arr(a);
return 0;
}
