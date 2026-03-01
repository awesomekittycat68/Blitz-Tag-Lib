#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct GraphNode$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GraphNode`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetChildCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ChildCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        T GetValue() {
            static BNM::Method<T> _method = GetClass().GetMethod(O("get_Value"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetValue(T value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Value"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int get_ChildCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ChildCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        T get_Value() {
            static BNM::Method<T> _m = GetClass().GetMethod(O("get_Value"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetGraphDepth() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetGraphDepth"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetNodeDepth() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNodeDepth"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetSubtreeWidth(int depthLimit) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetSubtreeWidth"), {"depthLimit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(depthLimit);
        }
        void set_Value(T value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Value"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void* TraverseBreadthFirst() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TraverseBreadthFirst"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* TraverseBreadthFirstDistinct() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TraverseBreadthFirstDistinct"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* TraversePreOrder() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TraversePreOrder"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        void* TraversePreOrderDistinct(TP0 visited) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TraversePreOrderDistinct"), {"visited"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(visited);
        }
    };
}
