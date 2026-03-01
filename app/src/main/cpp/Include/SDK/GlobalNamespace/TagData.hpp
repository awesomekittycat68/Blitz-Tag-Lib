#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Fusion_CodeGen/FixedStorage$20.hpp"

namespace GlobalNamespace {
    struct TagData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TagData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCurrentItID() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_currentItID"));
            return _method.Call();
        }
        void SetCurrentItID(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_currentItID"));
            _method.Call(value);
        }
        void* GetIsCurrentlyTag() {
            static BNM::Field<void*> _field = GetClass().GetField(O("isCurrentlyTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsCurrentlyTag(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("isCurrentlyTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int get_currentItID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_currentItID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_infectedPlayerList() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_infectedPlayerList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_currentItID(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_currentItID"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
