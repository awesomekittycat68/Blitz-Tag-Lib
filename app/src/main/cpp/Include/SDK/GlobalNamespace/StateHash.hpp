#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct StateHash : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "StateHash");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetLast() {
            static BNM::Field<int> _field = GetClass().GetField(O("last"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNext() {
            static BNM::Field<int> _field = GetClass().GetField(O("next"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLast(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("last"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNext(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("next"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool Changed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Changed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename T0>
        void Poll(T0 v0) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poll"), {"v0"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v0);
        }
        template <typename T1, typename T2>
        void Poll(T1 v1, T2 v2) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poll"), {"v1", "v2"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v1, v2);
        }
        template <typename T1, typename T2, typename T3>
        void Poll(T1 v1, T2 v2, T3 v3) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poll"), {"v1", "v2", "v3"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v1, v2, v3);
        }
        template <typename T1, typename T2, typename T3, typename T4>
        void Poll(T1 v1, T2 v2, T3 v3, T4 v4) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poll"), {"v1", "v2", "v3", "v4"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v1, v2, v3, v4);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5>
        void Poll(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poll"), {"v1", "v2", "v3", "v4", "v5"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v1, v2, v3, v4, v5);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
        void Poll(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poll"), {"v1", "v2", "v3", "v4", "v5", "v6"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v1, v2, v3, v4, v5, v6);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
        void Poll(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poll"), {"v1", "v2", "v3", "v4", "v5", "v6", "v7"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v1, v2, v3, v4, v5, v6, v7);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
        void Poll(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poll"), {"v1", "v2", "v3", "v4", "v5", "v6", "v7", "v8"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v1, v2, v3, v4, v5, v6, v7, v8);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
        void Poll(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poll"), {"v1", "v2", "v3", "v4", "v5", "v6", "v7", "v8", "v9"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v1, v2, v3, v4, v5, v6, v7, v8, v9);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
        void Poll(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poll"), {"v1", "v2", "v3", "v4", "v5", "v6", "v7", "v8", "v9", "v10"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
        void Poll(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poll"), {"v1", "v2", "v3", "v4", "v5", "v6", "v7", "v8", "v9", "v10", "v11"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
        void Poll(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poll"), {"v1", "v2", "v3", "v4", "v5", "v6", "v7", "v8", "v9", "v10", "v11", "v12"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
        void Poll(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poll"), {"v1", "v2", "v3", "v4", "v5", "v6", "v7", "v8", "v9", "v10", "v11", "v12", "v13"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
        void Poll(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poll"), {"v1", "v2", "v3", "v4", "v5", "v6", "v7", "v8", "v9", "v10", "v11", "v12", "v13", "v14"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
        void Poll(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poll"), {"v1", "v2", "v3", "v4", "v5", "v6", "v7", "v8", "v9", "v10", "v11", "v12", "v13", "v14", "v15"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
        void Poll(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Poll"), {"v1", "v2", "v3", "v4", "v5", "v6", "v7", "v8", "v9", "v10", "v11", "v12", "v13", "v14", "v15", "v16"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
