//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGDirectMessageOutgoingUpdateAction, IGDirectThreadKey, IGDirectThreadOutgoingUpdateAction, NSDate, NSString;
@protocol IGDirectOutgoingUpdateListener;

@protocol IGDirectOutgoingUpdateSending <NSObject>
- (void)removeListener:(id <IGDirectOutgoingUpdateListener>)arg1;
- (void)addListener:(id <IGDirectOutgoingUpdateListener>)arg1;
- (NSString *)sendThreadUpdate:(IGDirectThreadOutgoingUpdateAction *)arg1 threadKey:(IGDirectThreadKey *)arg2;
- (NSString *)sendMessageUpdate:(IGDirectMessageOutgoingUpdateAction *)arg1 messageId:(NSString *)arg2 threadKey:(IGDirectThreadKey *)arg3 originalMessageClientContext:(NSString *)arg4 sentDate:(NSDate *)arg5;
@end

