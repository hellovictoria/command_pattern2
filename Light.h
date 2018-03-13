#ifndef _LIGHT_H
#define _LIGHT_H
#include <string>

class Light
{
    public:
        Light();
        Light(std::string name);
        void on();
        void off();
    protected:
        std::string name;
};

#endif
