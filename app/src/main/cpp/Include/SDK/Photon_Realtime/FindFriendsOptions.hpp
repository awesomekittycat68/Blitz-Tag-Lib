#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    struct FindFriendsOptions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "FindFriendsOptions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetCreatedOnGs() {
            static BNM::Field<bool> _field = GetClass().GetField(O("CreatedOnGs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOpen() {
            static BNM::Field<bool> _field = GetClass().GetField(O("Open"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetVisible() {
            static BNM::Field<bool> _field = GetClass().GetField(O("Visible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCreatedOnGs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("CreatedOnGs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOpen(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("Open"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisible(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("Visible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int ToIntFlags() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ToIntFlags"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
