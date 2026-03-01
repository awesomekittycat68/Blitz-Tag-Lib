#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CritterAppearance : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CritterAppearance");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetHatName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("hatName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHatName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("hatName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static int DataLength() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("DataLength"));
            return _m.Call();
        }
        static ::GlobalNamespace::CritterAppearance ReadFromPhotonStream(::Photon_Pun::PhotonStream* data) {
            static BNM::Method<::GlobalNamespace::CritterAppearance> _m = GetClass().GetMethod(O("ReadFromPhotonStream"), {"data"});
            return _m.Call(data);
        }
        static ::GlobalNamespace::CritterAppearance ReadFromRPCData(::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<::GlobalNamespace::CritterAppearance> _m = GetClass().GetMethod(O("ReadFromRPCData"), {"data"});
            return _m.Call(data);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool ValidateData(::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateData"), {"data"});
            return _m.Call(data);
        }
        ::BNM::Structures::Mono::Array<void*>* WriteToRPCData() {
            static BNM::Method<::BNM::Structures::Mono::Array<void*>*> _m = GetClass().GetMethod(O("WriteToRPCData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
