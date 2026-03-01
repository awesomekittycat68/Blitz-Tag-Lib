#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct Utils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Utils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::IL2CPP::Il2CppObject* GetReusableSB() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("reusableSB"));
            return _field.Get();
        }
        static void SetReusableSB(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("reusableSB"));
            _field.Set(value);
        }
        template <typename T>
        static void AddIfNew(::BNM::Structures::Mono::List<T>* list, T item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddIfNew"), {"list", "item"});
            _m.Call(list, item);
        }
        static double CalculateNetworkDeltaTime(double prevTime, double newTime) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("CalculateNetworkDeltaTime"), {"prevTime", "newTime"});
            return _m.Call(prevTime, newTime);
        }
        static void Disable(::GameObject* target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Disable"), {"target"});
            _m.Call(target);
        }
        static bool InRoom(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("InRoom"), {"player"});
            return _m.Call(player);
        }
        static bool IsASCIILetterOrDigit(char c) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsASCIILetterOrDigit"), {"c"});
            return _m.Call(c);
        }
        static void LoadCosmeticBundles() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadCosmeticBundles"));
            _m.Call();
        }
        template <typename TP0 = void*>
        static void Log(TP0 message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Log"), {"message"});
            _m.Call(message);
        }
        template <typename TP0 = void*>
        static void Log(TP0 message, ::BNM::IL2CPP::Il2CppObject* context) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Log"), {"message", "context"});
            _m.Call(message, context);
        }
        static int64_t PackVector3ToLong(::BNM::Structures::Unity::Vector3 vector) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("PackVector3ToLong"), {"vector"});
            return _m.Call(vector);
        }
        static bool PlayerInRoom(int actorNumber) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PlayerInRoom"), {"actorNumber"});
            return _m.Call(actorNumber);
        }
        static bool PlayerInRoom(int actorNumer, ::Photon_Realtime::Player*& photonPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PlayerInRoom"), {"actorNumer", "photonPlayer"});
            return _m.Call(actorNumer, &photonPlayer);
        }
        static bool PlayerInRoom(int actorNumber, ::GlobalNamespace::NetPlayer*& player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PlayerInRoom"), {"actorNumber", "player"});
            return _m.Call(actorNumber, &player);
        }
        template <typename T>
        static void RemoveIfContains(::BNM::Structures::Mono::List<T>* list, T item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveIfContains"), {"list", "item"});
            _m.Call(list, item);
        }
        static void StaticLoad() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StaticLoad"));
            _m.Call();
        }
        static ::BNM::Structures::Unity::Vector3 UnpackVector3FromLong(int64_t data) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("UnpackVector3FromLong"), {"data"});
            return _m.Call(data);
        }
        static bool ValidateServerTime(double time, double maximumLatency) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateServerTime"), {"time", "maximumLatency"});
            return _m.Call(time, maximumLatency);
        }
    };
}
