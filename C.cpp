#include <iostream>
 
int min(int a, int b) {
  return (a > b) ? b : a;
}
 
int max(int a, int b) {
  return (a > b) ? a : b;
}
 
int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
    
  int n;
  std::cin >> n;
 
  for (int i = 0; i < n; i++) {
    int a, b, c;
    std::cin >> a >> b >> c;
    
    int summ = a + b + c;
    int mmin = min(min(a, b), c); 
    int mmax = max(max(a, b), c);
    int mid = summ - mmin - mmax;
    std::cout << mid << '\n';
    
    // Notation:
    // std::min(a, b, c) is incorrect syntax, but std::min({a, b, c}) is fully correct
  }
}
