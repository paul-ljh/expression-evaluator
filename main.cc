#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Binary.h"
#include "Unary.h"
#include "LoneInt.h"
#include "Variable.h"
#include "Expression.h"

using namespace std;

// You will need to make changes to this file
int main () {
  string s;
  vector<Expression*> v;

  // Read and construct expression object
  while (cin >> s) {
    istringstream ss(s);
    int n;

    // lone integer
    if (ss >> n) {
      Expression *int_obj = new LoneInt(n);
      v.emplace_back(int_obj);
    }

    // unary operator
    else if (s == "NEG" || s == "ABS") {
      // save and then pop the last item
      Expression *last = v.back();
      v.pop_back();

      Expression *un_obj = new Unary (s, last);
      v.emplace_back(un_obj);
    }

    // binary operator
    else if (s == "+" || s == "-" || s == "*" || s == "/") {
      // save and then pop the last item
      Expression *last = v.back();
      v.pop_back();

      // save and then pop the second last item
      Expression *sec_last = v.back();
      v.pop_back();

      Expression *bi_obj = new Binary (s, sec_last, last);
      v.emplace_back(bi_obj);
    }

    // termination
    else if (s == "done") {
      break;
    }

    // variables
    else {
      Expression *var_obj = new Variable (s, false);
      v.emplace_back(var_obj);
    }
  }

  v[0]->prettyprint();
  cout << endl;

  // Command interpreter
  while (cin >> s) {
    if (s == "eval") {
      try {
        cout << v[0]->evaluate() << endl;
      }
      catch (string s) {
        cout << s << " has no value." << endl;
      }
    }

    else if (s == "set") {
      // var1 is the var name that I want to set
      cin >> s;
      string var1 = s;

      // value is the # that I want to set var1 as
      cin >> s;
      istringstream ss(s);
      int value;
      ss >> value;

      v[0]->set(var1, value);
    }

    else if (s == "unset") {
      // var1 is the var name that I want to unset
      cin >> s;
      string var1 = s;

      v[0]->unset(var1);
    }

    else if (s == "print") {
      v[0]->prettyprint();
      cout << endl;
    }
  }
  delete v[0];
}
