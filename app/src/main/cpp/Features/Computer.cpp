#include "../Externs.h"
#include "Computer.h"
#include <iomanip>
#include <sstream>
#include <iomanip>
#include <sstream>
#include <string>
#include "BNMIncludes.hpp"
#include "SDK/GorillaNetworking/GorillaComputer.hpp"
#include "SDK/GorillaNetworking/GorillaKeyboardBindings.hpp"
#include "SDK/GorillaNetworking/GorillaText.hpp"

namespace BlitzTag
{
    static void (*GorillaComputerOnConnectedToMasterStuff)(GorillaNetworking::GorillaComputer*);
    static void new_GorillaComputerOnConnectedToMasterStuff(GorillaNetworking::GorillaComputer* instance)
    {
        if (!instance->GetIsConnectedToMaster()) {
            OnAuthenticated();
        }

        GorillaComputerOnConnectedToMasterStuff(instance);
    }

    static void (*GorillaComputerInitializeAutoMuteState)(GorillaNetworking::GorillaComputer*);
    static void new_GorillaComputerInitializeAutoMuteState(GorillaNetworking::GorillaComputer* instance)
    {
        UpdateLongArms();
        GorillaComputerInitializeAutoMuteState(instance);
    }

    static void (*GorillaComputerAutomuteScreen)(GorillaNetworking::GorillaComputer*);
    static void new_GorillaComputerAutomuteScreen(GorillaNetworking::GorillaComputer* instance)
    {
        std::ostringstream ss;
        ss << std::setprecision(3) << std::noshowpoint << longArms;
        std::string text = "UPDATE YOUR ARM LENGTH. \nPRESS NUMBERS 1-9 TO CHANGE YOUR ARMS LENGTH. \n\nCURRENT VALUE: " + ss.str();
        instance->GetScreenText()->Set(BNM::CreateMonoString(text));
    }

    static void (*GorillaComputerProcessAutoMuteState)(GorillaNetworking::GorillaComputer*, GorillaNetworking::GorillaKeyboardBindings*);
    static void new_GorillaComputerProcessAutoMuteState(GorillaNetworking::GorillaComputer* instance, GorillaNetworking::GorillaKeyboardBindings buttonPressed)
    {
        switch (buttonPressed)
        {
            case GorillaNetworking::GorillaKeyboardBindings::one:   longArms = 1.0f; break;
            case GorillaNetworking::GorillaKeyboardBindings::two:   longArms = 1.025f; break;
            case GorillaNetworking::GorillaKeyboardBindings::three: longArms = 1.05f; break;
            case GorillaNetworking::GorillaKeyboardBindings::four:  longArms = 1.075f; break;
            case GorillaNetworking::GorillaKeyboardBindings::five:  longArms = 1.1f; break;
            case GorillaNetworking::GorillaKeyboardBindings::six:   longArms = 1.125f; break;
            case GorillaNetworking::GorillaKeyboardBindings::seven: longArms = 1.15f; break;
            case GorillaNetworking::GorillaKeyboardBindings::eight: longArms = 1.175f; break;
            case GorillaNetworking::GorillaKeyboardBindings::nine:  longArms = 1.2f; break;
            default: return;
        }

        UpdateLongArms();
    }

    static void (*GorillaComputerUpdateFunctionScreen)(GorillaNetworking::GorillaComputer*);
    static void new_GorillaComputerUpdateFunctionScreen(GorillaNetworking::GorillaComputer* instance)
    {
        std::string text = instance->GetOrderListForScreen(instance->get_currentState())->str();
        size_t pos = 0;
        while ((pos = text.find("AUTOMOD", pos)) != std::string::npos)
        {
            text.replace(pos, 7, "SETTINGS");
            pos += 8; // move past replaced text
        }

        instance->GetFunctionSelectText()->Set(BNM::CreateMonoString(text));
    }

    void Computer::Initialize()
    {
        BasicHook(GorillaNetworking::GorillaComputer::GetClass().GetMethod("OnConnectedToMasterStuff"), new_GorillaComputerOnConnectedToMasterStuff, GorillaComputerOnConnectedToMasterStuff);
        BasicHook(GorillaNetworking::GorillaComputer::GetClass().GetMethod("InitializeAutoMuteState"), new_GorillaComputerInitializeAutoMuteState, GorillaComputerInitializeAutoMuteState);
        BasicHook(GorillaNetworking::GorillaComputer::GetClass().GetMethod("AutomuteScreen"), new_GorillaComputerAutomuteScreen, GorillaComputerAutomuteScreen);
        BasicHook(GorillaNetworking::GorillaComputer::GetClass().GetMethod("ProcessAutoMuteState"), new_GorillaComputerProcessAutoMuteState, GorillaComputerProcessAutoMuteState);
        BasicHook(GorillaNetworking::GorillaComputer::GetClass().GetMethod("UpdateFunctionScreen"), new_GorillaComputerUpdateFunctionScreen, GorillaComputerUpdateFunctionScreen);
    }
}
