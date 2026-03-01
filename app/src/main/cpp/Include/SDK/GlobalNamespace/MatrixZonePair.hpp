#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MatrixZonePair : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MatrixZonePair");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Matrix4x4 GetMatrix() {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("matrix"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetZoneIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("zoneIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMatrix(::BNM::Structures::Unity::Matrix4x4 value) {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("matrix"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("zoneIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
