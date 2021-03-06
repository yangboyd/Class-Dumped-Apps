//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString, XCAudioConsentCallback, XCAudioDeviceInfo, XCConversationData, XCPartyMemberStatus, XCTextMessage, XCTokenAndSignatureCallback;

@protocol XCIXCommsDelegate
- (void)OnLfgCustomDataChanged:(NSString *)arg1;
- (void)OnSessionIdChanged:(NSString *)arg1;
- (void)OnAudioWillBeBroadcasted:(XCAudioConsentCallback *)arg1;
- (void)OnJoinabilityChanged:(long long)arg1;
- (void)OnConversationDetailsChanged:(XCConversationData *)arg1;
- (void)OnAudioOutputDeviceChanged:(XCAudioDeviceInfo *)arg1;
- (void)OnAudioInputDeviceChanged:(XCAudioDeviceInfo *)arg1;
- (void)OnMemberStatusChanged:(XCPartyMemberStatus *)arg1;
- (void)OnMemberLeft:(NSString *)arg1 reason:(long long)arg2;
- (void)OnMemberJoined:(NSString *)arg1;
- (void)OnTextReceived:(XCTextMessage *)arg1;
- (void)GetTokenAndSignature:(NSString *)arg1 forceRefresh:(_Bool)arg2 completion:(XCTokenAndSignatureCallback *)arg3;
- (void)OnAudioDevicesChanged;
- (void)OnFatalError:(long long)arg1;
- (void)LogTelemetry:(long long)arg1 eventName:(NSString *)arg2 payload:(NSDictionary *)arg3;
- (void)Log:(long long)arg1 message:(NSString *)arg2;
@end

