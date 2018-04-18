#pragma once
#include <iostream>
  
  
namespace Executor{
  
  
class Function{
public:
    Function();
    virtual ~Function();
    virtual double operator()(double x) const = 0;
};


struct Result{
    double value;
    int valid;
    operator double() const{return value;}
};


Result secureRun(const Function &, const double x);



//end of Namespace
}
