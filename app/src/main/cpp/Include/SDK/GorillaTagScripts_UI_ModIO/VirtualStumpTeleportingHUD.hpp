#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_UI_ModIO {
    struct VirtualStumpTeleportingHUD : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.UI.ModIO", "VirtualStumpTeleportingHUD");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* VIRT_STUMP_HUD_ENTERING_KEY = "VIRT_STUMP_HUD_ENTERING";
        static constexpr const char* VIRT_STUMP_HUD_LEAVING_KEY = "VIRT_STUMP_HUD_LEAVING";
        ::BNM::Structures::Mono::String* GetEnteringVirtualStumpString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("enteringVirtualStumpString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsEnteringVirtualStump() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isEnteringVirtualStump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastTextUpdateTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTextUpdateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLeavingVirtualStumpString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("leavingVirtualStumpString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxNumProgressDots() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxNumProgressDots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumProgressDots() {
            static BNM::Field<int> _field = GetClass().GetField(O("numProgressDots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetTeleportingStatusText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("teleportingStatusText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTextUpdateInterval() {
            static BNM::Field<float> _field = GetClass().GetField(O("textUpdateInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEnteringVirtualStumpString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("enteringVirtualStumpString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsEnteringVirtualStump(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isEnteringVirtualStump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTextUpdateTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTextUpdateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeavingVirtualStumpString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("leavingVirtualStumpString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxNumProgressDots(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxNumProgressDots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumProgressDots(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numProgressDots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleportingStatusText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("teleportingStatusText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextUpdateInterval(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("textUpdateInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void IncrementProgressDots() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementProgressDots"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Initialize(bool isEntering) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"), {"isEntering"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isEntering);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
