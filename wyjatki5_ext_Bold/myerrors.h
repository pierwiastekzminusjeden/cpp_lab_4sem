#pragma once

#include <iostream>
#include <exception>
#include <string>


namespace myerrors{
      void handler()
    {
        try
        {
            throw;
        }
        catch(const myerrors::calc_error* err)
        {
            std::cout << "Wyjatek w: ";
            err->print();
            while(dynamic_cast<const myerrors::calc_error*>(err->m_error))
            {
                const myerrors::calc_error* presentErr = err;
                const std::runtime_error* newRun = err->m_error;
                delete presentErr;
                err = dynamic_cast <const calc_error*> (newRun);
                std::cout << "z powodu: ";
                err->print();
            }
            std::cout << "z powodu: " << err->m_error->what() << std::endl;
            delete err->m_error;
        }
    }

}

    class calc_error: public std::runtime_error{

    public:
        calc_error(const std::runtime_error * err, const std::string & name, const std::string file, const int line){
            m_name = name;
            m_file = file;
            m_lines = lines;
            m_erroror = err;
        }

        virtual ~calc_error() throw(){
            delete m_erroror;
        }    
    
        void print() const throw(){
            std::cout << m_name << " [w pliku: "<< m_file<<" w lini: "<<m_line<<"]"<<std::endl;
        };
    private:
        std::runtime_error *m_erroror;
        std::string m_name;
        std::string m_file
        int m_line;

    };
    void handler()
    {
        try
        {
            throw;
        }
        catch(const myerrors::calc_error* err)
        {
            std::cout << "Wyjatek w: ";
            err->print();
            while(dynamic_cast<const myerrors::calc_error*>(err->m_error))
            {
                const myerrors::calc_error* presentErr = err;
                const std::runtime_error* newRun = err->m_error;
                delete presentErr;
                err = dynamic_cast <const calc_error*> (newRun);
                std::cout << "z powodu: ";
                err->print();
            }
            std::cout << "z powodu: " << err->m_error->what() << std::endl;
            delete err->m_error;
        }
    }

}
