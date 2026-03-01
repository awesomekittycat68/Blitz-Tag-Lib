#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LckRawImageFillCanvas_ScaleType.hpp"

namespace GlobalNamespace {
    struct LckRawImageFillCanvas : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LckRawImageFillCanvas");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetRawImage() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_rawImage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LckRawImageFillCanvas_ScaleType GetScaleType() {
            static BNM::Field<::GlobalNamespace::LckRawImageFillCanvas_ScaleType> _field = GetClass().GetField(O("_scaleType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRawImage(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_rawImage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleType(::GlobalNamespace::LckRawImageFillCanvas_ScaleType value) {
            static BNM::Field<::GlobalNamespace::LckRawImageFillCanvas_ScaleType> _field = GetClass().GetField(O("_scaleType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateSizeDelta() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSizeDelta"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
