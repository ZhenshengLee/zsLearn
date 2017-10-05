#pragma once

class zs
{
public:
    zs();
    zs(int input);
    ~zs();
    double getArea();
    

private:
    int radius=0;
    int diameter=0;
    double area=0.0;
    void calArea();
};
