//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IESLiveMTInteractRemoteVideoStats, IESLiveMTInteractRtcStats, IESLiveMTInteractSession, IESLiveMTInteractStreamLayout, NSDictionary, NSError, NSString;
@protocol IESLiveMTInteractPushStreaming;

@protocol IESLiveMTInteractStreamDelegate <NSObject>
- (void)interactClientConnectionDidInterrupted:(id <IESLiveMTInteractPushStreaming>)arg1;
- (void)interactClientConnectionDidLost:(id <IESLiveMTInteractPushStreaming>)arg1;
- (void)interactClient:(id <IESLiveMTInteractPushStreaming>)arg1 connectionStateChanged:(_Bool)arg2;
- (void)interactClient:(id <IESLiveMTInteractPushStreaming>)arg1 didOccurError:(NSError *)arg2;
- (void)interactClient:(id <IESLiveMTInteractPushStreaming>)arg1 updateLayoutOfSessionViews:(_Bool)arg2;
- (void)interactClient:(id <IESLiveMTInteractPushStreaming>)arg1 updateLayoutOfPublisher:(IESLiveMTInteractStreamLayout *)arg2;
- (void)interactClient:(id <IESLiveMTInteractPushStreaming>)arg1 newSessionCreated:(IESLiveMTInteractSession *)arg2 local:(_Bool)arg3;
- (void)interactClient:(id <IESLiveMTInteractPushStreaming>)arg1 didJoinChannel:(NSString *)arg2 withUid:(NSString *)arg3 elapsed:(long long)arg4;
- (void)interactClientDidLeaveChannel:(id <IESLiveMTInteractPushStreaming>)arg1 withStats:(IESLiveMTInteractRtcStats *)arg2;
- (void)interactClientWillLeaveChannel:(id <IESLiveMTInteractPushStreaming>)arg1;

@optional
- (void)interactClient:(id <IESLiveMTInteractPushStreaming>)arg1 didVideoEnabled:(_Bool)arg2 byUid:(NSString *)arg3;
- (void)interactClient:(id <IESLiveMTInteractPushStreaming>)arg1 firstRemoteAudioFrameOfUid:(NSString *)arg2 elapsed:(long long)arg3;
- (void)interactClient:(id <IESLiveMTInteractPushStreaming>)arg1 firstLocalAudioFrame:(long long)arg2;
- (void)interactClient:(id <IESLiveMTInteractPushStreaming>)arg1 reportLogLevel:(int)arg2 filename:(NSString *)arg3 tag:(NSString *)arg4 line:(int)arg5 funcName:(NSString *)arg6 format:(NSString *)arg7;
- (void)interactClient:(id <IESLiveMTInteractPushStreaming>)arg1 reportToTTMonitorData:(NSDictionary *)arg2 logTypeStr:(NSString *)arg3;
- (void)interactClient:(id <IESLiveMTInteractPushStreaming>)arg1 firstRemoteVideoDecodedOfUid:(NSString *)arg2 size:(struct CGSize)arg3 elapsed:(long long)arg4;
- (void)interactClient:(id <IESLiveMTInteractPushStreaming>)arg1 didOfflineOfUid:(NSString *)arg2 reason:(unsigned long long)arg3;
- (void)interactClient:(id <IESLiveMTInteractPushStreaming>)arg1 publishVideoStats:(IESLiveMTInteractRtcStats *)arg2;
- (void)interactClient:(id <IESLiveMTInteractPushStreaming>)arg1 remoteVideoStats:(IESLiveMTInteractRemoteVideoStats *)arg2;
@end

