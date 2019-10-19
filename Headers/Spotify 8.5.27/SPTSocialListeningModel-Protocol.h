//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTSocialListeningModelObserver;

@protocol SPTSocialListeningModel <NSObject>
@property(nonatomic) _Bool currentActiveDeviceIsSocialConnectDevice;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) unsigned long long connectedParticipants;
@property(readonly, nonatomic, getter=isSessionHost) _Bool sessionHost;
- (void)removeObserver:(id <SPTSocialListeningModelObserver>)arg1;
- (void)addObserver:(id <SPTSocialListeningModelObserver>)arg1;
- (void)leaveSession;
- (void)joinSession:(NSURL *)arg1;
- (void)loadSession:(_Bool)arg1;
@end

