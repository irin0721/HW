#include <iostream>
#include <cmath>

using namespace std;

class Shape {
    public:
        virtual float area() = 0;
};

class Triangle : public Shape {
    private:
        float base;
        float height;
    public:
        Triangle(float b, float h) {
            base = b;
            height = h;
        }
        float area() {
            return (base * height) / 2;
        }
};

class Rectangle : public Shape {
    private:
        float length;
        float width;
    public:
        Rectangle(float l, float w) {
            length = l;
            width = w;
        }
        float area() {
            return length * width;
        }
};

class Circle : public Shape {
    private:
        float radius;
    public:
        Circle(float r) {
            radius = r;
        }
        float area() {
            return M_PI * pow(radius, 2);
        }
};

int main() {
    Shape *s;
    Triangle t(10, 5);
    Rectangle r(8, 6);
    Circle c(4);

    s = &t;
    cout << "Area of triangle: " << s->area() << endl;

    s = &r;
    cout << "Area of rectangle: " << s->area() << endl;

    s = &c;
    cout << "Area of circle: " << s->area() << endl;

    return 0;
}
