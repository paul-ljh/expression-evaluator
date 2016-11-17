#include <iostream>
#include "LoneInt.h"

using namespace std;

void LoneInt::prettyprint() {
    cout << num;
};

int LoneInt::evaluate() {
    return num;
}

LoneInt::LoneInt(int num): num{num} {}

LoneInt::~LoneInt() {};

void LoneInt::set(string val, int num1) {
    return;
};

void LoneInt::unset(string val) {
    return;
};
