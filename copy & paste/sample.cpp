#include <iostream>
#include <set>

int main() {
    std::set<int> st = {10, 20, 25, 30, 40, 50};
    int lower = 15, upper = 35;

    auto it_lower = st.lower_bound(lower); // 15以上の最初の要素
    auto it_upper = st.lower_bound(upper); // 35以上の最初の要素

    std::cout << "Elements in the range [" << lower << ", " << upper << "):" << std::endl;
    for (auto it = it_lower; it != it_upper; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}