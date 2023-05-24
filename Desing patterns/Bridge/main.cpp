#include <iostream>


class Shape{
public:
    virtual void draw() = 0;
};

class Circle : public Shape{
public:
 void draw() override{
     std::cout<<"Dibujo de circulo"<<std::endl;
 }
};
class Triangle : public Shape {
public:
    void draw() override {
        std::cout << "Dibujo de triángulo" << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        std::cout << "Dibujo de cuadrado" << std::endl;
    }
};


class Painter{

protected:
    Shape *shape;

public:
    Painter(Shape *shape) : shape(shape) {}
    virtual void paintShape() = 0;
};

class ComicPainter: public Painter{

public:
    ComicPainter(Shape *shape): Painter(shape){
    }

    void paintShape() override{
        std::cout<<"Pintando en arte comic"<<std::endl;
        shape->draw();
    }

};

class RealisticPainter: public Painter{
public:
    RealisticPainter(Shape *shape): Painter(shape){
    }

    void paintShape() override{
        std::cout<<"Pintando en arte realista"<<std::endl;
        shape->draw();
    }
};



int main() {
    Shape* circle = new Circle();
    Shape* triangle = new Triangle();
    Shape* square = new Square();

    Painter* comicPainter = new ComicPainter(circle);
    comicPainter->paintShape();

    Painter* realisticPainter = new RealisticPainter(triangle);
    realisticPainter->paintShape();

    delete circle;
    delete triangle;
    delete square;
    delete comicPainter;
    delete realisticPainter;

    return 0;
}
