#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PropHuntPools_Callbacks : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PropHuntPools_Callbacks");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::PropHuntPools_Callbacks* GetInstance() {
            static BNM::Field<::GlobalNamespace::PropHuntPools_Callbacks*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr const char* preLog = "PropHuntPools_Callbacks: ";
        static constexpr const char* preLogEd = "(editor only log) PropHuntPools_Callbacks: ";
        static constexpr const char* preLogBeta = "(beta only log) PropHuntPools_Callbacks: ";
        static constexpr const char* preErr = "ERROR!!!  PropHuntPools_Callbacks: ";
        static constexpr const char* preErrEd = "ERROR!!!  (editor only log) PropHuntPools_Callbacks: ";
        static constexpr const char* preErrBeta = "ERROR!!!  (beta only log) PropHuntPools_Callbacks: ";
        static bool GetIsListeningForZoneChanged() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isListeningForZoneChanged"));
            return _field.Get();
        }
        static ::GlobalNamespace::PropHuntPools_Callbacks* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::PropHuntPools_Callbacks*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static void SetIsListeningForZoneChanged(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isListeningForZoneChanged"));
            _field.Set(value);
        }
        void _OnZoneChanged(::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneData*>* zoneDatas) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_OnZoneChanged"), {"zoneDatas"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zoneDatas);
        }
        void ListenForZoneChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListenForZoneChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
