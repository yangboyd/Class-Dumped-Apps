//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TKChatRaid, _TtC9TwitchKit10RaidStatus;

@protocol TKChatRaidDelegate <NSObject>
- (void)chatRaid:(TKChatRaid *)arg1 cancelledWithStatus:(_TtC9TwitchKit10RaidStatus *)arg2;
- (void)chatRaid:(TKChatRaid *)arg1 firedWithStatus:(_TtC9TwitchKit10RaidStatus *)arg2;
- (void)chatRaid:(TKChatRaid *)arg1 updatedWithStatus:(_TtC9TwitchKit10RaidStatus *)arg2;
- (void)chatRaid:(TKChatRaid *)arg1 startedWithStatus:(_TtC9TwitchKit10RaidStatus *)arg2;
@end

