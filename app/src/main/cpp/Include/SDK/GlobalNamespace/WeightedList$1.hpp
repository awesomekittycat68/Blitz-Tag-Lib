#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct WeightedList$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "WeightedList`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Count"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<T>* GetItems() {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _method = GetClass().GetMethod(O("get_Items"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<float>* GetCumulativeWeights() {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("cumulativeWeights"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<T>* GetItems_f() {
            static BNM::Field<::BNM::Structures::Mono::List<T>*> _field = GetClass().GetField(O("items"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTotalWeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("totalWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<float>* GetWeights() {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("weights"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCumulativeWeights(::BNM::Structures::Mono::List<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("cumulativeWeights"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItems(::BNM::Structures::Mono::List<T>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<T>*> _field = GetClass().GetField(O("items"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalWeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("totalWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeights(::BNM::Structures::Mono::List<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("weights"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Add(T item, float weight) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"item", "weight"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(item, weight);
        }
        void Clear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Clear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_Count() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Count"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_Item(int index) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Item"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        ::BNM::Structures::Mono::List<T>* get_Items() {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _m = GetClass().GetMethod(O("get_Items"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetRandomIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRandomIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        T GetRandomItem() {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetRandomItem"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void RecalculateCumulativeWeights() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RecalculateCumulativeWeights"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool Remove(T item) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Remove"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(item);
        }
        void RemoveAt(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveAt"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
    };
}
