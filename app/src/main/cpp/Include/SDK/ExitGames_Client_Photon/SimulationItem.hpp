#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    struct SimulationItem : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "SimulationItem");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetDelay() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Delay"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDelay(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Delay"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetDelayedData() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("DelayedData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetStopw() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("stopw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTimeToExecute() {
            static BNM::Field<int> _field = GetClass().GetField(O("TimeToExecute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDelayedData(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("DelayedData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeToExecute(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("TimeToExecute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int get_Delay() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Delay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_Delay(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Delay"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
