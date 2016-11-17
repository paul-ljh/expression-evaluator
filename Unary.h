#ifndef PAUL_U
#define PAUL_U

#include <string>
#include "Expression.h"

class Unary : public Expression {
    std::string uop;
    Expression *exp1;
public:
    Unary(std::string uop, Expression *exp1);
    ~Unary();
    void prettyprint() override;
    int evaluate() override;
    void set(std::string val, int num1) override;
    void unset(std::string val) override;
};

#endif
