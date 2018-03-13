#include "Light.h"
#include <iostream>

Light::Light()
{
    this->name = "Light";
}

Light::Light(std::string name)
{
    this->name = name;
}

void Light::on()
{
    std::cout << this->name << " is ON !" << std::endl;
}

void Light::off()
{
    std::cout << this->name << " is OFF !" << std::endl;
}


