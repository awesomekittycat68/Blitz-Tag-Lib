#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GTRendererMatSlot : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTRendererMatSlot");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsValid() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isValid"));
            return _method.Call();
        }
        void SetIsValid(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_isValid"));
            _method.Call(value);
        }
        ::Renderer* GetRenderer() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("renderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSlot() {
            static BNM::Field<int> _field = GetClass().GetField(O("slot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRenderer(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("renderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlot(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("slot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_isValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_isValid(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_isValid"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool TryInitialize() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryInitialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
