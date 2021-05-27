#include <iostream>

namespace {

    template<class integer_t>
    void print_binary(const integer_t& number_in) {
        for (short int i = sizeof(integer_t) * 8 - 1; i >= 0; --i) {
            std::cout << ((number_in >> i) & 1);
        }
    }

    template<class integer_t>
    void flip_bit(integer_t& number_in, const short unsigned& bit) {
        number_in = number_in ^ (1 << bit - 1);
    }

}

int main() {
    int val_1 = 45;

    print_binary(val_1);
    std::cout << "  -  " << val_1 << '\n';
    std::cout << "\n\n";

    flip_bit(val_1, 10);
    print_binary(val_1);
    std::cout << "  -  " << val_1 << '\n';


    return 0;
}