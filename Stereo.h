#ifndef _STEREO_H
#define _STEREO_H
#include <string>

class Stereo
{
    public:
        Stereo();
        Stereo(std::string name);
        void on();
        void off();
        void setCD();
        void setVolume(int volume);
    private:
        std::string name;
};

#endif
