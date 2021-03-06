//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IESLiveWebViewControllerProtocol-Protocol.h"
#import "IESLiveWebViewDelegate-Protocol.h"

@class IESLiveNavigationBar, IESLiveWebViewControllerConfig, IESLiveWebViewNetworkErrorView, IESLiveWebpLoadingView, NSString, UIView;
@protocol IESLiveAudienceRoomAwareness, IESLiveEnvironment, IESLiveRoomService, IESLiveShareService, IESLiveWebViewControllerCloseHandler, IESLiveWebViewControllerVisibilityDelegate, IESLiveWebViewFactory, IESLiveWebViewProtocol, IESLiveWebViewService;

@interface IESLiveWebViewController : UIViewController <IESLiveWebViewControllerProtocol, IESLiveWebViewDelegate>
{
    _Bool _isFailed;
    _Bool _firstLoadRequest;
    _Bool _shouldKeepOffline;
    _Bool _statusBarOriginalHidden;
    IESLiveNavigationBar *_navigationBar;
    NSString *_urlString;
    CDUnknownBlockType _didFinishLoadingBlock;
    id <IESLiveWebViewControllerVisibilityDelegate> _visibilityDelegate;
    id <IESLiveWebViewControllerCloseHandler> _closeHandler;
    UIView<IESLiveWebViewProtocol> *_webView;
    UIView *_placeHolderView;
    IESLiveWebpLoadingView *_loadingIndicator;
    IESLiveWebViewNetworkErrorView *_errorView;
    IESLiveWebViewControllerConfig *_config;
    NSString *_titleString;
    id <IESLiveWebViewService> _webViewService;
    id <IESLiveWebViewFactory> _webViewFactory;
    id <IESLiveShareService> _shareService;
    id <IESLiveRoomService> _roomService;
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveAudienceRoomAwareness> _roomAwarenessw;
}

@property(nonatomic) _Bool statusBarOriginalHidden; // @synthesize statusBarOriginalHidden=_statusBarOriginalHidden;
@property(retain, nonatomic) id <IESLiveAudienceRoomAwareness> roomAwarenessw; // @synthesize roomAwarenessw=_roomAwarenessw;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <IESLiveRoomService> roomService; // @synthesize roomService=_roomService;
@property(retain, nonatomic) id <IESLiveShareService> shareService; // @synthesize shareService=_shareService;
@property(retain, nonatomic) id <IESLiveWebViewFactory> webViewFactory; // @synthesize webViewFactory=_webViewFactory;
@property(retain, nonatomic) id <IESLiveWebViewService> webViewService; // @synthesize webViewService=_webViewService;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(retain, nonatomic) IESLiveWebViewControllerConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool shouldKeepOffline; // @synthesize shouldKeepOffline=_shouldKeepOffline;
@property(nonatomic) _Bool firstLoadRequest; // @synthesize firstLoadRequest=_firstLoadRequest;
@property(retain, nonatomic) IESLiveWebViewNetworkErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) IESLiveWebpLoadingView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIView *placeHolderView; // @synthesize placeHolderView=_placeHolderView;
@property(retain, nonatomic) UIView<IESLiveWebViewProtocol> *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <IESLiveWebViewControllerCloseHandler> closeHandler; // @synthesize closeHandler=_closeHandler;
@property(nonatomic) __weak id <IESLiveWebViewControllerVisibilityDelegate> visibilityDelegate; // @synthesize visibilityDelegate=_visibilityDelegate;
@property(copy, nonatomic) CDUnknownBlockType didFinishLoadingBlock; // @synthesize didFinishLoadingBlock=_didFinishLoadingBlock;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) IESLiveNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) _Bool isFailed; // @synthesize isFailed=_isFailed;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)isWhiteListUrl:(id)arg1;
- (void)closeWithCompletionn:(CDUnknownBlockType)arg1;
- (void)goBack;
- (id)webViewScene;
- (void)iesLiveWebViewCancelLoading:(id)arg1;
- (void)iesLiveWebView:(id)arg1 injectShareInfo:(id)arg2;
- (void)iesLiveWebViewClose:(id)arg1 closeWay:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)iesLiveWebViewClose:(id)arg1 keepOffline:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)iesLiveWebViewDidFinishLoad:(id)arg1;
- (void)iesLiveWebView:(id)arg1 loadFailWithError:(id)arg2;
- (void)iesLiveWebViewDidStartLoad:(id)arg1;
- (_Bool)iesLiveWebView:(id)arg1 shouldStartLoadWithRequest:(id)arg2;
- (void)dismissKeyboard:(id)arg1;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)stopLoading;
- (_Bool)isLoading;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_loadRequestURL:(id)arg1;
- (void)_loadRequestURL:(id)arg1 withStatusHeight:(double)arg2;
- (void)__addNavigationView;
- (void)setStatusBarBackgroundColor:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRequestURL:(id)arg1 webViewTitle:(id)arg2 config:(id)arg3;
- (id)initWithRequestURL:(id)arg1 webViewTitle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

