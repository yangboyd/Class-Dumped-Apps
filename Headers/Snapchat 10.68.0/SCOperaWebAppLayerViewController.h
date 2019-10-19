//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaWebAppLayerViewDelegate-Protocol.h"
#import "SCOperaWebAppPresenceFrameProvider-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class NSString, SCOperaWebAppConversationViewController, SCOperaWebAppInteractionViewController, SCOperaWebAppLayerView, WKWebViewJavascriptBridge;
@protocol SCOperaWebAppPresenceFrameProvider;

@interface SCOperaWebAppLayerViewController : SCOperaLayerViewController <WKNavigationDelegate, SCOperaWebAppLayerViewDelegate, SCOperaWebAppPresenceFrameProvider>
{
    SCOperaWebAppInteractionViewController *_interactionVC;
    SCOperaWebAppConversationViewController *_conversationVC;
    WKWebViewJavascriptBridge *_bridge;
    id <SCOperaWebAppPresenceFrameProvider> _layerPresenceFrameProvider;
}

- (void).cxx_destruct;
- (struct CGRect)presenceRectWithUsername:(id)arg1 containerView:(id)arg2;
- (void)webAppLayerViewDidFinishLoadRequestWithLoggingParams:(id)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (id)conversationVC;
- (void)_updateChildVCsForFriendsWithLayer:(id)arg1;
- (void)_updateWithLayer:(id)arg1;
- (void)_announceJSBridgeInitialization:(id)arg1;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_addChildVC:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SCOperaWebAppLayerView *view; // @dynamic view;

@end

