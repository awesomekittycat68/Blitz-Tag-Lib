#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Ionic_Zlib {
    struct InternalConstants : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Zlib", "InternalConstants");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int GetBLCODES() {
            static BNM::Field<int> _field = GetClass().GetField(O("BL_CODES"));
            return _field.Get();
        }
        static int GetDCODES() {
            static BNM::Field<int> _field = GetClass().GetField(O("D_CODES"));
            return _field.Get();
        }
        static int GetLCODES() {
            static BNM::Field<int> _field = GetClass().GetField(O("L_CODES"));
            return _field.Get();
        }
        static int GetLENGTHCODES() {
            static BNM::Field<int> _field = GetClass().GetField(O("LENGTH_CODES"));
            return _field.Get();
        }
        static int GetLITERALS() {
            static BNM::Field<int> _field = GetClass().GetField(O("LITERALS"));
            return _field.Get();
        }
        static int GetMAXBITS() {
            static BNM::Field<int> _field = GetClass().GetField(O("MAX_BITS"));
            return _field.Get();
        }
        static int GetMAXBLBITS() {
            static BNM::Field<int> _field = GetClass().GetField(O("MAX_BL_BITS"));
            return _field.Get();
        }
        static int GetREP36() {
            static BNM::Field<int> _field = GetClass().GetField(O("REP_3_6"));
            return _field.Get();
        }
        static int GetREPZ11138() {
            static BNM::Field<int> _field = GetClass().GetField(O("REPZ_11_138"));
            return _field.Get();
        }
        static int GetREPZ310() {
            static BNM::Field<int> _field = GetClass().GetField(O("REPZ_3_10"));
            return _field.Get();
        }
    };
}
