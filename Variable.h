#ifndef PAUL_V
#define PAUL_V

#include "Expression.h"
#include <string>

class Variable: public Expression {
    int num;
    std::string val;
    bool str_set;
public:
    Variable(std::string val, bool str_set);
    ~Variable();
    void set(std::string val1, int num1) override;
    void unset(std::string val1) override;
    void prettyprint() override;
    int evaluate() override;
};

#endif
