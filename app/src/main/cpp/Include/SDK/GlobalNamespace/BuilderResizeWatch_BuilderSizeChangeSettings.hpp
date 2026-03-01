#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct BuilderResizeWatch_BuilderSizeChangeSettings : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderResizeWatch").GetInnerClass("BuilderSizeChangeSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

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
    };
}
