#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct FreeHoverboardManager_DataPerPlayer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FreeHoverboardManager").GetInnerClass("DataPerPlayer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::FreeHoverboardInstance* GetBoard0() {
            static BNM::Field<::GlobalNamespace::FreeHoverboardInstance*> _field = GetClass().GetField(O("board0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FreeHoverboardInstance* GetBoard1() {
            static BNM::Field<::GlobalNamespace::FreeHoverboardInstance*> _field = GetClass().GetField(O("board1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiterWithCooldown* GetSpamCheck() {
            static BNM::Field<::GlobalNamespace::CallLimiterWithCooldown*> _field = GetClass().GetField(O("spamCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBoard0(::GlobalNamespace::FreeHoverboardInstance* value) {
            static BNM::Field<::GlobalNamespace::FreeHoverboardInstance*> _field = GetClass().GetField(O("board0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBoard1(::GlobalNamespace::FreeHoverboardInstance* value) {
            static BNM::Field<::GlobalNamespace::FreeHoverboardInstance*> _field = GetClass().GetField(O("board1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpamCheck(::GlobalNamespace::CallLimiterWithCooldown* value) {
            static BNM::Field<::GlobalNamespace::CallLimiterWithCooldown*> _field = GetClass().GetField(O("spamCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::FreeHoverboardInstance* GetBoard(int boardIndex) {
            static BNM::Method<::GlobalNamespace::FreeHoverboardInstance*> _m = GetClass().GetMethod(O("GetBoard"), {"boardIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(boardIndex);
        }
        template <typename TP1 = void*>
        void Init(int actorNumber, TP1 freeBoardPool) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"actorNumber", "freeBoardPool"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorNumber, freeBoardPool);
        }
        template <typename TP0 = void*>
        void ReturnBoards(TP0 freeBoardPool) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReturnBoards"), {"freeBoardPool"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(freeBoardPool);
        }
    };
}
