#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "WrappedType.hpp"

namespace ExitGames_Client_Photon_StructWrapping {
    struct StructWrapper : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon.StructWrapping", "StructWrapper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::MonoType* GetTtype() {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("ttype"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon_StructWrapping::WrappedType GetWrappedType() {
            static BNM::Field<::ExitGames_Client_Photon_StructWrapping::WrappedType> _field = GetClass().GetField(O("wrappedType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* ToString_1(bool writeType) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"), {"writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(writeType);
        }
    };
}
