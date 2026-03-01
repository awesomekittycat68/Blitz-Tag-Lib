#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BoingKit {
    struct Version : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "Version");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetMajorVersion() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_MajorVersion"));
            return _method.Call();
        }
        int GetMinorVersion() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_MinorVersion"));
            return _method.Call();
        }
        int GetRevision() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Revision"));
            return _method.Call();
        }
        static ::BoingKit::Version GetFirstTracked() {
            static BNM::Field<::BoingKit::Version> _field = GetClass().GetField(O("FirstTracked"));
            return _field.Get();
        }
        static ::BoingKit::Version GetInvalid() {
            static BNM::Field<::BoingKit::Version> _field = GetClass().GetField(O("Invalid"));
            return _field.Get();
        }
        static ::BoingKit::Version GetLastUntracked() {
            static BNM::Field<::BoingKit::Version> _field = GetClass().GetField(O("LastUntracked"));
            return _field.Get();
        }
        template <typename TP0 = void*>
        bool Equals_1(TP0 obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        bool Equals_1(::BoingKit::Version other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        int get_MajorVersion() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_MajorVersion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_MinorVersion() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_MinorVersion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Revision() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Revision"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
