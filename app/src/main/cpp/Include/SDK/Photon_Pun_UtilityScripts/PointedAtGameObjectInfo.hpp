#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun_UtilityScripts {
    struct PointedAtGameObjectInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "PointedAtGameObjectInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetFocus() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("focus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::Photon_Pun_UtilityScripts::PointedAtGameObjectInfo* GetInstance() {
            static BNM::Field<::Photon_Pun_UtilityScripts::PointedAtGameObjectInfo*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        ::Text* GetText() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("text"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFocus(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("focus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::Photon_Pun_UtilityScripts::PointedAtGameObjectInfo* value) {
            static BNM::Field<::Photon_Pun_UtilityScripts::PointedAtGameObjectInfo*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        void SetText(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("text"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemoveFocus(::Photon_Pun::PhotonView* pv) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveFocus"), {"pv"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pv);
        }
        void SetFocus_1(::Photon_Pun::PhotonView* pv) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFocus"), {"pv"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pv);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
