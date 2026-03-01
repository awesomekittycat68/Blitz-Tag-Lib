#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FixedStorage$10_$Data$e__FixedBuffer.hpp"

namespace Fusion_CodeGen {
    struct FixedStorage$10 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Fusion.CodeGen", "FixedStorage@10");
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
        int Get3() {
            static BNM::Field<int> _field = GetClass().GetField(O("_3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int Get4() {
            static BNM::Field<int> _field = GetClass().GetField(O("_4"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int Get5() {
            static BNM::Field<int> _field = GetClass().GetField(O("_5"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int Get6() {
            static BNM::Field<int> _field = GetClass().GetField(O("_6"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int Get7() {
            static BNM::Field<int> _field = GetClass().GetField(O("_7"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int Get8() {
            static BNM::Field<int> _field = GetClass().GetField(O("_8"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int Get9() {
            static BNM::Field<int> _field = GetClass().GetField(O("_9"));
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
        void Set3(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Set4(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_4"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Set5(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_5"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Set6(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_6"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Set7(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_7"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Set8(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_8"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Set9(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_9"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
