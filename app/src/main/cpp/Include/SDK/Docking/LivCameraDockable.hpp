#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Dockable.hpp"

namespace Docking {
    struct LivCameraDockable : ::Docking::Dockable {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Docking", "LivCameraDockable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Docking::LivCameraDock* GetLivDock() {
            static BNM::Field<::Docking::LivCameraDock*> _field = GetClass().GetField(O("livDock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLivDock(::Docking::LivCameraDock* value) {
            static BNM::Field<::Docking::LivCameraDock*> _field = GetClass().GetField(O("livDock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Dock() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dock"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
    };
}
