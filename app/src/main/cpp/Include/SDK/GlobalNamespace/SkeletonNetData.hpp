#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Fusion_CodeGen/FixedStorage$3.hpp"
#include "../Fusion_CodeGen/FixedStorage$4.hpp"

namespace GlobalNamespace {
    struct SkeletonNetData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SkeletonNetData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetAngerPoint() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_AngerPoint"));
            return _method.Call();
        }
        void SetAngerPoint(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AngerPoint"));
            _method.Call(value);
        }
        int GetCurrentNode() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CurrentNode"));
            return _method.Call();
        }
        void SetCurrentNode(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentNode"));
            _method.Call(value);
        }
        int GetCurrentState() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CurrentState"));
            return _method.Call();
        }
        void SetCurrentState(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentState"));
            _method.Call(value);
        }
        int GetNextNode() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_NextNode"));
            return _method.Call();
        }
        void SetNextNode(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_NextNode"));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Vector3 GetPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_Position"));
            return _method.Call();
        }
        void SetPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Position"));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Quaternion GetRotation() {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _method = GetClass().GetMethod(O("get_Rotation"));
            return _method.Call();
        }
        void SetRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Rotation"));
            _method.Call(value);
        }
        int get_AngerPoint() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_AngerPoint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_CurrentNode() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CurrentNode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_CurrentState() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CurrentState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_NextNode() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_NextNode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_Position() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_Position"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Quaternion get_Rotation() {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("get_Rotation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_AngerPoint(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AngerPoint"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CurrentNode(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentNode"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CurrentState(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentState"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_NextNode(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_NextNode"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Position(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Position"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Rotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Rotation"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
