//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/STKWKUIDelegate-Protocol.h>
#import <Funny/UIGestureRecognizerDelegate-Protocol.h>
#import <Funny/WKNavigationDelegate-Protocol.h>

@class NSString, UIGestureRecognizer;
@protocol STKWebNavigationDelegate;

@interface STKWebNavigationHandler : NSObject <UIGestureRecognizerDelegate, WKNavigationDelegate, STKWKUIDelegate>
{
    _Bool _webViewLoaded;
    _Bool _userInteractionConfirmed;
    id <STKWebNavigationDelegate> _delegate;
    UIGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool userInteractionConfirmed; // @synthesize userInteractionConfirmed=_userInteractionConfirmed;
@property(retain, nonatomic) UIGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) __weak id <STKWebNavigationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)webViewDidLayout:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleUserInteraction:(id)arg1;
- (void)associateHandlerWithWebView:(id)arg1;
- (void)enableNavigateValidation:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

