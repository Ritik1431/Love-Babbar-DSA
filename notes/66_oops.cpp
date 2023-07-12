#include <bits/stdc++.h>
using namespace std;
class Human
{
    public:
    int height;
    int weight;
    int age;

    
    int setAge(int age)
    {
        this->age = age;
    }
    int setHeight(int height)
    {
        this->height = height;
    }
    int setWeight(int weight)
    {
        this->weight = weight;
    }

    int getAge()
    {
        cout<<this->age<<endl;;
    }
    int getHeight()
    {
        cout<<this->height<<endl;
    }
    int getWeight()
    {
        cout<<this->weight<<endl;

    }
};
class Male : public Human{
    public:
    string color;

    void sleep()
    {
        cout<<"Sleeping called"<<endl;
    }
};
int main()
{
    Human ritik;
    ritik.setAge(10);
    ritik.setHeight(15);
    ritik.setWeight(60);
    ritik.getAge();
    ritik.getHeight();
    ritik.getWeight();

    
    Male obj1;
    obj1.sleep();
    obj1.setAge(15);
    obj1.getAge();
    
    return 0;
}