#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon_StructWrapping {
    struct StructWrapperPools : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon.StructWrapping", "StructWrapperPools");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::ExitGames_Client_Photon_StructWrapping::StructWrapperPool*>* GetPools() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::ExitGames_Client_Photon_StructWrapping::StructWrapperPool*>*> _field = GetClass().GetField(O("pools"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetUsed() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("used"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void Clear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Clear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
