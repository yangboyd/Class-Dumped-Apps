//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDABaseActionTracker.h"

@interface GDASharingActionTracker : GDABaseActionTracker
{
}

- (void)sendLatencyImpressionForCode:(long long)arg1 fromNotification:(id)arg2;
- (int)shareDialogEntryTypeFromNotification:(id)arg1;
- (id)impressionDetailsFromNotification:(id)arg1;
- (void)sendInstantImpressionWithCode:(long long)arg1 fromNotification:(id)arg2;
- (void)observeInstantImpressionsInTrackingNotifications:(id)arg1 identityKey:(id)arg2;
- (void)subscribe;

@end

