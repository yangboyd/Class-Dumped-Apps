//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JETInsightsAnalyticsManager : NSObject
{
}

+ (void)analyticsRecordInvalidInsightInAppLinkEvent:(id)arg1;
+ (void)analyticsRecordInsightInAppLinkEvent:(id)arg1;
+ (void)analyticsRecordInvalidInsightActionEvent:(id)arg1;
+ (void)analyticsRecordInsightActionEvent:(id)arg1;
+ (void)analyticsRecordDynamicCardUpdatedEvent:(id)arg1;
+ (void)analyticsRecordInplaceRenderActionFailEvent;
+ (void)analyticsRecordInplaceRenderActionSuccessEvent;
+ (void)analyticsRecordDismissCardFailEvent;
+ (void)analyticsRecordDismissCardSuccessEvent;
+ (void)analyticsRecordDownloadImageFailEvent;
+ (void)analyticsRecordDownloadImageSuccessEvent;
+ (void)analyticsRecordCardDisplayEvent:(id)arg1;
+ (void)analyticsRecordInsightDetailsWithType:(id)arg1 state:(id)arg2;
+ (void)analyticsRecordInsightDetails:(id)arg1;

@end

