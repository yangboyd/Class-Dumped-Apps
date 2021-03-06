//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKShortcutsLogging-Protocol.h"

@class NSString;
@protocol GDKShortcutsImpressionNotificationManaging;

@interface GDKShortcutsLogger : NSObject <GDKShortcutsLogging>
{
    NSString *_userID;
    id <GDKShortcutsImpressionNotificationManaging> _notificationManager;
}

+ (id)notificationNameForEvent:(int)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <GDKShortcutsImpressionNotificationManaging> notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void)logInstantImpressionWithState:(id)arg1;
- (id)initWithUserID:(id)arg1 notificationManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

