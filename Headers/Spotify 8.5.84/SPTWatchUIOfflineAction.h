//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

@class NSURL;
@protocol SPTWatchPlatformOfflineManager;

@interface SPTWatchUIOfflineAction : SPAction
{
    id <SPTWatchPlatformOfflineManager> _offlineManager;
    NSURL *_URI;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(readonly, nonatomic) __weak id <SPTWatchPlatformOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
- (_Bool)isOfflineDesiredForURI:(id)arg1;
- (id)execute:(id)arg1;
- (long long)style;
- (id)logEventName;
- (long long)icon;
- (id)iconColor;
- (id)title;
- (id)initWithOfflineManager:(id)arg1 URI:(id)arg2 logContext:(id)arg3;

@end

