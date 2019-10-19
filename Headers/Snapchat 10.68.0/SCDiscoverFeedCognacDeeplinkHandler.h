//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacNotificationHandling-Protocol.h"
#import "SCCognacOperaPresenterDelegate-Protocol.h"

@class NSString, SCLazy, SCUserSession, UIViewController;
@protocol NavigationDelegate;

@interface SCDiscoverFeedCognacDeeplinkHandler : NSObject <SCCognacOperaPresenterDelegate, SCCognacNotificationHandling>
{
    SCUserSession *_userSession;
    UIViewController *_presentingViewController;
    id <NavigationDelegate> _deepLinkNavigationDelegate;
    SCLazy *_cognacOperaPresenter;
}

- (void).cxx_destruct;
- (void)cognacOperaPresenter:(id)arg1 willDismissViewerWithParticipantInfo:(id)arg2;
- (void)cognacOperaPresenterDidFinishDismissViewer:(id)arg1;
- (void)cognacOperaPresenterDidBeginPresentViewer:(id)arg1;
- (void)cognacOperaPresenter:(id)arg1 didFinishPresentViewerWithPlayerItem:(id)arg2;
- (_Bool)cognacHandleNotificationPressed:(id)arg1;
- (_Bool)cognacHandleNotificationDismissed:(id)arg1;
- (id)activeCognacAppSessionId;
- (void)processCognacAppDeepLinkWithDeelLinkURL:(id)arg1;
- (_Bool)isPresentingApp;
- (id)initWithUserSession:(id)arg1 presentingViewController:(id)arg2 deepLinkNavigationDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

