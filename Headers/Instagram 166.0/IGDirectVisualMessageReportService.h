//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectVisualMessageViewerEventResponder-Protocol.h>

@class IGWebViewProcessPoolContainer, NSMutableDictionary, NSString;
@protocol IGAPIClient, IGAnalyticsEventLoggingProtocol, IGWebViewDataStoreManaging;

@interface IGDirectVisualMessageReportService : NSObject <IGDirectVisualMessageViewerEventResponder>
{
    NSString *_userPK;
    id <IGAPIClient> _networker;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    id <IGWebViewDataStoreManaging> _webviewDataStoreContainer;
    IGWebViewProcessPoolContainer *_webViewProcessPoolContainer;
    NSMutableDictionary *_lastViewedMediaIdForVisualMessage;
}

- (void).cxx_destruct;
- (void)visualMessageViewerController:(id)arg1 didTapAttributionTooltipWithModel:(id)arg2;
- (void)visualMessageViewerController:(id)arg1 didTapAttributionWithModel:(id)arg2;
- (void)visualMessageViewerController:(id)arg1 didUnpausePlaybackForVisualMessage:(id)arg2 atIndex:(long long)arg3;
- (void)visualMessageViewerController:(id)arg1 didPausePlaybackForVisualMessage:(id)arg2 atIndex:(long long)arg3;
- (void)visualMessageViewerController:(id)arg1 willLoadImageURL:(id)arg2 visualMessage:(id)arg3;
- (void)visualMessageViewerController:(id)arg1 willDismissForNavType:(long long)arg2;
- (void)visualMessageViewerController:(id)arg1 didEndPlaybackForVisualMessage:(id)arg2 atIndex:(long long)arg3 forNavType:(long long)arg4;
- (void)visualMessageViewerController:(id)arg1 didDetectScreenshotForVisualMessage:(id)arg2 atIndex:(long long)arg3;
- (void)visualMessageViewerController:(id)arg1 didFailToLoadMediaForVisualMessage:(id)arg2 atIndex:(long long)arg3 error:(id)arg4 networkRequestSummary:(id)arg5;
- (void)visualMessageViewerController:(id)arg1 didBeginPlaybackForVisualMessage:(id)arg2 atIndex:(long long)arg3;
- (void)visualMessageViewerController:(id)arg1 didFinishLoadingForVisualMessage:(id)arg2 atIndex:(long long)arg3 loadSource:(id)arg4 networkRequestSummary:(id)arg5;
- (void)visualMessageViewerController:(id)arg1 didBeginLoadingForVisualMessage:(id)arg2 atIndex:(long long)arg3;
- (void)_logReportDirectWithThreadId:(id)arg1 messageId:(id)arg2;
- (void)_reportSpamVisualMessageWithId:(id)arg1 threadId:(id)arg2 mediaId:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_reportInappropriateVisualMessageWithId:(id)arg1 threadId:(id)arg2 mediaId:(id)arg3 viewController:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)addReportableVisualMessageMediaId:(id)arg1 itemId:(id)arg2;
- (void)reportVisualMessageWithId:(id)arg1 threadId:(id)arg2 mediaId:(id)arg3 viewController:(id)arg4;
- (_Bool)allowReportForVisualMessageWithId:(id)arg1;
- (id)initWithUserPK:(id)arg1 networker:(id)arg2 analyticsLogger:(id)arg3 webviewDataStoreContainer:(id)arg4 webViewProcessPoolContainer:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

