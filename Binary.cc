#include <iostream>
#include <string>
#include "Binary.h"

using namespace std;

void Binary::prettyprint() {
    cout << "(";
    exp1->prettyprint();
    cout << " " << bop << " ";
    exp2->prettyprint();
    cout << ")";
};

int Binary::evaluate() {
    if (bop == "+") {
        return exp1->evaluate() + exp2->evaluate();
    }

    else if (bop == "-") {
        return exp1->evaluate() - exp2->evaluate();
    }

    else if (bop == "*") {
        return exp1->evaluate() * exp2->evaluate();
    }

    else {
        return exp1->evaluate() / exp2->evaluate();
    }
};

Binary::Binary(string bop, Expression *exp1, Expression *exp2): bop{bop}, exp1{exp1}, exp2{exp2} {}

Binary::~Binary() {
    delete exp1;
    delete exp2;
}

void Binary::set(std::string val, int num1) {
    exp1->set(val, num1);
    exp2->set(val, num1);
}

void Binary::unset(std::string val) {
    exp1->unset(val);
    exp2->unset(val);
};




