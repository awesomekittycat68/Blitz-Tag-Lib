#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MothershipApiPINVOKE_SWIGExceptionHelper : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipApiPINVOKE").GetInnerClass("SWIGExceptionHelper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* GetApplicationDelegate() {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("applicationDelegate"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate* GetArgumentDelegate() {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate*> _field = GetClass().GetField(O("argumentDelegate"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate* GetArgumentNullDelegate() {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate*> _field = GetClass().GetField(O("argumentNullDelegate"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate* GetArgumentOutOfRangeDelegate() {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate*> _field = GetClass().GetField(O("argumentOutOfRangeDelegate"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* GetArithmeticDelegate() {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("arithmeticDelegate"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* GetDivideByZeroDelegate() {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("divideByZeroDelegate"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* GetIndexOutOfRangeDelegate() {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("indexOutOfRangeDelegate"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* GetInvalidCastDelegate() {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("invalidCastDelegate"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* GetInvalidOperationDelegate() {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("invalidOperationDelegate"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* GetIoDelegate() {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("ioDelegate"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* GetNullReferenceDelegate() {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("nullReferenceDelegate"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* GetOutOfMemoryDelegate() {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("outOfMemoryDelegate"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* GetOverflowDelegate() {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("overflowDelegate"));
            return _field.Get();
        }
        static ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* GetSystemDelegate() {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("systemDelegate"));
            return _field.Get();
        }
        static void SetApplicationDelegate(::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* value) {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("applicationDelegate"));
            _field.Set(value);
        }
        static void SetArgumentDelegate(::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate* value) {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate*> _field = GetClass().GetField(O("argumentDelegate"));
            _field.Set(value);
        }
        static void SetArgumentNullDelegate(::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate* value) {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate*> _field = GetClass().GetField(O("argumentNullDelegate"));
            _field.Set(value);
        }
        static void SetArgumentOutOfRangeDelegate(::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate* value) {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate*> _field = GetClass().GetField(O("argumentOutOfRangeDelegate"));
            _field.Set(value);
        }
        static void SetArithmeticDelegate(::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* value) {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("arithmeticDelegate"));
            _field.Set(value);
        }
        static void SetDivideByZeroDelegate(::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* value) {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("divideByZeroDelegate"));
            _field.Set(value);
        }
        static void SetIndexOutOfRangeDelegate(::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* value) {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("indexOutOfRangeDelegate"));
            _field.Set(value);
        }
        static void SetInvalidCastDelegate(::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* value) {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("invalidCastDelegate"));
            _field.Set(value);
        }
        static void SetInvalidOperationDelegate(::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* value) {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("invalidOperationDelegate"));
            _field.Set(value);
        }
        static void SetIoDelegate(::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* value) {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("ioDelegate"));
            _field.Set(value);
        }
        static void SetNullReferenceDelegate(::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* value) {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("nullReferenceDelegate"));
            _field.Set(value);
        }
        static void SetOutOfMemoryDelegate(::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* value) {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("outOfMemoryDelegate"));
            _field.Set(value);
        }
        static void SetOverflowDelegate(::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* value) {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("overflowDelegate"));
            _field.Set(value);
        }
        static void SetSystemDelegate(::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* value) {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate*> _field = GetClass().GetField(O("systemDelegate"));
            _field.Set(value);
        }
        static void SetPendingApplicationException(::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPendingApplicationException"), {"message"});
            _m.Call(message);
        }
        static void SetPendingArgumentException(::BNM::Structures::Mono::String* message, ::BNM::Structures::Mono::String* paramName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPendingArgumentException"), {"message", "paramName"});
            _m.Call(message, paramName);
        }
        static void SetPendingArgumentNullException(::BNM::Structures::Mono::String* message, ::BNM::Structures::Mono::String* paramName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPendingArgumentNullException"), {"message", "paramName"});
            _m.Call(message, paramName);
        }
        static void SetPendingArgumentOutOfRangeException(::BNM::Structures::Mono::String* message, ::BNM::Structures::Mono::String* paramName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPendingArgumentOutOfRangeException"), {"message", "paramName"});
            _m.Call(message, paramName);
        }
        static void SetPendingArithmeticException(::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPendingArithmeticException"), {"message"});
            _m.Call(message);
        }
        static void SetPendingDivideByZeroException(::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPendingDivideByZeroException"), {"message"});
            _m.Call(message);
        }
        static void SetPendingIndexOutOfRangeException(::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPendingIndexOutOfRangeException"), {"message"});
            _m.Call(message);
        }
        static void SetPendingInvalidCastException(::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPendingInvalidCastException"), {"message"});
            _m.Call(message);
        }
        static void SetPendingInvalidOperationException(::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPendingInvalidOperationException"), {"message"});
            _m.Call(message);
        }
        static void SetPendingIOException(::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPendingIOException"), {"message"});
            _m.Call(message);
        }
        static void SetPendingNullReferenceException(::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPendingNullReferenceException"), {"message"});
            _m.Call(message);
        }
        static void SetPendingOutOfMemoryException(::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPendingOutOfMemoryException"), {"message"});
            _m.Call(message);
        }
        static void SetPendingOverflowException(::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPendingOverflowException"), {"message"});
            _m.Call(message);
        }
        static void SetPendingSystemException(::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPendingSystemException"), {"message"});
            _m.Call(message);
        }
        static void SWIGRegisterExceptionCallbacks_MothershipApi(::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* applicationDelegate, ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* arithmeticDelegate, ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* divideByZeroDelegate, ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* indexOutOfRangeDelegate, ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* invalidCastDelegate, ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* invalidOperationDelegate, ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* ioDelegate, ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* nullReferenceDelegate, ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* outOfMemoryDelegate, ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* overflowDelegate, ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionDelegate* systemExceptionDelegate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SWIGRegisterExceptionCallbacks_MothershipApi"), {"applicationDelegate", "arithmeticDelegate", "divideByZeroDelegate", "indexOutOfRangeDelegate", "invalidCastDelegate", "invalidOperationDelegate", "ioDelegate", "nullReferenceDelegate", "outOfMemoryDelegate", "overflowDelegate", "systemExceptionDelegate"});
            _m.Call(applicationDelegate, arithmeticDelegate, divideByZeroDelegate, indexOutOfRangeDelegate, invalidCastDelegate, invalidOperationDelegate, ioDelegate, nullReferenceDelegate, outOfMemoryDelegate, overflowDelegate, systemExceptionDelegate);
        }
        static void SWIGRegisterExceptionCallbacksArgument_MothershipApi(::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate* argumentDelegate, ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate* argumentNullDelegate, ::GlobalNamespace::MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate* argumentOutOfRangeDelegate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SWIGRegisterExceptionCallbacksArgument_MothershipApi"), {"argumentDelegate", "argumentNullDelegate", "argumentOutOfRangeDelegate"});
            _m.Call(argumentDelegate, argumentNullDelegate, argumentOutOfRangeDelegate);
        }
    };
}
