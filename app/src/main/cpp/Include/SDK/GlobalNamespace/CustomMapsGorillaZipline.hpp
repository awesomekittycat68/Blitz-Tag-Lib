#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BezierControlPointMode.hpp"
#include "../GorillaLocomotion_Gameplay/GorillaZipline.hpp"

namespace GlobalNamespace {
    struct CustomMapsGorillaZipline : ::GorillaLocomotion_Gameplay::GorillaZipline {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapsGorillaZipline");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::BezierControlPointMode>* ConvertControlPointModes(::BNM::Structures::Mono::Array<void*>* refModes) {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::BezierControlPointMode>*> _m = GetClass().GetMethod(O("ConvertControlPointModes"), {"refModes"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(refModes);
        }
        bool GenerateZipline(::BNM::IL2CPP::Il2CppObject* splineRef) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GenerateZipline"), {"splineRef"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(splineRef);
        }
        void Init(::BNM::IL2CPP::Il2CppObject* ziplinePlaceholder) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"ziplinePlaceholder"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ziplinePlaceholder);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
