//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;

@interface SCAppNotificationBatcher : NSObject
{
    NSMutableDictionary *_batchedNotifications;
    CDUnknownBlockType _dispatchBlock;
    NSDate *_lastDispatchedNotificationDate;
}

- (void).cxx_destruct;
- (void)cancelPendingNotifications;
- (void)removeNotification:(id)arg1;
- (void)postNotifications;
- (_Bool)shouldDispatchNotifications;
- (void)addNotification:(id)arg1;
- (id)initWithDispatchBlock:(CDUnknownBlockType)arg1;

@end

