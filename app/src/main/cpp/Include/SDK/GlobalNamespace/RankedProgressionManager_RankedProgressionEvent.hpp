#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RankedProgressionManager_ERankedProgressionEventType.hpp"

namespace GlobalNamespace {
    struct RankedProgressionManager_RankedProgressionEvent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RankedProgressionManager").GetInnerClass("RankedProgressionEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDelta() {
            static BNM::Field<float> _field = GetClass().GetField(O("delta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType GetEvtType() {
            static BNM::Field<::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType> _field = GetClass().GetField(O("evtType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLeftName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("leftName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxVal() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxVal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinVal() {
            static BNM::Field<float> _field = GetClass().GetField(O("minVal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Sprite* GetNewTierIcon() {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("newTierIcon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNewTierName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("newTierName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Sprite* GetProgressIconLeft() {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("progressIconLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Sprite* GetProgressIconRight() {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("progressIconRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRightName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("rightName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDelta(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("delta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEvtType(::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType value) {
            static BNM::Field<::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType> _field = GetClass().GetField(O("evtType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("leftName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxVal(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxVal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinVal(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minVal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewTierIcon(::Sprite* value) {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("newTierIcon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewTierName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("newTierName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgressIconLeft(::Sprite* value) {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("progressIconLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgressIconRight(::Sprite* value) {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("progressIconRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("rightName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
