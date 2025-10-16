#include <vector>    // std::vector, begin(), end(), erase()
#include <iostream>  // std::cout (only if you want to print anything)
#include <algorithm> // (not strictly required here, but handy for many STL ops)

bool should_erase(int value)
{
    return value % 2 == 0;          // erase even numbers, for example
}

////////////////////////////////////////////////////////////////////////////////
// Loop variants with explicit iterator types
////////////////////////////////////////////////////////////////////////////////

void run_logic(std::vector<int> &vec) {
  for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
    if (should_erase(*it)) {
      vec.erase(it);
    }
  }
}

void parser(std::vector<int> &vec) {
  for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
    if (should_erase(*it)) {
      vec.erase(it);
    }
  }
}

void parser2(std::vector<int> &vec) {
  for(std::vector<int>::iterator it = vec.rbegin(); it != vec.rend(); ++it) {
    if (should_erase(*it)) {
      vec.erase(it);
    }
  }
}

void parser3(std::vector<int> &vec) {
  for(std::vector<int>::iterator it = vec.rbegin(); it != vec.rend(); it++) {
    if (should_erase(*it)) {
      vec.erase(it);
    }
  }
}

// Optional: a main() to illustrate usage
int main()
{
    std::vector<int> v{1, 2, 3, 4, 5, 6};

    run_logic(v);
    parser(v);
    parser2(v);
    parser3(v);

    for (int n : v) std::cout << n << ' ';
    std::cout << '\n';
}