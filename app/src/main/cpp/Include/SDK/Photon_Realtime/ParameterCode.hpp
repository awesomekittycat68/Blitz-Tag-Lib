#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    struct ParameterCode : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "ParameterCode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t SuppressRoomEvents = 237;
        static constexpr uint8_t EmptyRoomTTL = 236;
        static constexpr uint8_t PlayerTTL = 235;
        static constexpr uint8_t EventForward = 234;
        static constexpr uint8_t IsComingBack = 233;
        static constexpr uint8_t IsInactive = 233;
        static constexpr uint8_t CheckUserOnJoin = 232;
        static constexpr uint8_t ExpectedValues = 231;
        static constexpr uint8_t Address = 230;
        static constexpr uint8_t PeerCount = 229;
        static constexpr uint8_t GameCount = 228;
        static constexpr uint8_t MasterPeerCount = 227;
        static constexpr uint8_t UserId = 225;
        static constexpr uint8_t ApplicationId = 224;
        static constexpr uint8_t Position = 223;
        static constexpr uint8_t MatchMakingType = 223;
        static constexpr uint8_t GameList = 222;
        static constexpr uint8_t Token = 221;
        static constexpr uint8_t AppVersion = 220;
        static constexpr uint8_t AzureNodeInfo = 210;
        static constexpr uint8_t AzureLocalNodeId = 209;
        static constexpr uint8_t AzureMasterNodeId = 208;
        static constexpr uint8_t RoomName = 255;
        static constexpr uint8_t Broadcast = 250;
        static constexpr uint8_t ActorList = 252;
        static constexpr uint8_t ActorNr = 254;
        static constexpr uint8_t PlayerProperties = 249;
        static constexpr uint8_t CustomEventContent = 245;
        static constexpr uint8_t Data = 245;
        static constexpr uint8_t Code = 244;
        static constexpr uint8_t GameProperties = 248;
        static constexpr uint8_t Properties = 251;
        static constexpr uint8_t TargetActorNr = 253;
        static constexpr uint8_t ReceiverGroup = 246;
        static constexpr uint8_t Cache = 247;
        static constexpr uint8_t CleanupCacheOnLeave = 241;
        static constexpr uint8_t Group = 240;
        static constexpr uint8_t Remove = 239;
        static constexpr uint8_t PublishUserId = 239;
        static constexpr uint8_t Add = 238;
        static constexpr uint8_t Info = 218;
        static constexpr uint8_t ClientAuthenticationType = 217;
        static constexpr uint8_t ClientAuthenticationParams = 216;
        static constexpr uint8_t JoinMode = 215;
        static constexpr uint8_t ClientAuthenticationData = 214;
        static constexpr uint8_t MasterClientId = 203;
        static constexpr uint8_t FindFriendsRequestList = 1;
        static constexpr uint8_t FindFriendsOptions = 2;
        static constexpr uint8_t FindFriendsResponseOnlineList = 1;
        static constexpr uint8_t FindFriendsResponseRoomIdList = 2;
        static constexpr uint8_t LobbyName = 213;
        static constexpr uint8_t LobbyType = 212;
        static constexpr uint8_t LobbyStats = 211;
        static constexpr uint8_t Region = 210;
        static constexpr uint8_t UriPath = 209;
        static constexpr uint8_t WebRpcParameters = 208;
        static constexpr uint8_t WebRpcReturnCode = 207;
        static constexpr uint8_t WebRpcReturnMessage = 206;
        static constexpr uint8_t CacheSliceIndex = 205;
        static constexpr uint8_t Plugins = 204;
        static constexpr uint8_t NickName = 202;
        static constexpr uint8_t PluginName = 201;
        static constexpr uint8_t PluginVersion = 200;
        static constexpr uint8_t Cluster = 196;
        static constexpr uint8_t ExpectedProtocol = 195;
        static constexpr uint8_t CustomInitData = 194;
        static constexpr uint8_t EncryptionMode = 193;
        static constexpr uint8_t EncryptionData = 192;
        static constexpr uint8_t RoomOptionFlags = 191;
    };
}
