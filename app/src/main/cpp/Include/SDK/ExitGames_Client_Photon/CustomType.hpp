#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    struct CustomType : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "CustomType");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        uint8_t GetCode() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("Code"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::DeserializeMethod* GetDeserializeFunction() {
            static BNM::Field<::ExitGames_Client_Photon::DeserializeMethod*> _field = GetClass().GetField(O("DeserializeFunction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::DeserializeStreamMethod* GetDeserializeStreamFunction() {
            static BNM::Field<::ExitGames_Client_Photon::DeserializeStreamMethod*> _field = GetClass().GetField(O("DeserializeStreamFunction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::SerializeMethod* GetSerializeFunction() {
            static BNM::Field<::ExitGames_Client_Photon::SerializeMethod*> _field = GetClass().GetField(O("SerializeFunction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::SerializeStreamMethod* GetSerializeStreamFunction() {
            static BNM::Field<::ExitGames_Client_Photon::SerializeStreamMethod*> _field = GetClass().GetField(O("SerializeStreamFunction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::MonoType* GetType_f() {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("Type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
