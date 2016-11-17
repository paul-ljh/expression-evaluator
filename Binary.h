#ifndef PAUL_B
#define PAUL_B

#include <string>
#include "Expression.h"

class Binary : public Expression {
    std::string bop;
    Expression *exp1;
    Expression *exp2;
public:
    Binary(std::string bop, Expression *exp1, Expression *exp2);
    ~Binary();
    void prettyprint() override;
    int evaluate() override;
    void set(std::string val, int num1) override;
    void unset(std::string val) override;
};

#endif
