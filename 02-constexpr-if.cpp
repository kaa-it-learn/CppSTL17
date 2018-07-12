//
// Created by akruglov on 7/12/18.
//

#include <type_traits>
#include <vector>
#include <string>

template <typename T>
class addable
{
    T val;

public:
    addable(T v) : val{v} {}

    template <typename U>
    T add(U x) const {
        if constexpr (std::is_same_v<T, std::vector<U>>) {
            auto copy (val);
            for (auto& n : copy) {
                n += x;
            }
            return copy;
        } else {
            return val + x;
        }
    }
};

void constexpr_if_fun() {
    addable<int>{1}.add(2);
    addable<float>{1.0}.add(2);
    addable<std::string>{"aa"}.add("bb");

    std::vector<int> v {1, 2, 3};
    addable<std::vector<int>>{v}.add(10);

    std::vector<std::string> sv {"a", "b", "c"};
    addable<std::vector<std::string>>{sv}.add(std::string{"z"});
}