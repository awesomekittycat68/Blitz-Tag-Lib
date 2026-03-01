#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    struct OperationRequest : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "OperationRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        uint8_t GetOperationCode() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("OperationCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::ParameterDictionary* GetParameters() {
            static BNM::Field<::ExitGames_Client_Photon::ParameterDictionary*> _field = GetClass().GetField(O("Parameters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOperationCode(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("OperationCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParameters(::ExitGames_Client_Photon::ParameterDictionary* value) {
            static BNM::Field<::ExitGames_Client_Photon::ParameterDictionary*> _field = GetClass().GetField(O("Parameters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
