#pragma once
#include <iostream>
  
  
namespace Executor{
  
  
class Function{
public:
    virtual ~Function(){};
    virtual double operator()(double x) const = 0;
};


struct Result{
    double value;
    int valid;
    operator double() const;
};


Result secureRun(const Function &, const double x);



//end of Namespace
}



std::ostream & operator << (std::ostream & strm, const Executor::Result & result);

