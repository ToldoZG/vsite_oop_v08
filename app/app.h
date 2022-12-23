#pragma once
#include <iostream>
namespace vsite::oop::v8 
{
    class base_exception {
    public:
        virtual std::string error() const = 0;
        virtual ~base_exception() = default;
    };

    class not_number :public base_exception {
    public:
        std::string error() const override {
            return "not a number";
        }
    };

    class divide_zero :public base_exception {
    public:
        std::string error() const override {
            return "divide by zero";
        }
    };

    class not_operator : public base_exception {
    public:
        std::string error()  const override {
            return "invalid operation";
        }
    };

    int input_num(std::istream&);
    char input_op(std::istream&);
    double calc(int a, char c, int b);

}