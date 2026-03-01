#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct Bindings_LuauRoomState : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings").GetInnerClass("LuauRoomState");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetFPS() {
            static BNM::Field<float> _field = GetClass().GetField(O("FPS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsPrivate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsPrivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsQuest() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsQuest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRoomCode() {
            static BNM::Field<void*> _field = GetClass().GetField(O("RoomCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFPS(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("FPS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsPrivate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsPrivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsQuest(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsQuest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomCode(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("RoomCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
