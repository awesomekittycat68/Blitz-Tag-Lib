#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaGameModes/GameModeType.hpp"

namespace TagEffects {
    struct ModeTagEffect : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("TagEffects", "ModeTagEffect");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetBlockFistBumpOverride() {
            static BNM::Field<bool> _field = GetClass().GetField(O("blockFistBumpOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBlockHiveFiveOverride() {
            static BNM::Field<bool> _field = GetClass().GetField(O("blockHiveFiveOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBlockTagOverride() {
            static BNM::Field<bool> _field = GetClass().GetField(O("blockTagOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>* GetModes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("modes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetModesHash() {
            static BNM::Field<void*> _field = GetClass().GetField(O("modesHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TagEffects::TagEffectPack* GetTagEffect() {
            static BNM::Field<::TagEffects::TagEffectPack*> _field = GetClass().GetField(O("tagEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBlockFistBumpOverride(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("blockFistBumpOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlockHiveFiveOverride(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("blockHiveFiveOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlockTagOverride(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("blockTagOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModes(::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("modes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModesHash(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("modesHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagEffect(::TagEffects::TagEffectPack* value) {
            static BNM::Field<::TagEffects::TagEffectPack*> _field = GetClass().GetField(O("tagEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void* get_Modes() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Modes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
