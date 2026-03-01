#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SizeLayerChangerGrabable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SizeLayerChangerGrabable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SizeLayerMask* GetGrabbedSizeLayerMask() {
            static BNM::Field<::GlobalNamespace::SizeLayerMask*> _field = GetClass().GetField(O("grabbedSizeLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGrabChangesSizeLayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("grabChangesSizeLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMomentaryGrabOnly() {
            static BNM::Field<bool> _field = GetClass().GetField(O("momentaryGrabOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReleaseChangesSizeLayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("releaseChangesSizeLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SizeLayerMask* GetReleasedSizeLayerMask() {
            static BNM::Field<::GlobalNamespace::SizeLayerMask*> _field = GetClass().GetField(O("releasedSizeLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGrabbedSizeLayerMask(::GlobalNamespace::SizeLayerMask* value) {
            static BNM::Field<::GlobalNamespace::SizeLayerMask*> _field = GetClass().GetField(O("grabbedSizeLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabChangesSizeLayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("grabChangesSizeLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMomentaryGrabOnly(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("momentaryGrabOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReleaseChangesSizeLayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("releaseChangesSizeLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReleasedSizeLayerMask(::GlobalNamespace::SizeLayerMask* value) {
            static BNM::Field<::GlobalNamespace::SizeLayerMask*> _field = GetClass().GetField(O("releasedSizeLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool MomentaryGrabOnly() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MomentaryGrabOnly"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
