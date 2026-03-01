#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DebugUtil_Style.hpp"

namespace CjLib {
    struct DrawBase : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("CjLib", "DrawBase");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetDepthTest() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DepthTest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetShadededColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("ShadededColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::CjLib::DebugUtil_Style GetStyle() {
            static BNM::Field<::CjLib::DebugUtil_Style> _field = GetClass().GetField(O("Style"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWireframe() {
            static BNM::Field<bool> _field = GetClass().GetField(O("Wireframe"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetWireframeColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("WireframeColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDepthTest(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DepthTest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShadededColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("ShadededColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStyle(::CjLib::DebugUtil_Style value) {
            static BNM::Field<::CjLib::DebugUtil_Style> _field = GetClass().GetField(O("Style"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWireframe(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("Wireframe"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWireframeColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("WireframeColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Draw(::BNM::Structures::Unity::Color color, ::CjLib::DebugUtil_Style style, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Draw"), {"color", "style", "depthTest"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(color, style, depthTest);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
