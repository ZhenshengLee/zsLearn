#pragma once

class helloWorld
{
public:
    helloWorld();
    helloWorld(int input);
    ~helloWorld();
    double getArea();
    

private:
    int radius=0;
    int diameter=0;
    double area=0.0;
    void calArea();
};
