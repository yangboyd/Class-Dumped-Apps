//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNotificationDebuggerLogger : NSObject
{
}

+ (id)_getJsonFromDictionary:(id)arg1;
+ (void)logNotificationIgnore:(id)arg1 isSystemNotification:(_Bool)arg2;
+ (void)logNotificationDisplay:(id)arg1 isSystemNotification:(_Bool)arg2;
+ (void)logNotificationOpen:(id)arg1 destinationPage:(id)arg2;
+ (void)logNotificationTapped:(id)arg1;
+ (void)logNotificationDrop:(id)arg1;
+ (void)logBadgeCountUpdate:(long long)arg1;
+ (void)logAppPageChange:(id)arg1 newPageName:(id)arg2;
+ (void)logAppState:(_Bool)arg1;
+ (void)logNotificationRevoke:(id)arg1 revokedNotificationId:(id)arg2;
+ (void)logNotificationProcessorComplete:(id)arg1 processorName:(id)arg2;
+ (void)logNotificationProcessorBegin:(id)arg1 processorName:(id)arg2;
+ (void)logNotificationEndProcessing:(id)arg1;
+ (void)logNotificationBeginProcessing:(id)arg1;

@end

