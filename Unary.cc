#include <iostream>
#include <string>
#include "Unary.h"

using namespace std;

Unary::Unary(std::string uop, Expression *exp1): uop{uop}, exp1{exp1} {}

Unary::~Unary() {
    delete exp1;
}

void Unary::prettyprint() {
    if (uop == "ABS") {
        cout << "|";
        exp1->prettyprint();
        cout << "|";
    }

    else {
        cout << "-";
        exp1->prettyprint();
    }
};

int Unary::evaluate() {
    if (uop == "ABS") {
        if (exp1->evaluate() <= 0) {
            return -1 * exp1->evaluate();
        }
        else {
            return exp1->evaluate();
        }
    }

    else {
        return -1 * exp1->evaluate();
    }
}

void Unary::set(std::string val, int num1) {
    exp1->set(val, num1);
}

void Unary::unset(std::string val) {
    exp1->unset(val);
};



