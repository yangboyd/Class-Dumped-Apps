//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCScanCardSnapKitDeepLinkDelegate-Protocol.h"
#import "SCSendToDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"

@class NSString, SCImpalaShowProfilePresenter, SCLazy, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCMediaSendTaskManager;

@interface SCScanCardSnapKitDeepLinkActionHandler : NSObject <SCSendToDelegate, SCSendToNavigationDelegate, SCScanCardSnapKitDeepLinkDelegate>
{
    SCUserSession *_userSession;
    id <SCMediaSendTaskManager> _mediaSendTaskManager;
    id <NavigationDelegate> _navigationDelegate;
    UIViewController *_presentingViewController;
    SCLazy *_lazySendToTransitionProvider;
    SCLazy *_lazySendToConfiguration;
    SCImpalaShowProfilePresenter *_showPresenter;
    NSString *_attachmentURLString;
    long long _scanSource;
}

- (void).cxx_destruct;
- (void)_navigateToCameraWithMetadata:(id)arg1 attributionName:(id)arg2 deepLinkURL:(id)arg3 scanSource:(long long)arg4 publisherId:(id)arg5;
- (id)_createLoggingMetadataForScanSource:(long long)arg1;
- (void)dismissSendViewController:(id)arg1;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 storiesPostingConfig:(id)arg3 businessIds:(id)arg4 mischiefs:(id)arg5 businessProfiles:(id)arg6 appStories:(id)arg7 gallery:(_Bool)arg8 inviteRecipientShown:(long long)arg9 additionalText:(id)arg10;
- (void)snapKitDeepLinkCard:(id)arg1 sendToChatWithDeepLinkURL:(id)arg2 attachmentURLString:(id)arg3 attachmentShareMetadata:(id)arg4 scanSource:(long long)arg5;
- (void)snapKitDeepLinkCard:(id)arg1 attachToSnapWithDeepLinkURL:(id)arg2 attachmentURLString:(id)arg3 attachmentShareMetadata:(id)arg4 attributionName:(id)arg5 scanSource:(long long)arg6;
- (void)snapKitDeepLinkCard:(id)arg1 presentPublisherViewControllerWithDeepLinkURL:(id)arg2 attachmentURLString:(id)arg3 attachmentShareMetadata:(id)arg4 publisherBusinessId:(id)arg5 showId:(id)arg6;
- (id)initWithUserSession:(id)arg1 mediaSendTaskManager:(id)arg2 navigationDelegate:(id)arg3 presentingViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

