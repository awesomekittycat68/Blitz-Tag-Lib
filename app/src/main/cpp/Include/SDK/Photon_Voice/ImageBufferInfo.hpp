#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Flip.hpp"
#include "ImageBufferInfo_StrideSet.hpp"
#include "ImageFormat.hpp"
#include "Rotation.hpp"

namespace Photon_Voice {
    struct ImageBufferInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "ImageBufferInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Voice::Flip GetFlip() {
            static BNM::Method<::Photon_Voice::Flip> _method = GetClass().GetMethod(O("get_Flip"));
            return _method.Call();
        }
        void SetFlip(::Photon_Voice::Flip value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Flip"));
            _method.Call(value);
        }
        ::Photon_Voice::ImageFormat GetFormat() {
            static BNM::Method<::Photon_Voice::ImageFormat> _method = GetClass().GetMethod(O("get_Format"));
            return _method.Call();
        }
        int GetHeight() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Height"));
            return _method.Call();
        }
        ::Photon_Voice::Rotation GetRotation() {
            static BNM::Method<::Photon_Voice::Rotation> _method = GetClass().GetMethod(O("get_Rotation"));
            return _method.Call();
        }
        void SetRotation(::Photon_Voice::Rotation value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Rotation"));
            _method.Call(value);
        }
        ::Photon_Voice::ImageBufferInfo_StrideSet GetStride() {
            static BNM::Method<::Photon_Voice::ImageBufferInfo_StrideSet> _method = GetClass().GetMethod(O("get_Stride"));
            return _method.Call();
        }
        int GetWidth() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Width"));
            return _method.Call();
        }
        ::Photon_Voice::Flip get_Flip() {
            static BNM::Method<::Photon_Voice::Flip> _m = GetClass().GetMethod(O("get_Flip"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice::ImageFormat get_Format() {
            static BNM::Method<::Photon_Voice::ImageFormat> _m = GetClass().GetMethod(O("get_Format"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Height() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Height"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice::Rotation get_Rotation() {
            static BNM::Method<::Photon_Voice::Rotation> _m = GetClass().GetMethod(O("get_Rotation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice::ImageBufferInfo_StrideSet get_Stride() {
            static BNM::Method<::Photon_Voice::ImageBufferInfo_StrideSet> _m = GetClass().GetMethod(O("get_Stride"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Width() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Width"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_Flip(::Photon_Voice::Flip value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Flip"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Rotation(::Photon_Voice::Rotation value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Rotation"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
