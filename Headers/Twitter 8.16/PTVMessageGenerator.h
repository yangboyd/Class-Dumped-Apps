//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PTVMessage;
@protocol OS_dispatch_source, PTVLoggedInUserProtocol;

@interface PTVMessageGenerator : NSObject
{
    PTVMessage *_pendingMuteMessage;
    long long _muteCountdown;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    NSObject<OS_dispatch_source> *_simulateChatTimer;
    NSObject<OS_dispatch_source> *_simulateHeartTimer;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *simulateHeartTimer; // @synthesize simulateHeartTimer=_simulateHeartTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *simulateChatTimer; // @synthesize simulateChatTimer=_simulateChatTimer;
@property(retain, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser; // @synthesize loggedInUser=_loggedInUser;
- (void).cxx_destruct;
- (_Bool)decrementMuteCounterAndTestIfZero;
- (id)popPendingMuteMessage;
- (id)muteForMessage:(id)arg1;
- (id)randomHeart;
- (id)randomChat;
- (void)possiblyMarkMessageForMute:(id)arg1;
- (_Bool)randomBool;
- (id)randomProfileImageURL;
- (id)randomBody;
- (int)randomParticipantIndex;
- (id)randomRemoteID;
- (id)randomUsername;
- (id)randomDisplayName;
- (void)endGeneration;
- (void)beginHeartGenerationAtInterval:(double)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)beginChatGenerationAtInterval:(double)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)newTimerWithInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithLoggedInUser:(id)arg1;

@end

