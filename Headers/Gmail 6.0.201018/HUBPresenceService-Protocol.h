//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, PHSChannel;
@protocol HUBUserPresence;

@protocol HUBPresenceService <NSObject>
- (NSString *)localizedTextForPresenceState:(int)arg1;
- (NSString *)localizedPresenceTextForUserPresence:(id <HUBUserPresence>)arg1;
- (void)subscribeToSelfPresenceWithChannel:(PHSChannel *)arg1;
@end

