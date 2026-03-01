#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking_Store {
    struct StoreUpdater_$HandleClearCart$d__19 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking.Store", "StoreUpdater").GetInnerClass("<HandleClearCart>d__19");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaNetworking_Store::StoreUpdateEvent* GetUpdateEvent() {
            static BNM::Field<::GorillaNetworking_Store::StoreUpdateEvent*> _field = GetClass().GetField(O("updateEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetUpdateEvent(::GorillaNetworking_Store::StoreUpdateEvent* value) {
            static BNM::Field<::GorillaNetworking_Store::StoreUpdateEvent*> _field = GetClass().GetField(O("updateEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool MoveNext() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MoveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
