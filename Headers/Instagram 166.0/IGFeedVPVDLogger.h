//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGTimestampContainer, NSString;
@protocol IGScheduler;

@interface IGFeedVPVDLogger : NSObject
{
    NSString *_userID;
    id <IGScheduler> _scheduler;
    IGTimestampContainer *_timestampContainer;
}

+ (id)_cacheFileNameWithUserID:(id)arg1;
+ (id)_readDataFromDiskWithUserID:(id)arg1;
+ (void)_writeDataToDisk:(id)arg1 userID:(id)arg2;
+ (void)_removeDataFromDisk:(id)arg1;
- (void).cxx_destruct;
- (void)_readFromDiskWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_writeToDiskWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (id)_getVPVDDurationEventWithMedia:(id)arg1 carouselIndex:(long long)arg2 module:(id)arg3 maxDuration:(double)arg4 sumDuration:(double)arg5 legacyDuration:(double)arg6 isSponsored:(_Bool)arg7 sponsoredSupportConfiguration:(id)arg8 loggingDelegate:(id)arg9;
- (void)logVPVDDurationWithMedia:(id)arg1 carouselIndex:(long long)arg2 module:(id)arg3 maxDuration:(double)arg4 sumDuration:(double)arg5 legacyDuration:(double)arg6 loggingDelegate:(id)arg7 analyticsLogger:(id)arg8 sponsoredSupportConfiguration:(id)arg9;
- (id)_getVPVDDurationEventWithModule:(id)arg1 prefix:(id)arg2 maxDuration:(double)arg3 sumDuration:(double)arg4 legacyDuration:(double)arg5 loggingExtras:(id)arg6;
- (id)_getVPVDDurationEventWithMedia:(id)arg1 feedItemTracker:(id)arg2 module:(id)arg3 maxDuration:(double)arg4 sumDuration:(double)arg5 legacyDuration:(double)arg6 loggingDelegate:(id)arg7 loggingExtras:(id)arg8 doubleLoggingEnabled:(_Bool)arg9 isSegmentedItem:(_Bool)arg10 sponsoredSupportConfiguration:(id)arg11;
- (void)logVPVDDurationWithNetego:(id)arg1 module:(id)arg2 maxDuration:(double)arg3 sumDuration:(double)arg4 legacyDuration:(double)arg5 extras:(id)arg6 analyticsLogger:(id)arg7;
- (void)logVPVDDurationWithLiveBroadcastPk:(id)arg1 module:(id)arg2 maxDuration:(double)arg3 sumDuration:(double)arg4 legacyDuration:(double)arg5 extras:(id)arg6 analyticsLogger:(id)arg7;
- (void)logVPVDDurationWithMedia:(id)arg1 feedItemTracker:(id)arg2 module:(id)arg3 maxDuration:(double)arg4 sumDuration:(double)arg5 legacyDuration:(double)arg6 loggingDelegate:(id)arg7 extras:(id)arg8 doubleLoggingEnabled:(_Bool)arg9 isSegmentedItem:(_Bool)arg10 analyticsLogger:(id)arg11 sponsoredSupportConfiguration:(id)arg12;
- (id)initWithUserID:(id)arg1 scheduler:(id)arg2;

@end

