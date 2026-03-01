#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SITechTreeUIPage_$$c__DisplayClass5_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SITechTreeUIPage").GetInnerClass("<>c__DisplayClass5_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetImageTarget() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("imageTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITechTreeStation* GetTechTreeStation() {
            static BNM::Field<::GlobalNamespace::SITechTreeStation*> _field = GetClass().GetField(O("techTreeStation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTextTarget() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("textTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetImageTarget(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("imageTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTechTreeStation(::GlobalNamespace::SITechTreeStation* value) {
            static BNM::Field<::GlobalNamespace::SITechTreeStation*> _field = GetClass().GetField(O("techTreeStation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextTarget(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("textTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
