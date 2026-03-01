#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GroupJoinZoneAB.hpp"
#include "../GlobalNamespace/NetworkSceneObject.hpp"
#include "../GlobalNamespace/PhotonMessageInfoWrapped.hpp"
#include "../GorillaTag/GTColor_HSVRanges.hpp"
#include "FriendshipGroupDetection_PlayerFist.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GorillaTagScripts {
    struct FriendshipGroupDetection : ::GlobalNamespace::NetworkSceneObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "FriendshipGroupDetection");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaTagScripts::FriendshipGroupDetection* get_Instance() {
            static BNM::Method<::GorillaTagScripts::FriendshipGroupDetection*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        bool GetDidJoinLeftHanded() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_DidJoinLeftHanded"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDidJoinLeftHanded(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DidJoinLeftHanded"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaTagScripts::FriendshipGroupDetection* GetInstance() {
            static BNM::Method<::GorillaTagScripts::FriendshipGroupDetection*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GorillaTagScripts::FriendshipGroupDetection* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsInParty() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsInParty"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Color>* GetMyBeadColors() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Color>*> _method = GetClass().GetMethod(O("get_myBeadColors"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMyBeadColors(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Color>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_myBeadColors"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Color GetMyBraceletColor() {
            static BNM::Method<::BNM::Structures::Unity::Color> _method = GetClass().GetMethod(O("get_myBraceletColor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMyBraceletColor(::BNM::Structures::Unity::Color value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_myBraceletColor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetMyBraceletSelfIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_MyBraceletSelfIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMyBraceletSelfIndex(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MyBraceletSelfIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetPartyMemberIDs() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _method = GetClass().GetMethod(O("get_PartyMemberIDs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GroupJoinZoneAB GetPartyZone() {
            static BNM::Method<::GlobalNamespace::GroupJoinZoneAB> _method = GetClass().GetMethod(O("get_partyZone"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPartyZone(::GlobalNamespace::GroupJoinZoneAB value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_partyZone"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetAboutToGroupJoinCooldownUntilTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("aboutToGroupJoin_CooldownUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAmFirstProvisionalPlayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("amFirstProvisionalPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::GTColor_HSVRanges GetBraceletRandomColorHSVRanges() {
            static BNM::Field<::GorillaTag::GTColor_HSVRanges> _field = GetClass().GetField(O("braceletRandomColorHSVRanges"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCooldownAfterCreatingGroup() {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownAfterCreatingGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebug() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debug"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDebugStr() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("debugStr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDetectionRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("detectionRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetFailedToFollowRefreshPartyDelay() {
            static BNM::Field<double> _field = GetClass().GetField(O("failedToFollowRefreshPartyDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetFistBumpInterruptedAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("fistBumpInterruptedAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFriendshipBubble() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("friendshipBubble"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGroupCreateAfterTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("groupCreateAfterTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGroupTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("groupTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<::GlobalNamespace::GroupJoinZoneAB>*>* GetGroupZoneCallbacks() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<::GlobalNamespace::GroupJoinZoneAB>*>*> _field = GetClass().GetField(O("groupZoneCallbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetJoinedRoomRefreshPartyDelay() {
            static BNM::Field<double> _field = GetClass().GetField(O("joinedRoomRefreshPartyDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastFailedToFollowPartyTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastFailedToFollowPartyTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastJoinedRoomTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastJoinedRoomTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMMaxGroupJoinTimeDifference() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_maxGroupJoinTimeDifference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetMyPartyMemberIDs() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("myPartyMemberIDs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMyPartyMembersHash() {
            static BNM::Field<void*> _field = GetClass().GetField(O("myPartyMembersHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetOffset() {
            static BNM::Field<double> _field = GetClass().GetField(O("offset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetParticleSystem() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("particleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<int>*>* GetPartyMergeIDs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<int>*>*> _field = GetClass().GetField(O("partyMergeIDs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayEffectsAfterTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("playEffectsAfterTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayEffectsDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("playEffectsDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetPlayersInProvisionalGroup() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("playersInProvisionalGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::FriendshipGroupDetection_PlayerFist>* GetPlayersMakingFists() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::FriendshipGroupDetection_PlayerFist>*> _field = GetClass().GetField(O("playersMakingFists"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPlayersToPropagateFrom() {
            static BNM::Field<void*> _field = GetClass().GetField(O("playersToPropagateFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetProfilerTick() {
            static BNM::Field<void*> _field = GetClass().GetField(O("profiler_Tick"));
            return _field.Get();
        }
        static void* GetProfilerUpdateProvisionalGroup() {
            static BNM::Field<void*> _field = GetClass().GetField(O("profiler_updateProvisionalGroup"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetProvisionalGroupUsingLeftHands() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("provisionalGroupUsingLeftHands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSuppressPartyCreationUntilTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("suppressPartyCreationUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Unity::Color>* GetTempColorLookup() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("tempColorLookup"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetTempIntList() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("tempIntList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::String*>* GetUserIdLookup() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("userIdLookup"));
            return _field.Get();
        }
        bool GetWantsPartyRefreshPostFollowFailed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wantsPartyRefreshPostFollowFailed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWantsPartyRefreshPostJoin() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wantsPartyRefreshPostJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWillJoinLeftHanded() {
            static BNM::Field<bool> _field = GetClass().GetField(O("WillJoinLeftHanded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAboutToGroupJoinCooldownUntilTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("aboutToGroupJoin_CooldownUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAmFirstProvisionalPlayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("amFirstProvisionalPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBraceletRandomColorHSVRanges(::GorillaTag::GTColor_HSVRanges value) {
            static BNM::Field<::GorillaTag::GTColor_HSVRanges> _field = GetClass().GetField(O("braceletRandomColorHSVRanges"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownAfterCreatingGroup(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownAfterCreatingGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebug(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debug"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugStr(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("debugStr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDetectionRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("detectionRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFailedToFollowRefreshPartyDelay(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("failedToFollowRefreshPartyDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFistBumpInterruptedAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("fistBumpInterruptedAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendshipBubble(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("friendshipBubble"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroupCreateAfterTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("groupCreateAfterTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroupTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("groupTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroupZoneCallbacks(::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<::GlobalNamespace::GroupJoinZoneAB>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<::GlobalNamespace::GroupJoinZoneAB>*>*> _field = GetClass().GetField(O("groupZoneCallbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJoinedRoomRefreshPartyDelay(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("joinedRoomRefreshPartyDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastFailedToFollowPartyTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastFailedToFollowPartyTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastJoinedRoomTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastJoinedRoomTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMMaxGroupJoinTimeDifference(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_maxGroupJoinTimeDifference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyPartyMemberIDs(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("myPartyMemberIDs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyPartyMembersHash(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("myPartyMembersHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffset(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("offset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParticleSystem(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("particleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPartyMergeIDs(::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<int>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<int>*>*> _field = GetClass().GetField(O("partyMergeIDs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayEffectsAfterTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playEffectsAfterTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayEffectsDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playEffectsDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayersInProvisionalGroup(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("playersInProvisionalGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayersMakingFists(::BNM::Structures::Mono::List<::GorillaTagScripts::FriendshipGroupDetection_PlayerFist>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::FriendshipGroupDetection_PlayerFist>*> _field = GetClass().GetField(O("playersMakingFists"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayersToPropagateFrom(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("playersToPropagateFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProvisionalGroupUsingLeftHands(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("provisionalGroupUsingLeftHands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuppressPartyCreationUntilTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("suppressPartyCreationUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTempColorLookup(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Unity::Color>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("tempColorLookup"));
            _field.Set(value);
        }
        void SetTempIntList(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("tempIntList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetUserIdLookup(::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("userIdLookup"));
            _field.Set(value);
        }
        void SetWantsPartyRefreshPostFollowFailed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wantsPartyRefreshPostFollowFailed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWantsPartyRefreshPostJoin(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wantsPartyRefreshPostJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWillJoinLeftHanded(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("WillJoinLeftHanded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddGroupZoneCallback(::BNM::Structures::Mono::Action<::GlobalNamespace::GroupJoinZoneAB>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddGroupZoneCallback"), {"callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callback);
        }
        void AddPartyMembers(::BNM::Structures::Mono::String* partyGameMode, int16_t braceletColor, ::BNM::Structures::Mono::Array<int>* memberIDs, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPartyMembers"), {"partyGameMode", "braceletColor", "memberIDs", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(partyGameMode, braceletColor, memberIDs, info);
        }
        void AddPartyMembersWrapped(::BNM::Structures::Mono::String* partyGameMode, int16_t braceletColor, ::BNM::Structures::Mono::Array<int>* memberIDs, ::GlobalNamespace::PhotonMessageInfoWrapped infoWrapped) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPartyMembersWrapped"), {"partyGameMode", "braceletColor", "memberIDs", "infoWrapped"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(partyGameMode, braceletColor, memberIDs, infoWrapped);
        }
        bool AnyPartyMembersOutsideFriendCollider() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AnyPartyMembersOutsideFriendCollider"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_DidJoinLeftHanded() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_DidJoinLeftHanded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GorillaTagScripts::FriendshipGroupDetection* get_Instance_1() {
            static BNM::Method<::GorillaTagScripts::FriendshipGroupDetection*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        bool get_IsInParty() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsInParty"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Color>* get_myBeadColors() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Color>*> _m = GetClass().GetMethod(O("get_myBeadColors"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Color get_myBraceletColor() {
            static BNM::Method<::BNM::Structures::Unity::Color> _m = GetClass().GetMethod(O("get_myBraceletColor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_MyBraceletSelfIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_MyBraceletSelfIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* get_PartyMemberIDs() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("get_PartyMemberIDs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GroupJoinZoneAB get_partyZone() {
            static BNM::Method<::GlobalNamespace::GroupJoinZoneAB> _m = GetClass().GetMethod(O("get_partyZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsInMyGroup(::BNM::Structures::Mono::String* userID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInMyGroup"), {"userID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(userID);
        }
        bool IsPartyWithinCollider(::GlobalNamespace::GorillaFriendCollider* friendCollider) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPartyWithinCollider"), {"friendCollider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(friendCollider);
        }
        void LeaveParty() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LeaveParty"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void NotifyNoPartyToMerge(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NotifyNoPartyToMerge"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void NotifyPartyGameModeChanged(::BNM::Structures::Mono::String* gameMode, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NotifyPartyGameModeChanged"), {"gameMode", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameMode, info);
        }
        void NotifyPartyGameModeChangedWrapped(::BNM::Structures::Mono::String* gameMode, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NotifyPartyGameModeChangedWrapped"), {"gameMode", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameMode, info);
        }
        void NotifyPartyMerging(::BNM::Structures::Mono::Array<int>* memberIDs, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NotifyPartyMerging"), {"memberIDs", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(memberIDs, info);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnFailedToFollowParty() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFailedToFollowParty"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPartyMembershipChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPartyMembershipChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPlayerJoinedRoom(::GlobalNamespace::NetPlayer* joiningPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerJoinedRoom"), {"joiningPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(joiningPlayer);
        }
        static int16_t PackColor(::BNM::Structures::Unity::Color col) {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("PackColor"), {"col"});
            return _m.Call(col);
        }
        void PartMemberIsAboutToGroupJoinWrapped(::GlobalNamespace::PhotonMessageInfoWrapped wrappedInfo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PartMemberIsAboutToGroupJoinWrapped"), {"wrappedInfo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wrappedInfo);
        }
        void PartyFormedSuccesfullyWrapped(::BNM::Structures::Mono::String* partyGameMode, int16_t braceletColor, ::BNM::Structures::Mono::Array<int>* memberIDs, bool forceDebug, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PartyFormedSuccesfullyWrapped"), {"partyGameMode", "braceletColor", "memberIDs", "forceDebug", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(partyGameMode, braceletColor, memberIDs, forceDebug, info);
        }
        void PartyFormedSuccessfully(::BNM::Structures::Mono::String* partyGameMode, int16_t braceletColor, ::BNM::Structures::Mono::Array<int>* memberIDs, bool forceDebug, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PartyFormedSuccessfully"), {"partyGameMode", "braceletColor", "memberIDs", "forceDebug", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(partyGameMode, braceletColor, memberIDs, forceDebug, info);
        }
        void PartyMemberIsAboutToGroupJoin(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PartyMemberIsAboutToGroupJoin"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void PlayerIDLeftParty(::BNM::Structures::Mono::String* userID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerIDLeftParty"), {"userID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(userID);
        }
        void PlayerLeftParty(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerLeftParty"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void PlayerLeftPartyWrapped(::GlobalNamespace::PhotonMessageInfoWrapped infoWrapped) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerLeftPartyWrapped"), {"infoWrapped"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(infoWrapped);
        }
        void RefreshPartyMembers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshPartyMembers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemoveGroupZoneCallback(::BNM::Structures::Mono::Action<::GlobalNamespace::GroupJoinZoneAB>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveGroupZoneCallback"), {"callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callback);
        }
        void RequestPartyGameMode(::BNM::Structures::Mono::String* gameMode, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPartyGameMode"), {"gameMode", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameMode, info);
        }
        void RequestPartyGameModeWrapped(::BNM::Structures::Mono::String* gameMode, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPartyGameModeWrapped"), {"gameMode", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameMode, info);
        }
        template <typename TP1 = void*, typename TP5 = void*>
        static void RPC_AddPartyMembers(::BNM::IL2CPP::Il2CppObject* runner, TP1 rpcTarget, ::BNM::Structures::Mono::String* partyGameMode, int16_t braceletColor, ::BNM::Structures::Mono::Array<int>* memberIDs, TP5 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_AddPartyMembers"), {"runner", "rpcTarget", "partyGameMode", "braceletColor", "memberIDs", "info"});
            _m.Call(runner, rpcTarget, partyGameMode, braceletColor, memberIDs, info);
        }
        static void RPC_AddPartyMembers$Invoker(::BNM::IL2CPP::Il2CppObject* runner, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_AddPartyMembers@Invoker"), {"runner", "message"});
            _m.Call(runner, message);
        }
        template <typename TP1 = void*>
        static void RPC_NotifyNoPartyToMerge(::BNM::IL2CPP::Il2CppObject* runner, TP1 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_NotifyNoPartyToMerge"), {"runner", "info"});
            _m.Call(runner, info);
        }
        static void RPC_NotifyNoPartyToMerge$Invoker(::BNM::IL2CPP::Il2CppObject* runner, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_NotifyNoPartyToMerge@Invoker"), {"runner", "message"});
            _m.Call(runner, message);
        }
        template <typename TP1 = void*, typename TP3 = void*>
        static void RPC_NotifyPartyGameModeChanged(::BNM::IL2CPP::Il2CppObject* runner, TP1 targetPlayer, ::BNM::Structures::Mono::String* gameMode, TP3 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_NotifyPartyGameModeChanged"), {"runner", "targetPlayer", "gameMode", "info"});
            _m.Call(runner, targetPlayer, gameMode, info);
        }
        static void RPC_NotifyPartyGameModeChanged$Invoker(::BNM::IL2CPP::Il2CppObject* runner, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_NotifyPartyGameModeChanged@Invoker"), {"runner", "message"});
            _m.Call(runner, message);
        }
        template <typename TP1 = void*, typename TP3 = void*>
        static void RPC_NotifyPartyMerging(::BNM::IL2CPP::Il2CppObject* runner, TP1 playerRef, ::BNM::Structures::Mono::Array<int>* memberIDs, TP3 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_NotifyPartyMerging"), {"runner", "playerRef", "memberIDs", "info"});
            _m.Call(runner, playerRef, memberIDs, info);
        }
        static void RPC_NotifyPartyMerging$Invoker(::BNM::IL2CPP::Il2CppObject* runner, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_NotifyPartyMerging@Invoker"), {"runner", "message"});
            _m.Call(runner, message);
        }
        template <typename TP1 = void*, typename TP6 = void*>
        static void RPC_PartyFormedSuccessfully(::BNM::IL2CPP::Il2CppObject* runner, TP1 targetPlayer, ::BNM::Structures::Mono::String* partyGameMode, int16_t braceletColor, ::BNM::Structures::Mono::Array<int>* memberIDs, bool forceDebug, TP6 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_PartyFormedSuccessfully"), {"runner", "targetPlayer", "partyGameMode", "braceletColor", "memberIDs", "forceDebug", "info"});
            _m.Call(runner, targetPlayer, partyGameMode, braceletColor, memberIDs, forceDebug, info);
        }
        static void RPC_PartyFormedSuccessfully$Invoker(::BNM::IL2CPP::Il2CppObject* runner, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_PartyFormedSuccessfully@Invoker"), {"runner", "message"});
            _m.Call(runner, message);
        }
        template <typename TP1 = void*, typename TP2 = void*>
        static void RPC_PartyMemberIsAboutToGroupJoin(::BNM::IL2CPP::Il2CppObject* runner, TP1 targetPlayer, TP2 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_PartyMemberIsAboutToGroupJoin"), {"runner", "targetPlayer", "info"});
            _m.Call(runner, targetPlayer, info);
        }
        static void RPC_PartyMemberIsAboutToGroupJoin$Invoker(::BNM::IL2CPP::Il2CppObject* runner, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_PartyMemberIsAboutToGroupJoin@Invoker"), {"runner", "message"});
            _m.Call(runner, message);
        }
        template <typename TP1 = void*, typename TP2 = void*>
        static void RPC_PlayerLeftParty(::BNM::IL2CPP::Il2CppObject* runner, TP1 player, TP2 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_PlayerLeftParty"), {"runner", "player", "info"});
            _m.Call(runner, player, info);
        }
        static void RPC_PlayerLeftParty$Invoker(::BNM::IL2CPP::Il2CppObject* runner, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_PlayerLeftParty@Invoker"), {"runner", "message"});
            _m.Call(runner, message);
        }
        template <typename TP1 = void*, typename TP3 = void*>
        static void RPC_RequestPartyGameMode(::BNM::IL2CPP::Il2CppObject* runner, TP1 targetPlayer, ::BNM::Structures::Mono::String* gameMode, TP3 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_RequestPartyGameMode"), {"runner", "targetPlayer", "gameMode", "info"});
            _m.Call(runner, targetPlayer, gameMode, info);
        }
        static void RPC_RequestPartyGameMode$Invoker(::BNM::IL2CPP::Il2CppObject* runner, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_RequestPartyGameMode@Invoker"), {"runner", "message"});
            _m.Call(runner, message);
        }
        template <typename TP1 = void*, typename TP2 = void*>
        static void RPC_VerifyPartyMember(::BNM::IL2CPP::Il2CppObject* runner, TP1 rpcTarget, TP2 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_VerifyPartyMember"), {"runner", "rpcTarget", "info"});
            _m.Call(runner, rpcTarget, info);
        }
        static void RPC_VerifyPartyMember$Invoker(::BNM::IL2CPP::Il2CppObject* runner, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_VerifyPartyMember@Invoker"), {"runner", "message"});
            _m.Call(runner, message);
        }
        void SendAboutToGroupJoin() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendAboutToGroupJoin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendPartyFormedRPC(int16_t braceletColor, ::BNM::Structures::Mono::Array<int>* memberIDs, bool forceDebug) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendPartyFormedRPC"), {"braceletColor", "memberIDs", "forceDebug"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(braceletColor, memberIDs, forceDebug);
        }
        void SendRequestPartyGameMode(::BNM::Structures::Mono::String* gameMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendRequestPartyGameMode"), {"gameMode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameMode);
        }
        void SendVerifyPartyMember(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendVerifyPartyMember"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void set_DidJoinLeftHanded(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DidJoinLeftHanded"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void set_Instance(::GorillaTagScripts::FriendshipGroupDetection* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Instance"), {"value"});
            _m.Call(value);
        }
        void set_myBeadColors(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Color>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_myBeadColors"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_myBraceletColor(::BNM::Structures::Unity::Color value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_myBraceletColor"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MyBraceletSelfIndex(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MyBraceletSelfIndex"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_partyZone(::GlobalNamespace::GroupJoinZoneAB value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_partyZone"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetNewParty(::BNM::Structures::Mono::String* partyGameMode, int16_t braceletColor, ::BNM::Structures::Mono::Array<int>* memberIDs) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNewParty"), {"partyGameMode", "braceletColor", "memberIDs"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(partyGameMode, braceletColor, memberIDs);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::BNM::Structures::Unity::Color UnpackColor(int16_t data) {
            static BNM::Method<::BNM::Structures::Unity::Color> _m = GetClass().GetMethod(O("UnpackColor"), {"data"});
            return _m.Call(data);
        }
        void UpdateProvisionalGroup(::BNM::Structures::Unity::Vector3& midpoint) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateProvisionalGroup"), {"midpoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&midpoint);
        }
        void UpdateWarningSigns() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateWarningSigns"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void VerifyPartyMember(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VerifyPartyMember"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void VerifyPartyMemberWrapped(::GlobalNamespace::PhotonMessageInfoWrapped infoWrapped) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VerifyPartyMemberWrapped"), {"infoWrapped"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(infoWrapped);
        }
    };
}
