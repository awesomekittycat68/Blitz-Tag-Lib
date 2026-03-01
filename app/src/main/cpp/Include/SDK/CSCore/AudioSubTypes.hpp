#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AudioEncoding.hpp"

namespace CSCore {
    struct AudioSubTypes : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("CSCore", "AudioSubTypes");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void* GetAcelp() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Acelp"));
            return _field.Get();
        }
        static void* GetAdpcm() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Adpcm"));
            return _field.Get();
        }
        static void* GetALaw() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ALaw"));
            return _field.Get();
        }
        static void* GetAntexAdpcme() {
            static BNM::Field<void*> _field = GetClass().GetField(O("AntexAdpcme"));
            return _field.Get();
        }
        static void* GetAptx() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Aptx"));
            return _field.Get();
        }
        static void* GetAudioFileAf10() {
            static BNM::Field<void*> _field = GetClass().GetField(O("AudioFileAf10"));
            return _field.Get();
        }
        static void* GetAudioFileAf36() {
            static BNM::Field<void*> _field = GetClass().GetField(O("AudioFileAf36"));
            return _field.Get();
        }
        static void* GetControlResCr10() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ControlResCr10"));
            return _field.Get();
        }
        static void* GetControlResVqlpc() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ControlResVqlpc"));
            return _field.Get();
        }
        static void* GetCUCodec() {
            static BNM::Field<void*> _field = GetClass().GetField(O("CUCodec"));
            return _field.Get();
        }
        static void* GetDialogicOkiAdpcm() {
            static BNM::Field<void*> _field = GetClass().GetField(O("DialogicOkiAdpcm"));
            return _field.Get();
        }
        static void* GetDigiAdpcm() {
            static BNM::Field<void*> _field = GetClass().GetField(O("DigiAdpcm"));
            return _field.Get();
        }
        static void* GetDigiFix() {
            static BNM::Field<void*> _field = GetClass().GetField(O("DigiFix"));
            return _field.Get();
        }
        static void* GetDigiReal() {
            static BNM::Field<void*> _field = GetClass().GetField(O("DigiReal"));
            return _field.Get();
        }
        static void* GetDigiStd() {
            static BNM::Field<void*> _field = GetClass().GetField(O("DigiStd"));
            return _field.Get();
        }
        static void* GetDolbyAc2() {
            static BNM::Field<void*> _field = GetClass().GetField(O("DolbyAc2"));
            return _field.Get();
        }
        static void* GetDrm() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Drm"));
            return _field.Get();
        }
        static void* GetDspGroupTrueSpeech() {
            static BNM::Field<void*> _field = GetClass().GetField(O("DspGroupTrueSpeech"));
            return _field.Get();
        }
        static void* GetDts() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Dts"));
            return _field.Get();
        }
        static void* GetDviAdpcm() {
            static BNM::Field<void*> _field = GetClass().GetField(O("DviAdpcm"));
            return _field.Get();
        }
        static void* GetEchoSpeechCorporation1() {
            static BNM::Field<void*> _field = GetClass().GetField(O("EchoSpeechCorporation1"));
            return _field.Get();
        }
        static void* GetExtensible() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Extensible"));
            return _field.Get();
        }
        static void* GetG723() {
            static BNM::Field<void*> _field = GetClass().GetField(O("G723"));
            return _field.Get();
        }
        static void* GetG723Adpcm() {
            static BNM::Field<void*> _field = GetClass().GetField(O("G723Adpcm"));
            return _field.Get();
        }
        static void* GetG729() {
            static BNM::Field<void*> _field = GetClass().GetField(O("G729"));
            return _field.Get();
        }
        static void* GetGsm() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Gsm"));
            return _field.Get();
        }
        static void* GetGsm610() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Gsm610"));
            return _field.Get();
        }
        static void* GetIbmCvsd() {
            static BNM::Field<void*> _field = GetClass().GetField(O("IbmCvsd"));
            return _field.Get();
        }
        static void* GetIeeeFloat() {
            static BNM::Field<void*> _field = GetClass().GetField(O("IeeeFloat"));
            return _field.Get();
        }
        static void* GetImaAdpcm() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ImaAdpcm"));
            return _field.Get();
        }
        static void* GetLrc() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Lrc"));
            return _field.Get();
        }
        static void* GetMediaspaceAdpcm() {
            static BNM::Field<void*> _field = GetClass().GetField(O("MediaspaceAdpcm"));
            return _field.Get();
        }
        static void* GetMediaTypeAudio() {
            static BNM::Field<void*> _field = GetClass().GetField(O("MediaTypeAudio"));
            return _field.Get();
        }
        static void* GetMediaVisionAdpcm() {
            static BNM::Field<void*> _field = GetClass().GetField(O("MediaVisionAdpcm"));
            return _field.Get();
        }
        static void* GetMpeg() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Mpeg"));
            return _field.Get();
        }
        static void* GetMPEGADTSAAC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("MPEG_ADTS_AAC"));
            return _field.Get();
        }
        static void* GetMPEGHEAAC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("MPEG_HEAAC"));
            return _field.Get();
        }
        static void* GetMPEGLOAS() {
            static BNM::Field<void*> _field = GetClass().GetField(O("MPEG_LOAS"));
            return _field.Get();
        }
        static void* GetMPEGRAWAAC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("MPEG_RAW_AAC"));
            return _field.Get();
        }
        static void* GetMpegLayer3() {
            static BNM::Field<void*> _field = GetClass().GetField(O("MpegLayer3"));
            return _field.Get();
        }
        static void* GetMsnAudio() {
            static BNM::Field<void*> _field = GetClass().GetField(O("MsnAudio"));
            return _field.Get();
        }
        static void* GetMuLaw() {
            static BNM::Field<void*> _field = GetClass().GetField(O("MuLaw"));
            return _field.Get();
        }
        static void* GetNOKIAMPEGADTSAAC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("NOKIA_MPEG_ADTS_AAC"));
            return _field.Get();
        }
        static void* GetNOKIAMPEGRAWAAC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("NOKIA_MPEG_RAW_AAC"));
            return _field.Get();
        }
        static void* GetOkiAdpcm() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OkiAdpcm"));
            return _field.Get();
        }
        static void* GetPcm() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Pcm"));
            return _field.Get();
        }
        static void* GetProsody1612() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Prosody1612"));
            return _field.Get();
        }
        static void* GetRawAac() {
            static BNM::Field<void*> _field = GetClass().GetField(O("RawAac"));
            return _field.Get();
        }
        static void* GetSierraAdpcm() {
            static BNM::Field<void*> _field = GetClass().GetField(O("SierraAdpcm"));
            return _field.Get();
        }
        static void* GetSonarC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("SonarC"));
            return _field.Get();
        }
        static void* GetUnknown() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Unknown"));
            return _field.Get();
        }
        static void* GetVODAFONEMPEGADTSAAC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("VODAFONE_MPEG_ADTS_AAC"));
            return _field.Get();
        }
        static void* GetVODAFONEMPEGRAWAAC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("VODAFONE_MPEG_RAW_AAC"));
            return _field.Get();
        }
        static void* GetVorbis1() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Vorbis1"));
            return _field.Get();
        }
        static void* GetVorbis1P() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Vorbis1P"));
            return _field.Get();
        }
        static void* GetVorbis2() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Vorbis2"));
            return _field.Get();
        }
        static void* GetVorbis2P() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Vorbis2P"));
            return _field.Get();
        }
        static void* GetVorbis3() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Vorbis3"));
            return _field.Get();
        }
        static void* GetVorbis3P() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Vorbis3P"));
            return _field.Get();
        }
        static void* GetVselp() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Vselp"));
            return _field.Get();
        }
        static void* GetWAVEFORMATBTVDIGITAL() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_BTV_DIGITAL"));
            return _field.Get();
        }
        static void* GetWAVEFORMATCANOPUSATRAC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_CANOPUS_ATRAC"));
            return _field.Get();
        }
        static void* GetWAVEFORMATCIRRUS() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_CIRRUS"));
            return _field.Get();
        }
        static void* GetWAVEFORMATCREATIVEADPCM() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_CREATIVE_ADPCM"));
            return _field.Get();
        }
        static void* GetWAVEFORMATCREATIVEFASTSPEECH10() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_CREATIVE_FASTSPEECH10"));
            return _field.Get();
        }
        static void* GetWAVEFORMATCREATIVEFASTSPEECH8() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_CREATIVE_FASTSPEECH8"));
            return _field.Get();
        }
        static void* GetWAVEFORMATCSIMAADPCM() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_CS_IMAADPCM"));
            return _field.Get();
        }
        static void* GetWAVEFORMATCS2() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_CS2"));
            return _field.Get();
        }
        static void* GetWAVEFORMATDEVELOPMENT() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_DEVELOPMENT"));
            return _field.Get();
        }
        static void* GetWAVEFORMATDFG726() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_DF_G726"));
            return _field.Get();
        }
        static void* GetWAVEFORMATDFGSM610() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_DF_GSM610"));
            return _field.Get();
        }
        static void* GetWAVEFORMATDIGITALG723() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_DIGITAL_G723"));
            return _field.Get();
        }
        static void* GetWAVEFORMATDOLBYAC3SPDIF() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_DOLBY_AC3_SPDIF"));
            return _field.Get();
        }
        static void* GetWAVEFORMATDSATDISPLAY() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_DSAT_DISPLAY"));
            return _field.Get();
        }
        static void* GetWAVEFORMATDVM() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_DVM"));
            return _field.Get();
        }
        static void* GetWAVEFORMATECHOSC3() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_ECHOSC3"));
            return _field.Get();
        }
        static void* GetWAVEFORMATESPCM() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_ESPCM"));
            return _field.Get();
        }
        static void* GetWAVEFORMATESSTAC3() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_ESST_AC3"));
            return _field.Get();
        }
        static void* GetWAVEFORMATFLAC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_FLAC"));
            return _field.Get();
        }
        static void* GetWAVEFORMATFMTOWNSSND() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_FM_TOWNS_SND"));
            return _field.Get();
        }
        static void* GetWAVEFORMATG721ADPCM() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_G721_ADPCM"));
            return _field.Get();
        }
        static void* GetWAVEFORMATG722ADPCM() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_G722_ADPCM"));
            return _field.Get();
        }
        static void* GetWAVEFORMATG726ADPCM() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_G726_ADPCM"));
            return _field.Get();
        }
        static void* GetWAVEFORMATG726ADPCM_f() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_G726ADPCM"));
            return _field.Get();
        }
        static void* GetWAVEFORMATG728CELP() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_G728_CELP"));
            return _field.Get();
        }
        static void* GetWAVEFORMATG729A() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_G729A"));
            return _field.Get();
        }
        static void* GetWAVEFORMATILINKVC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_ILINK_VC"));
            return _field.Get();
        }
        static void* GetWAVEFORMATIPIHSX() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_IPI_HSX"));
            return _field.Get();
        }
        static void* GetWAVEFORMATIPIRPELP() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_IPI_RPELP"));
            return _field.Get();
        }
        static void* GetWAVEFORMATIRAT() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_IRAT"));
            return _field.Get();
        }
        static void* GetWAVEFORMATISIAUDIO() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_ISIAUDIO"));
            return _field.Get();
        }
        static void* GetWAVEFORMATLHCODEC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_LH_CODEC"));
            return _field.Get();
        }
        static void* GetWAVEFORMATLUCENTG723() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_LUCENT_G723"));
            return _field.Get();
        }
        static void* GetWAVEFORMATMALDENPHONYTALK() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_MALDEN_PHONYTALK"));
            return _field.Get();
        }
        static void* GetWAVEFORMATMEDIASONICG723() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_MEDIASONIC_G723"));
            return _field.Get();
        }
        static void* GetWAVEFORMATMSAUDIO1() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_MSAUDIO1"));
            return _field.Get();
        }
        static void* GetWAVEFORMATMSG723() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_MSG723"));
            return _field.Get();
        }
        static void* GetWAVEFORMATMSRT24() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_MSRT24"));
            return _field.Get();
        }
        static void* GetWAVEFORMATMVIMVI2() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_MVI_MVI2"));
            return _field.Get();
        }
        static void* GetWAVEFORMATNMSVBXADPCM() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_NMS_VBXADPCM"));
            return _field.Get();
        }
        static void* GetWAVEFORMATNORRIS() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_NORRIS"));
            return _field.Get();
        }
        static void* GetWAVEFORMATOLIADPCM() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_OLIADPCM"));
            return _field.Get();
        }
        static void* GetWAVEFORMATOLICELP() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_OLICELP"));
            return _field.Get();
        }
        static void* GetWAVEFORMATOLIGSM() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_OLIGSM"));
            return _field.Get();
        }
        static void* GetWAVEFORMATOLIOPR() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_OLIOPR"));
            return _field.Get();
        }
        static void* GetWAVEFORMATOLISBC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_OLISBC"));
            return _field.Get();
        }
        static void* GetWAVEFORMATONLIVE() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_ONLIVE"));
            return _field.Get();
        }
        static void* GetWAVEFORMATPAC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_PAC"));
            return _field.Get();
        }
        static void* GetWAVEFORMATPACKED() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_PACKED"));
            return _field.Get();
        }
        static void* GetWAVEFORMATPHILIPSLPCBB() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_PHILIPS_LPCBB"));
            return _field.Get();
        }
        static void* GetWAVEFORMATPROSODY8KBPS() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_PROSODY_8KBPS"));
            return _field.Get();
        }
        static void* GetWAVEFORMATQDESIGNMUSIC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_QDESIGN_MUSIC"));
            return _field.Get();
        }
        static void* GetWAVEFORMATQUALCOMMHALFRATE() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_QUALCOMM_HALFRATE"));
            return _field.Get();
        }
        static void* GetWAVEFORMATQUALCOMMPUREVOICE() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_QUALCOMM_PUREVOICE"));
            return _field.Get();
        }
        static void* GetWAVEFORMATQUARTERDECK() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_QUARTERDECK"));
            return _field.Get();
        }
        static void* GetWAVEFORMATRAWAAC1() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_RAW_AAC1"));
            return _field.Get();
        }
        static void* GetWAVEFORMATRAWSPORT() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_RAW_SPORT"));
            return _field.Get();
        }
        static void* GetWAVEFORMATRHETOREXADPCM() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_RHETOREX_ADPCM"));
            return _field.Get();
        }
        static void* GetWAVEFORMATROCKWELLADPCM() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_ROCKWELL_ADPCM"));
            return _field.Get();
        }
        static void* GetWAVEFORMATROCKWELLDIGITALK() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_ROCKWELL_DIGITALK"));
            return _field.Get();
        }
        static void* GetWAVEFORMATRT24() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_RT24"));
            return _field.Get();
        }
        static void* GetWAVEFORMATSANYOLDADPCM() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_SANYO_LD_ADPCM"));
            return _field.Get();
        }
        static void* GetWAVEFORMATSBC24() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_SBC24"));
            return _field.Get();
        }
        static void* GetWAVEFORMATSIPROLABACELP4800() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_SIPROLAB_ACELP4800"));
            return _field.Get();
        }
        static void* GetWAVEFORMATSIPROLABACELP8V3() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_SIPROLAB_ACELP8V3"));
            return _field.Get();
        }
        static void* GetWAVEFORMATSIPROLABACEPLNET() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_SIPROLAB_ACEPLNET"));
            return _field.Get();
        }
        static void* GetWAVEFORMATSIPROLABG729() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_SIPROLAB_G729"));
            return _field.Get();
        }
        static void* GetWAVEFORMATSIPROLABG729A() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_SIPROLAB_G729A"));
            return _field.Get();
        }
        static void* GetWAVEFORMATSIPROLABKELVIN() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_SIPROLAB_KELVIN"));
            return _field.Get();
        }
        static void* GetWAVEFORMATSOFTSOUND() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_SOFTSOUND"));
            return _field.Get();
        }
        static void* GetWAVEFORMATSONYSCX() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_SONY_SCX"));
            return _field.Get();
        }
        static void* GetWAVEFORMATSOUNDSPACEMUSICOMPRESS() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_SOUNDSPACE_MUSICOMPRESS"));
            return _field.Get();
        }
        static void* GetWAVEFORMATTPC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_TPC"));
            return _field.Get();
        }
        static void* GetWAVEFORMATTUBGSM() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_TUBGSM"));
            return _field.Get();
        }
        static void* GetWAVEFORMATUHERADPCM() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_UHER_ADPCM"));
            return _field.Get();
        }
        static void* GetWAVEFORMATUNISYSNAP16K() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_UNISYS_NAP_16K"));
            return _field.Get();
        }
        static void* GetWAVEFORMATUNISYSNAPADPCM() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_UNISYS_NAP_ADPCM"));
            return _field.Get();
        }
        static void* GetWAVEFORMATUNISYSNAPALAW() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_UNISYS_NAP_ALAW"));
            return _field.Get();
        }
        static void* GetWAVEFORMATUNISYSNAPULAW() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_UNISYS_NAP_ULAW"));
            return _field.Get();
        }
        static void* GetWAVEFORMATVIVOG723() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_VIVO_G723"));
            return _field.Get();
        }
        static void* GetWAVEFORMATVIVOSIREN() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_VIVO_SIREN"));
            return _field.Get();
        }
        static void* GetWAVEFORMATVMEVMPCM() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_VME_VMPCM"));
            return _field.Get();
        }
        static void* GetWAVEFORMATVOXWARE() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_VOXWARE"));
            return _field.Get();
        }
        static void* GetWAVEFORMATVOXWAREAC10() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_VOXWARE_AC10"));
            return _field.Get();
        }
        static void* GetWAVEFORMATVOXWAREAC16() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_VOXWARE_AC16"));
            return _field.Get();
        }
        static void* GetWAVEFORMATVOXWAREAC20() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_VOXWARE_AC20"));
            return _field.Get();
        }
        static void* GetWAVEFORMATVOXWAREAC8() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_VOXWARE_AC8"));
            return _field.Get();
        }
        static void* GetWAVEFORMATVOXWAREBYTEALIGNED() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_VOXWARE_BYTE_ALIGNED"));
            return _field.Get();
        }
        static void* GetWAVEFORMATVOXWARERT24() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_VOXWARE_RT24"));
            return _field.Get();
        }
        static void* GetWAVEFORMATVOXWARERT29() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_VOXWARE_RT29"));
            return _field.Get();
        }
        static void* GetWAVEFORMATVOXWARERT29HW() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_VOXWARE_RT29HW"));
            return _field.Get();
        }
        static void* GetWAVEFORMATVOXWARETQ40() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_VOXWARE_TQ40"));
            return _field.Get();
        }
        static void* GetWAVEFORMATVOXWARETQ60() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_VOXWARE_TQ60"));
            return _field.Get();
        }
        static void* GetWAVEFORMATVOXWAREVR12() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_VOXWARE_VR12"));
            return _field.Get();
        }
        static void* GetWAVEFORMATVOXWAREVR18() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_VOXWARE_VR18"));
            return _field.Get();
        }
        static void* GetWAVEFORMATWMAVOICE9() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_WMAVOICE9"));
            return _field.Get();
        }
        static void* GetWAVEFORMATXEBEC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_XEBEC"));
            return _field.Get();
        }
        static void* GetWAVEFORMATZYXELADPCM() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WAVE_FORMAT_ZYXEL_ADPCM"));
            return _field.Get();
        }
        static void* GetWindowsMediaAudio() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WindowsMediaAudio"));
            return _field.Get();
        }
        static void* GetWindowsMediaAudioLosseless() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WindowsMediaAudioLosseless"));
            return _field.Get();
        }
        static void* GetWindowsMediaAudioProfessional() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WindowsMediaAudioProfessional"));
            return _field.Get();
        }
        static void* GetWindowsMediaAudioSpdif() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WindowsMediaAudioSpdif"));
            return _field.Get();
        }
        static void* GetWmaVoice9() {
            static BNM::Field<void*> _field = GetClass().GetField(O("WmaVoice9"));
            return _field.Get();
        }
        static void* GetYamahaAdpcm() {
            static BNM::Field<void*> _field = GetClass().GetField(O("YamahaAdpcm"));
            return _field.Get();
        }
        template <typename TP0 = void*>
        static ::CSCore::AudioEncoding EncodingFromSubType(TP0 audioSubType) {
            static BNM::Method<::CSCore::AudioEncoding> _m = GetClass().GetMethod(O("EncodingFromSubType"), {"audioSubType"});
            return _m.Call(audioSubType);
        }
        static void* SubTypeFromEncoding(::CSCore::AudioEncoding audioEncoding) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("SubTypeFromEncoding"), {"audioEncoding"});
            return _m.Call(audioEncoding);
        }
    };
}
