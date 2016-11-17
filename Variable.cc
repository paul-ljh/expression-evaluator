#include <iostream>
#include "Variable.h"

using namespace std;

Variable::Variable(string val, bool str_set): val{val}, str_set{false} {}

Variable::~Variable() {};

void Variable::set(std::string val1, int num1) {
    if (val1 == val) {
        num = num1;
        str_set = true;
    }
}

void Variable::unset(std::string val1) {
    if (val1 == val) {
        str_set = false;
    }
};

void Variable::prettyprint() {
    if (str_set == true) {
        cout << num;
    }

    else {
        cout << val;
    }
};

int Variable::evaluate() {
    if (str_set == true) {
        return num;
    }

    else {
        throw val;
    }
};
