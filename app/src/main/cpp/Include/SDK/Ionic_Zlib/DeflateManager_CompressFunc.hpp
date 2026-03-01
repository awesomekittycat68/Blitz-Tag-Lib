#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BlockState.hpp"
#include "FlushType.hpp"

namespace Ionic_Zlib {
    struct DeflateManager_CompressFunc : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Zlib", "DeflateManager").GetInnerClass("CompressFunc");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP2 = void*>
        void* BeginInvoke(::Ionic_Zlib::FlushType flush, ::BNM::IL2CPP::Il2CppObject* callback, TP2 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"flush", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(flush, callback, object);
        }
        template <typename TP0 = void*>
        ::Ionic_Zlib::BlockState EndInvoke(TP0 result) {
            static BNM::Method<::Ionic_Zlib::BlockState> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(result);
        }
        ::Ionic_Zlib::BlockState Invoke(::Ionic_Zlib::FlushType flush) {
            static BNM::Method<::Ionic_Zlib::BlockState> _m = GetClass().GetMethod(O("Invoke"), {"flush"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(flush);
        }
    };
}
