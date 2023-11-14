#include <iostream>

using namespace std;

int main() {
    // Create objects
33333333    square sq1, sq2, sq3;
    Rectangle rec1, rec2, rec3;
    Circle cir1, cir2, cir3;

    // Set values
    sq1.setSide(5);
    sq2.setSide(10);
    sq3.setSide(15);

    rec1.setLength(5);
    rec1.setWidth(10);
    rec2.setLength(10);
    rec2.setWidth(15);
    rec3.setLength(15);
    rec3.setWidth(20);

    cir1.setRadius(5.0);
    cir2.setRadius(10.0);
    cir3.setRadius(15.0);

    // Create picture
    Picture pic1, pic2, pic3;

    pic1.setSquare(sq1);
    pic1.setRectangle(rec1);
    pic1.setCircle(cir1);

    pic2.setSquare(sq2);
    pic2.setRectangle(rec2);
    pic2.setCircle(cir2);

    pic3.setSquare(sq3);
    pic3.setRectangle(rec3);
    pic3.setCircle(cir3);

    // Calculate areas
    int area1 = sq1.area() + rec1.area() + cir1.area();
    int area2 = sq2.area() + rec2.area() + cir2.area();
    int area3 = sq3.area() + rec3.area() + cir3.area();

    // Print areas
    cout << "Area of Picture 1: " << area1 << endl;
    cout << "Area of Picture 2: " << area2 << endl;
    cout << "Area of Picture 3: " << area3 << endl;

   return 0;
}
