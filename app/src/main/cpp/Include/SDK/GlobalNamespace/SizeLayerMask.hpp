#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SizeLayerMask : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SizeLayerMask");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetMask() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Mask"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetAffectLayerA() {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAffectLayerB() {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAffectLayerC() {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAffectLayerD() {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerD"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAffectLayerA(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAffectLayerB(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAffectLayerC(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAffectLayerD(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerD"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int get_Mask() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Mask"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
