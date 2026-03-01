#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct NexusManager_GetMembersRequest : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "NexusManager").GetInnerClass("GetMembersRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetPage() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_page"));
            return _method.Call();
        }
        void SetPage(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_page"));
            _method.Call(value);
        }
        int GetPageSize() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_pageSize"));
            return _method.Call();
        }
        void SetPageSize(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_pageSize"));
            _method.Call(value);
        }
        int get_page() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_page"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_pageSize() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_pageSize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_page(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_page"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_pageSize(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_pageSize"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
