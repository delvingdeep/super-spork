/*Goal: practice arithmetic operations in C++
**This program calculates the volumes of:
**a cube, sphere, cone.
**
**Cube Volume = side^3
**Sphere Volume = (4/3) * pi * radius^3
**Cone Volume = pi * radius^2 * (height/3)
**
**Also writes the values to the console.
*/

#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;

    float volCube, volSphere, volCone = 0;

    //computation
    volCube = pow(cubeSide, 3);

    volSphere = (4.0/3.0)*M_PI*pow(sphereRadius, 3);

    volCone = M_PI*pow(coneRadius,2)*(coneHeight/3);

    //printing value out on console
    cout<<"Volume of a Cube with sides "<<cubeSide<<" is "<<volCube<<endl;
    cout<<"Volume of a Sphere with radius "<<sphereRadius<<" is "<<volSphere<<endl;
    cout<<"Voulme of a Cone with radius "<<coneRadius<<" and Height "<<coneHeight<<" is "<<volCone<<endl;

    return 0;
}
