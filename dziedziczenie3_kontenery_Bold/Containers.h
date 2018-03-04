#pragma once
// do wypisania nazw klas moanz uzyc ponizszej funkcji
#include <stdlib.h>
#include <cxxabi.h>
#include <string>
#include <iostream>

struct tool{
	static std::string rtti_real_name(const char* name)
	{
		int status;
		char *realname = abi::__cxa_demangle(name, 0, 0, &status);
		std::string n(realname);
		free(realname);
		
		return n;
	}
};


namespace oop {

class Object{

public:
    virtual std::string name() const {return "oop::Object";};
    virtual Object * get() { return this; };
    virtual ~Object(){};
};

class Container: public Object{

public:
    virtual std::string name() const = 0;

    virtual int size() const = 0;

    virtual bool empty() { return !size(); };

    virtual void insert( Object * obj){};
    
    virtual ~Container(){};
};

class SequenceContainer : public Container{

public:
    virtual void push_front( Object * obj) =0;

    virtual void push_back(Object * obj) = 0;
    
    virtual ~SequenceContainer(){};
};

class TreeContainer : public Container{

public:
   
    virtual std::string name() const = 0;
    virtual ~TreeContainer(){};
};

class SortedTreeContainer : public TreeContainer{

public:
  
  virtual ~SortedTreeContainer(){};
};

class HashTreeContainer: public TreeContainer{

public:
    virtual ~HashTreeContainer(){};
};

class List: public SequenceContainer{

public:
  virtual std::string name() const { return "oop::List"; };

  virtual void push_front(Object *obj){};

  virtual void push_back(Object *obj){};

  virtual int size() const { return 0; };
};

class Vector: public SequenceContainer{

public:
  virtual std::string name() const { return "oop::Vector"; };
  
  virtual void push_front(Object *obj){};

  virtual void push_back(Object *obj){};
  
  virtual int size() const { return 0; };
};

class SortedTree: public SortedTreeContainer{

public:
  virtual std::string name() const { return "oop::SortedTree"; };
  
  virtual int size() const { return 0; };
};

class SortedMultiTree: public SortedTreeContainer{

public:
  virtual std::string name() const { return "oop::SortedMultiTree"; };
  virtual int size() const { return 0; };
};

class HashTree : public HashTreeContainer{

  public:
    virtual std::string name() const { return "oop::HashTree"; };
    virtual int size() const { return 0; };
};

class HashMultiTree: public HashTreeContainer{

public:
  virtual std::string name() const { return "oop::HashMultiTree"; };
  virtual int size() const { return 0; };
};

}

