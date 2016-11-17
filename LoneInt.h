#ifndef PAUL_L
#define PAUL_L

#include "Expression.h"

class LoneInt: public Expression {
    int num;
public:
    LoneInt(int num);
    ~LoneInt();
    void prettyprint() override;
    int evaluate() override;
    void set(std::string val, int num1) override;
    void unset(std::string val) override;
};

#endif
