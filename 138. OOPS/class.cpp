#include <iostream>
using namespace std;

class Animal
{
public:
    // state or property
    int age;
    int weight;
    string name;

    //& default constructor
    Animal(){
        this->weight = 0;
        this->age = 0;
        cout<<"default constructor"<<endl;
    }

    //& parameterised constructor
    Animal(int age){
        this->age = age;
        cout<<"parameterised constructor "<<age<<endl;
    }

    //& copy constructor
    Animal(Animal& obj){ //* object is pass as a parameter
        this->age = obj.age; 
        this->weight = obj.weight;
    }

    // behaviour or method
    void eat()
    {
        cout<<"Eating"<<endl;
    }

    void sleep()
    {
        cout<<"Sleeping"<<endl;
    }

    int setWeight(int weight)
    {
        this->weight = weight;
    }

    int getWeight()
    {
        return weight;
    }

};

int main()
{
    //^ use (.) in static memory location
    //^ use (->) in dynamic memory location
    //^ this is a pointer to a current object(current member function) or object jo parameter pass kiye hai usko (->) se denote karte hai


    //! static memory
    // Animal A1; //* static object
    // A1.age = 12;
    // cout << A1.age << endl;
    // A1.eat();

    // A1.setWeight(101);
    // cout << A1.getWeight() << endl;

    //& int *p = new int[5]; // first part store in stack while second part store in heap.
    //^ new - keyword is used to allocate memory in the heap
    // after creating space in heap memory we need to clean it manually.

    //! dynamic memory
    // Animal *A2 = new Animal; //* dynamic object

    // A2->eat();
    // A2->sleep();
    // A2->setWeight(110);
    // cout << A2->getWeight() << endl;


    Animal* A2 = new Animal(100);

    // object copy
    Animal A3(*A2); // A3 object hai jo A2 ko parameter ki tarah pass kiya hai.

    return 0;
}