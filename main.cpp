#include "Command.h"
#include "Light.h"
#include "Stereo.h"
#include "RemoteControl.h"

int main()
{
    RemoteControl* remote = new RemoteControl();
    Light* livingRoomLight = new Light("Living Room Light");
    Light* kitchenLight = new Light("Kitchen Light");
    Stereo* livingRoomStereo = new Stereo("Living Room Stereo");

    LightOnCommand* livingRoomLightOn = new LightOnCommand(livingRoomLight);
    LightOffCommand* livingRoomLightOff = new LightOffCommand(livingRoomLight);

    LightOnCommand* kitchenLightOn = new LightOnCommand(kitchenLight);
    LightOffCommand* kitchenLightOff = new LightOffCommand(kitchenLight);

    StereoOnWithCDCommand* livingRoomStereoOn = new StereoOnWithCDCommand(livingRoomStereo);
    StereoOffCommand* livingRoomStereoOff = new StereoOffCommand(livingRoomStereo);

    remote->setCommand(0,livingRoomLightOn,livingRoomLightOff);
    remote->setCommand(1,kitchenLightOn,kitchenLightOff);
    remote->setCommand(2,livingRoomStereoOn,livingRoomStereoOff);

    remote->OnButtonWasPressed(0);
    remote->OffButtonWasPressed(0);
    remote->OnButtonWasPressed(1);
    remote->OffButtonWasPressed(1);
    remote->OnButtonWasPressed(2);
    remote->OffButtonWasPressed(2);
}
