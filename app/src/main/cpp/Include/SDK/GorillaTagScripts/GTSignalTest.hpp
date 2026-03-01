#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GTSignalListener.hpp"

namespace GorillaTagScripts {
    struct GTSignalTest : ::GlobalNamespace::GTSignalListener {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "GTSignalTest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::GTSignalListener*>* GetListeners() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GTSignalListener*>*> _field = GetClass().GetField(O("listeners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetTarget() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::MeshRenderer*>* GetTargets() {
            static BNM::Field<::BNM::Structures::Mono::Array<::MeshRenderer*>*> _field = GetClass().GetField(O("targets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetListeners(::BNM::Structures::Mono::List<::GlobalNamespace::GTSignalListener*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GTSignalListener*>*> _field = GetClass().GetField(O("listeners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTarget(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargets(::BNM::Structures::Mono::Array<::MeshRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::MeshRenderer*>*> _field = GetClass().GetField(O("targets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
