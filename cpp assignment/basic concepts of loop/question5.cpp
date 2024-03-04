//5. Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter.
#include <iostream> 
class Rectangle { 
  private: 
    double length; 
    double width; 

  public:
   
    Rectangle(double len, double wid): length(len), width(wid) {
    
    double calculateArea() {
      return length * width; // Formula to calculate the area of a rectangle
    }

    double calculatePerimeter() {
      return 2 * (length + width); // Formula to calculate the perimeter of a rectangle
    }
};

int main() {
  double length, width;
  std::cout << "Input the length of the rectangle: ";
  std::cin >> length; 
  std::cout << "Input the width of the rectangle: ";
  std::cin >> width; 
  Rectangle rectangle(length, width);

  
  double area = rectangle.calculateArea(); 
  std::cout << "\nArea: " << area << std::endl; 

  double perimeter = rectangle.calculatePerimeter(); 
  std::cout << "Perimeter: " << perimeter << std::endl; 
  return 0;
}


