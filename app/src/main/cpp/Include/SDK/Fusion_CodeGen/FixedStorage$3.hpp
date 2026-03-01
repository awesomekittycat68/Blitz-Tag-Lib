#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FixedStorage$3_$Data$e__FixedBuffer.hpp"

namespace Fusion_CodeGen {
    struct FixedStorage$3 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Fusion.CodeGen", "FixedStorage@3");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int Get1() {
            static BNM::Field<int> _field = GetClass().GetField(O("_1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int Get2() {
            static BNM::Field<int> _field = GetClass().GetField(O("_2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void Set1(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Set2(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
