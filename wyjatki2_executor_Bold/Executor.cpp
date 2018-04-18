#include <iostream>
#include "Executor.h"

namespace Executor{


Result secureRun(const Function &func, const double x ){
    Result result;
    result.valid = 0;

    try{
        double res = double(func(x));
        result.value = res;
        result.valid = 1;
    }
    catch(const char *string){
        std::cout << "Error" << string;
    }
    catch(const bool boolean){
        std::cout<< "Error Boolean of value";
        if(boolean)
            std::cout << "true";
        else
            std::cout << "false";

        std::cout << "thrown";

    }catch(...){
        std::cout << "UNKNOWN ERROR";
    }

    return result;
}



Result::operator double() const{
    if(valid == 1)
        return value;
    else
        throw "No value result as operation was unvalid";
}

}

std::ostream & operator << (std::ostream & strm, const Executor::Result & result){
	if(result.valid == 1)
		strm<<result.value;
	return strm;
}