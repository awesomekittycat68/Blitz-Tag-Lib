#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct EnterPlayID : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "EnterPlayID");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsCurrent() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsCurrent"));
            return _method.Call();
        }
        static int GetCurrentID() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentID"));
            return _field.Get();
        }
        int GetId() {
            static BNM::Field<int> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetCurrentID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentID"));
            _field.Set(value);
        }
        void SetId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_IsCurrent() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsCurrent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::EnterPlayID GetCurrent() {
            static BNM::Method<::GlobalNamespace::EnterPlayID> _m = GetClass().GetMethod(O("GetCurrent"));
            return _m.Call();
        }
        static void NextID() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NextID"));
            _m.Call();
        }
    };
}
