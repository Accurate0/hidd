#pragma once

enum HIDCommands
{
    // https://github.com/qmk/qmk_firmware/blob/master/quantum/via.c : 68
    // skip VIA straight to my handler :)
    VIA_LIGHTING_SET_VALUE = 0x07,
    VOLUME_COMMAND = 0x0,
    MUTE_COMMAND,
};
