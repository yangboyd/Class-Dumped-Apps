//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASIdentifierManager, NSString;

@interface SCAdLogger : NSObject
{
    ASIdentifierManager *_asIdentifierManager;
}

+ (void)_populatePublisherAdBaseViewWithParams:(id)arg1 event:(id)arg2;
+ (void)_logPublisherAdLongformViewWithParams:(id)arg1 event:(id)arg2;
+ (void)logPublisherAdSkipWithParams:(id)arg1;
+ (void)logPublisherAdReportViewWithParams:(id)arg1;
+ (void)logPublisherAdScreenshotLongformViewWithParams:(id)arg1;
+ (void)logPublisherAdScreenshotTopSnapViewWithParams:(id)arg1;
+ (void)logPublisherAdShareSendLongformViewWithParams:(id)arg1;
+ (void)logPublisherAdShareSendTopSnapViewWithParams:(id)arg1;
+ (void)logPublisherAdShareCreateLongformViewWithParams:(id)arg1;
+ (void)logPublisherAdShareCreateTopSnapViewWithParams:(id)arg1;
+ (void)logPublisherAdCameraViewWithParams:(id)arg1;
+ (void)logPublisherAdLongformVideoViewWithParams:(id)arg1;
+ (void)logPublisherAdAppInstallAttachmentWithParams:(id)arg1;
+ (void)logPublisherAdWebViewWithParams:(id)arg1;
+ (void)logPublisherAdTopSnapViewWithParams:(id)arg1;
+ (void)logAdStoryViewWithParams:(id)arg1;
+ (void)logStoryAdScreenShotViewWithParams:(id)arg1;
+ (void)logStoryAdShareViewWithParams:(id)arg1;
+ (void)logStoryAdReportViewWithParams:(id)arg1;
+ (double)_roundCGFloat:(double)arg1;
+ (void)_logStoryAdCommonViewWithParams:(id)arg1 event:(id)arg2;
+ (void)logStoryAdCameraViewWithParams:(id)arg1;
+ (void)logStoryAdLongformVideoViewWithParams:(id)arg1;
+ (void)logStoryAdAppInstallAttachmentWithParams:(id)arg1;
+ (void)logStoryAdWebViewWithParams:(id)arg1;
+ (void)logStoryAdTopSnapViewWithParams:(id)arg1;
+ (void)logAdInserted:(id)arg1;
+ (void)logAdOpportunity:(id)arg1;
+ (id)_generateChatAdViewWithParams:(id)arg1;
+ (void)_populateAudioData:(id)arg1 fireEvent:(id)arg2;
+ (void)logChatStoryAdShareViewWithParams:(id)arg1;
+ (void)logChatAdShareLongformVideoViewWithParams:(id)arg1;
+ (void)logChatAdShareAppInstallAttachmentViewWithParams:(id)arg1;
+ (void)logChatAdShareLongformRemoteWebpageViewWithParams:(id)arg1;
+ (void)logChatAdShareTopSnapViewWithParams:(id)arg1;
+ (id)shared;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *deviceAdvertiserIdString;

@end

