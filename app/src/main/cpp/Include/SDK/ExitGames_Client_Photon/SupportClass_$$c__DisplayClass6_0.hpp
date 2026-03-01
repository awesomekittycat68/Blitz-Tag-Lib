#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    struct SupportClass_$$c__DisplayClass6_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "SupportClass").GetInnerClass("<>c__DisplayClass6_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetMillisecondsInterval() {
            static BNM::Field<int> _field = GetClass().GetField(O("millisecondsInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Func<bool>* GetMyThread() {
            static BNM::Field<::BNM::Structures::Mono::Func<bool>*> _field = GetClass().GetField(O("myThread"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMillisecondsInterval(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("millisecondsInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyThread(::BNM::Structures::Mono::Func<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Func<bool>*> _field = GetClass().GetField(O("myThread"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
