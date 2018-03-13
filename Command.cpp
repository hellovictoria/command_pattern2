#include "Command.h"
#include "Light.h"
#include "Stereo.h"
#include <iostream>

void NullCommand :: execute()
{
    std::cout << "Null Command execute!" << std::endl;
}

LightOnCommand :: LightOnCommand(Light* light)
{
    this->light = light;
}

void LightOnCommand :: execute()
{
    (this->light)->on();
}

LightOffCommand :: LightOffCommand(Light* light)
{
    this->light = light;
}

void LightOffCommand :: execute()
{
    (this->light)->off();
}

StereoOnWithCDCommand :: StereoOnWithCDCommand(Stereo* stereo)
{
    this->stereo = stereo;
}

void StereoOnWithCDCommand :: execute()
{
    (this->stereo)->on();
    (this->stereo)->setCD();
    (this->stereo)->setVolume(11);
}

StereoOffCommand :: StereoOffCommand(Stereo* stereo)
{
    this->stereo = stereo;
}

void StereoOffCommand :: execute()
{
    (this->stereo)->off();
}
