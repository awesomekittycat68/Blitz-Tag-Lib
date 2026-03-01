#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DebugUtil_Style.hpp"
#include "DrawBase.hpp"

namespace CjLib {
    struct DrawArc : ::CjLib::DrawBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("CjLib", "DrawArc");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetArcAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("ArcAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumSegments() {
            static BNM::Field<int> _field = GetClass().GetField(O("NumSegments"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("Radius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("StartAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetArcAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ArcAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumSegments(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("NumSegments"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("Radius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("StartAngle"));
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
