#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct NativeSizeChangerSettings : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "NativeSizeChangerSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float MinAllowedSize = 0.1f;
        static constexpr float MaxAllowedSize = 10.0f;
        float GetActivationTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_ActivationTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetActivationTime(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ActivationTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Vector3 GetWorldPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_WorldPosition"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetWorldPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_WorldPosition"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetActivationTime_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("activationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetExpireAfterSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("ExpireAfterSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetExpireInWater() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ExpireInWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetExpireOnDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("ExpireOnDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetExpireOnRoomJoin() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ExpireOnRoomJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayerSizeScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("playerSizeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetWorldPosition_f() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("worldPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivationTime_fs(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("activationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExpireAfterSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ExpireAfterSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExpireInWater(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ExpireInWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExpireOnDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ExpireOnDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExpireOnRoomJoin(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ExpireOnRoomJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerSizeScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playerSizeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWorldPosition_fs(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("worldPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float get_ActivationTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_ActivationTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_WorldPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_WorldPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_ActivationTime(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ActivationTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_WorldPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_WorldPosition"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
