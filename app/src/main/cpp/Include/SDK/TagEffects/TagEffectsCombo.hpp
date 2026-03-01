#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace TagEffects {
    struct TagEffectsCombo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("TagEffects", "TagEffectsCombo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::TagEffects::TagEffectPack* GetInputA() {
            static BNM::Field<::TagEffects::TagEffectPack*> _field = GetClass().GetField(O("inputA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TagEffects::TagEffectPack* GetInputB() {
            static BNM::Field<::TagEffects::TagEffectPack*> _field = GetClass().GetField(O("inputB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInputA(::TagEffects::TagEffectPack* value) {
            static BNM::Field<::TagEffects::TagEffectPack*> _field = GetClass().GetField(O("inputA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputB(::TagEffects::TagEffectPack* value) {
            static BNM::Field<::TagEffects::TagEffectPack*> _field = GetClass().GetField(O("inputB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        bool Equals_1(TP0 obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
