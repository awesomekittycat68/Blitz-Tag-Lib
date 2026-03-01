#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderResourceColor.hpp"
#include "BuilderResourceType.hpp"

namespace GlobalNamespace {
    struct BuilderResourceColors : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderResourceColors");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResourceColor>* GetColors() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResourceColor>*> _field = GetClass().GetField(O("colors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetColors(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResourceColor>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResourceColor>*> _field = GetClass().GetField(O("colors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Unity::Color GetColorForType(::GlobalNamespace::BuilderResourceType type) {
            static BNM::Method<::BNM::Structures::Unity::Color> _m = GetClass().GetMethod(O("GetColorForType"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(type);
        }
    };
}
