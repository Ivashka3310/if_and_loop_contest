#include <iostream>
 
int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
    
	int k, m, val, answer = 0, count_in_glass = 0;
	bool is_hole_blocked = false;
	std::cin >> k >> m;
 
	while (std::cin >> val) {
		if (!is_hole_blocked && val > k) {
			++count_in_glass;
		}
		else if (!is_hole_blocked && val == k) {
			is_hole_blocked = true;
		}
		else if (is_hole_blocked) {
			if (val > k) {
				++count_in_glass;
			}
			is_hole_blocked = false;
		}
 
		++answer;
		if (count_in_glass == m) {
			std::cout << answer << '\n';
			return 0;
		}
	}
}
