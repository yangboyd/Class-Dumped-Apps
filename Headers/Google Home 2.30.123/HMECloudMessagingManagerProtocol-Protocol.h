//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FIRMessaging, FIRMessagingRemoteMessage, NSString;
@protocol HMECloudMessagingManagerListener;

@protocol HMECloudMessagingManagerProtocol <NSObject>
@property(readonly, nonatomic) NSString *GCMRegistrationToken;
- (void)messaging:(FIRMessaging *)arg1 didReceiveMessage:(FIRMessagingRemoteMessage *)arg2;
- (void)removeListener:(id <HMECloudMessagingManagerListener>)arg1;
- (void)addListener:(id <HMECloudMessagingManagerListener>)arg1;
@end

