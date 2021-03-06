//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSSet, NSString;
@protocol DYNBotString, DYNUser;

@protocol DYNSharedLayerFormatService <NSObject>
- (NSString *)formatMessageFlightTrackingTimestampWithTime:(long long)arg1;
- (NSString *)formatUserSubtextWithUser:(id <DYNUser>)arg1;
- (id <DYNBotString>)formattedBotNames:(NSArray *)arg1;
- (NSString *)formatRoomNameUpdatedMetadataWithInitiator:(NSString *)arg1 roomName:(NSString *)arg2;
- (NSString *)formatCoalescedLeftSystemMessagesWithList:(NSArray *)arg1;
- (NSString *)formatCoalescedLeftSystemMessagesWithSet:(NSSet *)arg1;
- (NSString *)formatCoalescedJoinedSystemMessagesWithList:(NSArray *)arg1;
- (NSString *)formatCoalescedJoinedSystemMessagesWithSet:(NSSet *)arg1;
- (NSString *)incomingWebhookSystemMessageWithInitiator:(NSString *)arg1 incomingWebhookName:(NSString *)arg2 oldIncomingWebhookName:(NSString *)arg3 incomingWebhookChangedType:(int)arg4;
- (id <DYNBotString>)botSystemMessageWithInitiator:(NSString *)arg1 affectedMembers:(NSArray *)arg2 membershipChangedType:(int)arg3;
- (NSString *)systemMessageWithInitiator:(NSString *)arg1 affectedMembers:(NSArray *)arg2 membershipChangedType:(int)arg3;
@end

