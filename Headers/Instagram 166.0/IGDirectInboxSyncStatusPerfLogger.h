//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectRealtimeIrisSyncStatusListener-Protocol.h>

@class IGDirectInboxNavigationPerfComponents, IGDirectInboxStartupAnalyzer, NSString;
@protocol IGDirectRealtimeIrisSyncStatusQuerying;

@interface IGDirectInboxSyncStatusPerfLogger : NSObject <IGDirectRealtimeIrisSyncStatusListener>
{
    IGDirectInboxNavigationPerfComponents *_navPerfComponents;
    IGDirectInboxStartupAnalyzer *_startupAnalyzer;
    id <IGDirectRealtimeIrisSyncStatusQuerying> _irisSyncStatusProvider;
}

- (void).cxx_destruct;
- (void)irisSyncStatusTrackerChangedStatus:(id)arg1;
- (id)initWithPerfComponents:(id)arg1 startupAnalyzer:(id)arg2 irisSyncStatusProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

