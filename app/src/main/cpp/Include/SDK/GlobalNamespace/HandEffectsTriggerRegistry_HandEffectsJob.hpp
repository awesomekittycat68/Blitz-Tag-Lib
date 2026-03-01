#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct HandEffectsTriggerRegistry_HandEffectsJob : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HandEffectsTriggerRegistry").GetInnerClass("HandEffectsJob");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetActualListSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("actualListSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCloseOutput() {
            static BNM::Field<void*> _field = GetClass().GetField(O("closeOutput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPositionInput() {
            static BNM::Field<void*> _field = GetClass().GetField(O("positionInput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActualListSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("actualListSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCloseOutput(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("closeOutput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionInput(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("positionInput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Execute(int i) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Execute"), {"i"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(i);
        }
    };
}
