#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ImageBufferInfo.hpp"
#include "ImageBufferNative_PlaneSet.hpp"

namespace Photon_Voice {
    struct ImageBufferNative : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "ImageBufferNative");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Voice::ImageBufferInfo GetInfo() {
            static BNM::Field<::Photon_Voice::ImageBufferInfo> _field = GetClass().GetField(O("Info"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::ImageBufferNative_PlaneSet GetPlanes() {
            static BNM::Field<::Photon_Voice::ImageBufferNative_PlaneSet> _field = GetClass().GetField(O("Planes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInfo(::Photon_Voice::ImageBufferInfo value) {
            static BNM::Field<::Photon_Voice::ImageBufferInfo> _field = GetClass().GetField(O("Info"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlanes(::Photon_Voice::ImageBufferNative_PlaneSet value) {
            static BNM::Field<::Photon_Voice::ImageBufferNative_PlaneSet> _field = GetClass().GetField(O("Planes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Release() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Release"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
