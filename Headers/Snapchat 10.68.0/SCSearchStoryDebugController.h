//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDownSwipableViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSString, SCSearchLoadingView, SCSearchSession, UILabel, UIView, UIWebView;
@protocol SCSearchStoryDebugControllerDelegate;

@interface SCSearchStoryDebugController : SCDownSwipableViewController <UIGestureRecognizerDelegate, UIWebViewDelegate>
{
    UIView *_blackView;
    UIWebView *_webView;
    SCSearchLoadingView *_loadingView;
    UILabel *_versionLabel;
    SCSearchSession *_searchSession;
    NSString *_storyId;
    NSString *_snapId;
    NSString *_debugId;
    NSString *_queryId;
    int _type;
    id <SCSearchStoryDebugControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSearchStoryDebugControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)handleBackButtonTap;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGestureRecognizer:(id)arg1;
- (double)downSwipeContentOffsetY;
- (void)downSwipeSucceed;
- (void)dismiss;
- (void)_loadQueryDebugInfo;
- (void)_loadStoryDebugInfo;
- (void)_loadHtmlString:(id)arg1;
- (void)_hideLoadingIndicator;
- (void)_showLoadingIndicator;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithSession:(id)arg1 type:(int)arg2 storyId:(id)arg3 snapId:(id)arg4 debugId:(id)arg5 queryId:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

