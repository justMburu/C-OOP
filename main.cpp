#include <iostream>

using namespace std;
class Rectangle{

// What we are doing here with keyword private is encapsulation/data hiding
private:
    int lenth;
    int width;

// Here we are exposing the functions only while data is not accessible outside the class scope
public:
    // With the functions setLength, setWidth, getLength and getWidth, we are giving access to the data variables
    void setLength(int l){
       // We are checking validity of the data provided
        if (l >= 0)
            lenth = l;
        else
           lenth = 1;
    }
    void setWidth (int w){
        if (w >= 0)
            width = w;
        else
           width = 1;
    }

    int getLenth (){return lenth;}
    int getWidth (){return width;}

    // The two functions area and perimeter are the facilitators
    int area(){
    return lenth * width;
    }

    int perimeter() {
    return 2*(lenth + width);
    }
};

int main()
{
    cout << "Hello world!" << endl;

    // We are creating objects
    Rectangle r1, r2, r3;

    // Here we are accessing class member functions using the '.' operator
    r1.setLength(10);
    r1.setWidth(20);

    r2.setLength(56);
    r2.setWidth(98);

    r3.setLength(64);
    r3.setWidth(31);

    cout << "Area for R1 is: " << r1.area() << " => Area for R2 is: " << r2.area() << " => Area for R3 is: " << r3.area() << endl;
    cout << "Perimeter for R1 is: " << r1.perimeter() << " => Perimeter for R2 is: " << r2.perimeter() << " => Perimeter for R3 is: " << r3.perimeter() << endl;

    cout << "Length for R1 is: " << r1.getLenth() << " and width for R1 is: " << r1.getWidth() << endl;

    // This kind of pointer is created in the stack memory
    Rectangle *p;

    p = &r1;

    p -> setLength(98);
    p -> setWidth(33);

    cout << "Area for pointer is: " << p -> area() << " and perimeter for pointer is: " << p -> perimeter() << endl;
    cout << "Value of length is: " << p -> getLenth() << " and value of width is: " << p -> getWidth() << endl;

    // Here we create the object in heap memory
    Rectangle *q = new Rectangle;

    q -> setLength (21);
    q -> setWidth (47);

    cout << "The area is: " << q -> area() << " and perimeter is: " << q -> perimeter() << endl;

    return 0;
}
