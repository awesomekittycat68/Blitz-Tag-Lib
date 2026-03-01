#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DebugUtil_Style.hpp"
#include "DrawBase.hpp"

namespace CjLib {
    struct DrawArrow : ::CjLib::DrawBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("CjLib", "DrawArrow");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetConeHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("ConeHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetConeRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("ConeRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLocalEndVector() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("LocalEndVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumSegments() {
            static BNM::Field<int> _field = GetClass().GetField(O("NumSegments"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStemThickness() {
            static BNM::Field<float> _field = GetClass().GetField(O("StemThickness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetConeHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ConeHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConeRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ConeRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalEndVector(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("LocalEndVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumSegments(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("NumSegments"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStemThickness(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("StemThickness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Draw(::BNM::Structures::Unity::Color color, ::CjLib::DebugUtil_Style style, bool depthTest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Draw"), {"color", "style", "depthTest"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(color, style, depthTest);
        }
        void OnValidate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnValidate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
