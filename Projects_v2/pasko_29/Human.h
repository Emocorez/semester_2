#include <string>
#include <iostream>
#include "List.h"
#include "WorkPlace.h"

using namespace std;

class Human {
protected:
    int weight;
    int height;
    string name;
    int hourlyWage;

public:

    List<WorkPlace>* workPlaces;

    // Constructor
    Human() 
    {
        weight = 0;
        height = 0;
        hourlyWage = 0;
        name = "No name yet";
        workPlaces = new List<WorkPlace>();
    }

    // Constructor with parameters
    Human(int setWeight, int setHeight, string setName)
    {
        weight = setWeight;
        height = setHeight;
        hourlyWage = 0;
        name = setName;
        workPlaces = new List<WorkPlace>();
    }

    //  Constructor with parameters
    Human(int setWeight, int setHeight, string setName, List<WorkPlace>* setPlaces)
    {
        weight = setWeight;
        height = setHeight;
        hourlyWage = 0;
        name = setName;
        workPlaces = setPlaces;
    }

    //  Copy constructor
    Human(Human &human)
    : weight(human.weight), height(human.height)
    {
        hourlyWage = 0;
    }

    // Destructor
    ~Human() 
    {
        //Memory cleaning: delete ...
    }    

    // Geter (declaration)
    int getHourlyWage();

    // Setter (declaration)
    void setHourlyWage(int hoursToSet);

    void work();

    void addWorkPlace(WorkPlace* place);

    void printWorkPlaces();

    // Output operator overload (declaration)
    friend ostream& operator<< (ostream& out, const Human& human);
    
    // Input operator overload (declaration)
    friend istream& operator>> (std::istream& in, Human& human);
};
