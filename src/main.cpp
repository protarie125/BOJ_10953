#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto t = int{};
	cin >> t;
	while (0 < (t--)) {
		auto s = string{};
		cin >> s;

		cout << (s[0] - '0') + (s[2] - '0') << '\n';
	}

	return 0;
}