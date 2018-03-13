#ifndef _REMOTE_CONTROL_H
#define _REMOTE_CONTROL_H
#include <vector>

class Command;

class RemoteControl
{
    public:
        RemoteControl();
        void setCommand(int slot, Command* oncmd, Command* offcmd);
        void OnButtonWasPressed(int slot);
        void OffButtonWasPressed(int slot);
    private:
        std::vector<Command *> vec_oncmds;
        std::vector<Command *> vec_offcmds;
};


#endif
