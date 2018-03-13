#include "RemoteControl.h"
#include "Command.h"

RemoteControl::RemoteControl()
{
    Command* nullcmd = new NullCommand();
    for(int i=0; i<7; i++)
    {
        vec_oncmds.push_back(nullcmd);
        vec_offcmds.push_back(nullcmd);
    }
}


void RemoteControl::setCommand(int slot, Command* oncmd, Command* offcmd)
{
    vec_oncmds[slot] = oncmd;
    vec_offcmds[slot] = offcmd;
}

void RemoteControl::OnButtonWasPressed(int slot)
{
    vec_oncmds[slot]->execute();
}

void RemoteControl::OffButtonWasPressed(int slot)
{
    vec_offcmds[slot]->execute();
}
