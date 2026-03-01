#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    template <typename T>
    struct Pool$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "Pool`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Count"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Func<T>* GetCreateFunction() {
            static BNM::Field<::BNM::Structures::Mono::Func<T>*> _field = GetClass().GetField(O("createFunction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPool() {
            static BNM::Field<void*> _field = GetClass().GetField(O("pool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<T>* GetResetFunction() {
            static BNM::Field<::BNM::Structures::Mono::Action<T>*> _field = GetClass().GetField(O("resetFunction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        T Acquire() {
            static BNM::Method<T> _m = GetClass().GetMethod(O("Acquire"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CreatePoolItems(int numItems) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreatePoolItems"), {"numItems"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(numItems);
        }
        int get_Count() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Count"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        T Pop() {
            static BNM::Method<T> _m = GetClass().GetMethod(O("Pop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Push(T item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Push"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(item);
        }
        void Release(T item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Release"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(item);
        }
    };
}
