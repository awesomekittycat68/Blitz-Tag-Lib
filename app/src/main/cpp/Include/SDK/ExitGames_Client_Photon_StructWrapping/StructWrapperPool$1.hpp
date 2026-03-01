#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "StructWrapperPool.hpp"
#include "WrappedType.hpp"

namespace ExitGames_Client_Photon_StructWrapping {
    template <typename T>
    struct StructWrapperPool$1 : ::ExitGames_Client_Photon_StructWrapping::StructWrapperPool {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon.StructWrapping", "StructWrapperPool`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int GROWBY = 4;
        bool GetIsStaticPool() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isStaticPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPool() {
            static BNM::Field<void*> _field = GetClass().GetField(O("pool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::MonoType* GetTType() {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("tType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon_StructWrapping::WrappedType GetWType() {
            static BNM::Field<::ExitGames_Client_Photon_StructWrapping::WrappedType> _field = GetClass().GetField(O("wType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPool(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("pool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
