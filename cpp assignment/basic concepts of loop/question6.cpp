//6. Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.
#include <iostream> 
#include <string> 

class Person { 
  private: 
    std::string name; 
    int age; 
    std::string country; 

  public:
    void setName(const std::string & n) { 
      name = n; 
    }

    void setAge(int a) { 
      age = a; 
    }

    void setCountry(const std::string & c) { 
      country = c; 
    }

    
    std::string getName() { 
      return name; 
    }

    int getAge() {
      return age; 
    }

    std::string getCountry() { 
      return country; 
    }
};

int main() {
  // Create a person object
  Person person;

  person.setName("helly vyas"); 
  person.setAge(20); 
  person.setCountry("India"); 

  std::cout << "Name: " << person.getName() << std::endl; 
  std::cout << "Age: " << person.getAge() << std::endl; 
  std::cout << "Country: " << person.getCountry() << std::endl; 

  return 0; 
}
