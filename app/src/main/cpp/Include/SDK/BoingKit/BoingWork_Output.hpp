#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BoingManager_UpdateMode.hpp"
#include "QuaternionSpring.hpp"
#include "Vector3Spring.hpp"

namespace BoingKit {
    struct BoingWork_Output : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BoingWork").GetInnerClass("Output");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetInstanceID() {
            static BNM::Field<int> _field = GetClass().GetField(O("InstanceID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMPadding0() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_padding0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMPadding1() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_padding1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMPadding2() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_padding2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::Vector3Spring GetPositionSpring() {
            static BNM::Field<::BoingKit::Vector3Spring> _field = GetClass().GetField(O("PositionSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::QuaternionSpring GetRotationSpring() {
            static BNM::Field<::BoingKit::QuaternionSpring> _field = GetClass().GetField(O("RotationSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::Vector3Spring GetScaleSpring() {
            static BNM::Field<::BoingKit::Vector3Spring> _field = GetClass().GetField(O("ScaleSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetStride() {
            static BNM::Field<int> _field = GetClass().GetField(O("Stride"));
            return _field.Get();
        }
        void SetInstanceID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("InstanceID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPadding0(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_padding0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPadding1(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_padding1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPadding2(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_padding2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionSpring(::BoingKit::Vector3Spring value) {
            static BNM::Field<::BoingKit::Vector3Spring> _field = GetClass().GetField(O("PositionSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationSpring(::BoingKit::QuaternionSpring value) {
            static BNM::Field<::BoingKit::QuaternionSpring> _field = GetClass().GetField(O("RotationSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleSpring(::BoingKit::Vector3Spring value) {
            static BNM::Field<::BoingKit::Vector3Spring> _field = GetClass().GetField(O("ScaleSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void GatherOutput(::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingBehavior*>* behaviorMap, ::BoingKit::BoingManager_UpdateMode updateMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GatherOutput"), {"behaviorMap", "updateMode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(behaviorMap, updateMode);
        }
        void GatherOutput(::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactor*>* reactorMap, ::BoingKit::BoingManager_UpdateMode updateMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GatherOutput"), {"reactorMap", "updateMode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reactorMap, updateMode);
        }
        void SuppressWarnings() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SuppressWarnings"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
