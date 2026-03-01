#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace TagEffects {
    struct TagEffectPack : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("TagEffects", "TagEffectPack");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetFirstPerson() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("firstPerson"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFirstPersonParentEffect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("firstPersonParentEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFistBump() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fistBump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFistBumpParentEffect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("fistBumpParentEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetHighFive() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("highFive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHighFiveParentEffect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("highFiveParentEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShouldFaceTagger() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldFaceTagger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetThirdPerson() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("thirdPerson"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetThirdPersonParentEffect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("thirdPersonParentEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFirstPerson(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("firstPerson"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFirstPersonParentEffect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("firstPersonParentEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFistBump(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fistBump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFistBumpParentEffect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("fistBumpParentEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHighFive(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("highFive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHighFiveParentEffect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("highFiveParentEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldFaceTagger(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldFaceTagger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThirdPerson(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("thirdPerson"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThirdPersonParentEffect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("thirdPersonParentEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
