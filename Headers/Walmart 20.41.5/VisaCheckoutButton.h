//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VisaCheckoutSDK/UIScrollViewDelegate-Protocol.h>
#import <VisaCheckoutSDK/WKNavigationDelegate-Protocol.h>

@class MobileWebViewBridge, NSString, NativeLaunchConfiguration;

@interface VisaCheckoutButton : UIView <UIScrollViewDelegate, WKNavigationDelegate>
{
    _Bool _isReady;
    _Bool _standardStyle;
    _Bool _enableAnimation;
    long long _style;
    UIView *_containerView;
    MobileWebViewBridge *_bridge;
    NativeLaunchConfiguration *_launchConfig;
    CDUnknownBlockType _buttonTappedHandler;
    NSString *_resolvedButtonUrl;
}

+ (id)miniButtonImage;
@property(retain, nonatomic) NSString *resolvedButtonUrl; // @synthesize resolvedButtonUrl=_resolvedButtonUrl;
@property(copy, nonatomic) CDUnknownBlockType buttonTappedHandler; // @synthesize buttonTappedHandler=_buttonTappedHandler;
@property(retain, nonatomic) NativeLaunchConfiguration *launchConfig; // @synthesize launchConfig=_launchConfig;
@property(retain, nonatomic) MobileWebViewBridge *bridge; // @synthesize bridge=_bridge;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool enableAnimation; // @synthesize enableAnimation=_enableAnimation;
@property(nonatomic) _Bool standardStyle; // @synthesize standardStyle=_standardStyle;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)dealloc;
- (void)loadButtonWebview;
- (void)cacheCheckoutButton:(id)arg1;
- (void)onCheckoutWithProfile:(id)arg1 purchaseInfo:(id)arg2 presentingViewController:(id)arg3 onReady:(CDUnknownBlockType)arg4 onButtonTapped:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)onCheckoutWithPurchaseInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onCheckoutWithTotal:(id)arg1 currency:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)buttonTapped;
- (void)setupBridge:(id)arg1;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

