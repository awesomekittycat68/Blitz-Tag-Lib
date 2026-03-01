#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AudioSessionCategory.hpp"
#include "AudioSessionCategoryOption.hpp"
#include "AudioSessionMode.hpp"

namespace Photon_Voice_IOS {
    struct AudioSessionParameters : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.IOS", "AudioSessionParameters");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Voice_IOS::AudioSessionCategory GetCategory() {
            static BNM::Field<::Photon_Voice_IOS::AudioSessionCategory> _field = GetClass().GetField(O("Category"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Photon_Voice_IOS::AudioSessionCategoryOption>* GetCategoryOptions() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Photon_Voice_IOS::AudioSessionCategoryOption>*> _field = GetClass().GetField(O("CategoryOptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_IOS::AudioSessionMode GetMode() {
            static BNM::Field<::Photon_Voice_IOS::AudioSessionMode> _field = GetClass().GetField(O("Mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCategory(::Photon_Voice_IOS::AudioSessionCategory value) {
            static BNM::Field<::Photon_Voice_IOS::AudioSessionCategory> _field = GetClass().GetField(O("Category"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCategoryOptions(::BNM::Structures::Mono::Array<::Photon_Voice_IOS::AudioSessionCategoryOption>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Photon_Voice_IOS::AudioSessionCategoryOption>*> _field = GetClass().GetField(O("CategoryOptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMode(::Photon_Voice_IOS::AudioSessionMode value) {
            static BNM::Field<::Photon_Voice_IOS::AudioSessionMode> _field = GetClass().GetField(O("Mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int CategoryOptionsToInt() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CategoryOptionsToInt"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
