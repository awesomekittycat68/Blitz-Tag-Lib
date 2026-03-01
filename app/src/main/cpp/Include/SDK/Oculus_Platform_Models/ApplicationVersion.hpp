#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform_Models {
    struct ApplicationVersion : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "ApplicationVersion");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCurrentCode() {
            static BNM::Field<int> _field = GetClass().GetField(O("CurrentCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCurrentName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("CurrentName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLatestCode() {
            static BNM::Field<int> _field = GetClass().GetField(O("LatestCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLatestName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("LatestName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetReleaseDate() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("ReleaseDate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSize() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
