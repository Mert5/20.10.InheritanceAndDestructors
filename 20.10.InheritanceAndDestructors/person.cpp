#include "person.h"
#include <iostream>

Person::Person(){
    std::cout << "Default constructor for Person called... " << std::endl;
}

Person::Person(std::string_view fullname, int age, std::string_view address) 
    : m_full_name{fullname}, m_age{age}, m_address{address}{    // initializer list
                                                            // person class forward information using initializer list
    std::cout << "Custom constructor for Person called... " << std::endl;
}

Person::Person(const Person& source)
    :   m_full_name(source.m_full_name), m_age(source.m_age), m_address(source.m_address){
        // all we need to do to have a copy constructor
    std::cout << "Custom copy constructor for Person called... " << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Person& person){
    out << "Person => Full name : " << person.get_full_name() << 
        ", Age : " << person.get_age() << ", Address : " << person.get_address() ;
    
    return out;
}


void Person::doit_something() const{
    std::cout << "A word" << std::endl;
}

Person::~Person(){ 
    std::cout << "Destructor for Person called... " << std::endl;
}

