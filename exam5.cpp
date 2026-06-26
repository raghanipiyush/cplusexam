#include <iostream>
using namespace std;

class Shape
{
    public:
    virtual void area() = 0;
    virtual void draw() = 0;
};

class Circle : public Shape 
{
    float r;
    public:  
    Circle(float radius){     
	    r = radius;
    }
    void area(){
	    cout << "Circle Area = " << 3.14 * r * r << endl;
    }
    void draw(){
	    cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape
{
    float l, b;
    public:
    Rectangle(float length, float breadth){ 
	    l = length;
        b = breadth;
    }

    void area(){
	    cout << "Rectangle Area = " << l * b << endl;
    }
    void draw(){
	    cout << "Drawing Rectangle" << endl;  
    }
};

int main()
{
    Shape *s[2];

    Circle c(5);
    Rectangle r(4, 6);

    s[0] = &c;   
    s[1] = &r;

    for(int i = 0; i < 2; i++){
	    s[i]->area();
        s[i]->draw();
        cout << endl;
    }
}
/*output
Circle Area = 78.5
Drawing Circle

Rectangle Area = 24
Drawing Rectangle
*/