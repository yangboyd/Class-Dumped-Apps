//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XCXComms : NSObject
{
    struct Handle<std::__1::shared_ptr<xComms::XComms>, std::__1::shared_ptr<xComms::XComms>> _cppRefHandle;
}

+ (id)GetInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)PrepareForVoiceSession;
- (_Bool)GetChatNarrationEnabled;
- (void)SetChatNarrationEnabledAsync:(_Bool)arg1 completion:(id)arg2;
- (_Bool)GetTextToSpeechEnabled;
- (void)SetTextToSpeechEnabledASync:(_Bool)arg1 completion:(id)arg2;
- (void)GetSupportedSpeechProfilesAsync:(id)arg1;
- (void)GetSpeechProfileAsync:(id)arg1;
- (void)SetSpeechProfileAsync:(id)arg1 completion:(id)arg2;
- (void)SendText:(id)arg1 completion:(id)arg2;
- (_Bool)GetTranslationEnabled;
- (void)SetTranslationEnabledAsync:(_Bool)arg1 completion:(id)arg2;
- (_Bool)GetTranscriptionEnabled;
- (void)SetTranscriptionEnabledAsync:(_Bool)arg1 completion:(id)arg2;
- (id)GetLanguageCode;
- (void)SetLanguageCodeAsync:(id)arg1 completion:(id)arg2;
- (id)GetSupportedLanguageCodes;
- (void)GetSelectedAudioOutputDeviceAsync:(id)arg1;
- (void)SetAudioOutputDeviceAsync:(id)arg1 completion:(id)arg2;
- (void)GetAudioOutputDevicesAsync:(id)arg1;
- (void)GetSelectedAudioInputDeviceAsync:(id)arg1;
- (void)SetAudioInputDeviceAsync:(id)arg1 completion:(id)arg2;
- (void)GetAudioInputDevicesAsync:(id)arg1;
- (void)SetAudioEnabledAsync:(_Bool)arg1 completion:(id)arg2;
- (float)GetVoiceSessionVolume;
- (void)SetVoiceSessionVolume:(float)arg1;
- (_Bool)IsSessionMuted;
- (void)UnmuteVoiceSession;
- (void)MuteVoiceSession;
- (float)GetMemberVolume:(id)arg1;
- (void)SetMemberVolume:(id)arg1 volume:(float)arg2;
- (_Bool)IsMemberMuted:(id)arg1;
- (void)UnmuteMember:(id)arg1;
- (void)MuteMember:(id)arg1;
- (void)KickMember:(id)arg1;
- (id)GetRoster;
- (void)SetLfgCustomDataAsync:(id)arg1 completion:(id)arg2;
- (long long)GetJoinability;
- (void)SetJoinabilityAsync:(long long)arg1 completion:(id)arg2;
- (void)SetAudioIsAllowedInBroadcast:(_Bool)arg1;
- (int)GetRemainingCapacity;
- (id)GetSessionId;
- (_Bool)IsSessionActive;
- (id)GetConversationDetails;
- (void)InviteToVoiceSessionAsync:(id)arg1 xuids:(id)arg2 completion:(id)arg3;
- (void)LeaveVoiceSessionAsync:(id)arg1;
- (void)AcceptVoiceSessionInviteAsync:(id)arg1 handleId:(id)arg2 completion:(id)arg3;
- (void)JoinVoiceSessionAsync:(id)arg1 sessionId:(id)arg2 completion:(id)arg3;
- (void)CreateLegacyVoiceSessionAsync:(id)arg1 completion:(id)arg2;
- (void)CreateConversationVoiceSessionAsync:(id)arg1 sessionId:(id)arg2 conversationData:(id)arg3 completion:(id)arg4;
- (void)TearDown;
- (void)Initialize:(id)arg1 playFabTitleId:(id)arg2 completion:(id)arg3;
- (id)initWithCpp:(const shared_ptr_e10bb4df *)arg1;

@end

