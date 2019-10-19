//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensUsageNotifierProtocol-Protocol.h"
#import "SCLensUsageTrackerProtocol-Protocol.h"

@class NSSet, NSString, SCLensUsageTrackerListenerAnnouncer;
@protocol SCLensPreferences;

@interface SCLensUsageTrackerNotifier : NSObject <SCLensUsageTrackerProtocol, SCLensUsageNotifierProtocol>
{
    id <SCLensPreferences> _preferences;
    SCLensUsageTrackerListenerAnnouncer *_announcer;
    NSString *_userId;
    NSSet *_usedLensIds;
    struct mutex _lock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)usedLensIdsWithLocking:(_Bool)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)usedLensIdsSnapshot;
- (_Bool)wasLensUsedBefore:(id)arg1;
- (void)notifyLensWasUsed:(id)arg1;
- (id)initWithLensPreferences:(id)arg1 userId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

