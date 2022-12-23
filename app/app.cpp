#include "app.h"

namespace vsite::oop::v8
{
int input_num(std::istream& is) {
    int n; is >> n;
    if (!is) throw not_number();
    return n;
}

char input_op(std::istream& is) {
    char c; is >> c;
    if (c != '+' && c != '-' && c != '*' && c != '/')
        throw not_operator();
    return c;
}

double calc(int a, char c, int b) {
    switch (c) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/':
        if (b == 0) throw divide_zero();
        return static_cast<double>(a) / b;
    }
}

}