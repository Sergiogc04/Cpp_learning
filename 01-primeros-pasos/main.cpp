#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> plagas{"weevil", "snail", "cutworm", "grasshopper"};

    std::sort(plagas.begin(), plagas.end(),
              [](const std::string& a, const std::string& b) {
                  return a.size() < b.size();
              });

    for (const auto& p : plagas) {
        std::cout << p << " (" << p.size() << " chars)\n";
    }
    
}
