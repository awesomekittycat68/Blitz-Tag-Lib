#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Oculus_Platform/AchievementType.hpp"

namespace Oculus_Platform_Models {
    struct AchievementDefinition : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "AchievementDefinition");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        uint32_t GetBitfieldLength() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("BitfieldLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint64_t GetTarget() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("Target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform::AchievementType GetType_f() {
            static BNM::Field<::Oculus_Platform::AchievementType> _field = GetClass().GetField(O("Type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
