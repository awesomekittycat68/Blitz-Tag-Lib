#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct FoundAllocatorsMapped : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FoundAllocatorsMapped");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::ViewsAndAllocator*>* GetAllocators() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ViewsAndAllocator*>*> _field = GetClass().GetField(O("allocators"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::FoundAllocatorsMapped*>* GetSubGroups() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::FoundAllocatorsMapped*>*> _field = GetClass().GetField(O("subGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllocators(::BNM::Structures::Mono::List<::GlobalNamespace::ViewsAndAllocator*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ViewsAndAllocator*>*> _field = GetClass().GetField(O("allocators"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubGroups(::BNM::Structures::Mono::List<::GlobalNamespace::FoundAllocatorsMapped*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::FoundAllocatorsMapped*>*> _field = GetClass().GetField(O("subGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
