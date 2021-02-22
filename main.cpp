#include <QCoreApplication>
#include <QDebug>

#include <array>
using namespace std;

//Structs
/*enum Colors {red=123, green=321, blue=222};
//Precusor to "classes"
struct product
{
    int weight;
    double value;
    Colors color;
};*/

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //bool isOn = false;
    //qInfo() << "is it on " << isOn;
    //isOn = true;
    //int age = 26;

    //Constante
    //const double pi = 3.14;

    //Enum
    //enum Color {red, green, blue}; // si lo dejo asi sus valores son como un array (0,1,2)
    //enum Color {red=123, green=321, blue=222};
    //Color mycolor = Color::blue;
    //qInfo() << "Color: " << mycolor;

    //Struct
    /*product laptop;
    laptop.color=Colors::green;
    laptop.value=555.55;
    laptop.weight=3;
    qInfo() << "Weight: " << laptop.weight;
    qInfo() << "Value: " << laptop.value;
    qInfo() << "Color: " << laptop.color;
    //No se puede porque no hemos definido en el struct como sacaria esto
    //qInfo() << "Laptop: " << laptop;*/

    //Array
    /*int ages[4]={23,7,45,323};
    qInfo() << ages; //nos da la localizacion en memoria del array
    qInfo() << ages[1];
    ages[99] = 99; //Mal, salir del array da problemas
    qInfo() << ages[99]; // Puede salir bien o mal, asi que mejor no jugarsela
    //.---
    array<int,4> cars;
    cars[0]=21;
    cars[1]=22;
    cars[2]=23;
    cars[3]=24;
    qInfo() << cars[0];
    cars[99]=88; //Mal
    qInfo() << cars[99]; // No hacer esto
    // Size o SizeOf
    qInfo() << "Size: " << cars.size(); //Nos da cuantos elementos hay en el array
    qInfo() << "SizeOf: " << sizeof (cars); // Nos da el tamaño en bytes del array completo
    qInfo() << "Last: " << cars[cars.size()-1];*/

    return a.exec();
}
