#include "Stereo.h"
#include <iostream>

Stereo::Stereo()
{
    this->name = "Stereo";
}

Stereo::Stereo(std::string name)
{
    this->name = name;
}

void Stereo::on()
{
    std::cout << this->name << " is ON !" << std::endl;
}

void Stereo::off()
{
    std::cout << this->name << " is oFF !" << std::endl;
}

void Stereo::setCD()
{
    std::cout << this->name << " is set for CD input." << std::endl;
}

void Stereo::setVolume(int volume)
{
    std::cout << this->name <<  " volume set to " << volume << "." << std::endl;
}
