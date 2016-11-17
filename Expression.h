#ifndef PAUL
#define PAUL

#include <string>

class Expression {
public:
    virtual ~Expression();
    virtual void set(std::string val, int num1) = 0;
    virtual void unset(std::string val) = 0;
    virtual void prettyprint() = 0;
    virtual int evaluate() = 0;
};

#endif

