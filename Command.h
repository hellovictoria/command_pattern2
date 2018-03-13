#ifndef _COMMAND_H
#define _COMMAND_H

class Light;
class Stereo;

class Command
{
    public:
        virtual void execute()=0;
};

class NullCommand : public Command
{
    public:
        virtual void execute();
};

class LightOnCommand : public Command
{
    public:
        LightOnCommand(Light* light);
        virtual void execute();
    private:
        Light* light;
};

class LightOffCommand : public Command
{
    public:
        LightOffCommand(Light* light);
        virtual void execute();
    private:
        Light* light;
};

class StereoOnWithCDCommand : public Command
{
    public:
        StereoOnWithCDCommand(Stereo* stereo);
        virtual void execute();
    private:
        Stereo* stereo;
};

class StereoOffCommand : public Command
{
    public:
        StereoOffCommand(Stereo* stereo);
        virtual void execute();
    private:
        Stereo* stereo;
};

#endif
