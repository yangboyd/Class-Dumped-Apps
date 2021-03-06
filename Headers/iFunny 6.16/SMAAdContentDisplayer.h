//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SKStoreProductViewControllerDelegate-Protocol.h>
#import <Funny/SMAWebBrowserDelegate-Protocol.h>

@class NSString, SKStoreProductViewController, SMAAdDisplayProgressView, SMASKAdNetwork, SMAURLResolver, SMAWebBrowser;
@protocol SMAAdDisplayerDelegate;

@interface SMAAdContentDisplayer : NSObject <SMAWebBrowserDelegate, SKStoreProductViewControllerDelegate>
{
    _Bool _isURLProcessed;
    _Bool _mandatoryHandling;
    id <SMAAdDisplayerDelegate> _delegate;
    SMAAdDisplayProgressView *_progressView;
    SMAWebBrowser *_webBrowser;
    SMAURLResolver *_urlResolver;
    SKStoreProductViewController *_appStoreVC;
    SMASKAdNetwork *_skAdNetwork;
}

@property(retain, nonatomic) SMASKAdNetwork *skAdNetwork; // @synthesize skAdNetwork=_skAdNetwork;
@property(retain, nonatomic) SKStoreProductViewController *appStoreVC; // @synthesize appStoreVC=_appStoreVC;
@property(retain, nonatomic) SMAURLResolver *urlResolver; // @synthesize urlResolver=_urlResolver;
@property(retain, nonatomic) SMAWebBrowser *webBrowser; // @synthesize webBrowser=_webBrowser;
@property(retain, nonatomic) SMAAdDisplayProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) _Bool mandatoryHandling; // @synthesize mandatoryHandling=_mandatoryHandling;
@property(nonatomic) _Bool isURLProcessed; // @synthesize isURLProcessed=_isURLProcessed;
@property(nonatomic) __weak id <SMAAdDisplayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)webBrowserDidFinish:(id)arg1;
- (void)endDisplay;
- (void)postMortemAction;
- (id)parametersForInstallVerificationForItunesItem:(id)arg1;
- (void)openAppStoreProduct:(id)arg1;
- (void)openURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)openDeepLink:(id)arg1;
- (void)openHttpLinkInInternalBrowser:(id)arg1;
- (void)openHttpLink:(id)arg1;
- (void)displayResolvedURL:(id)arg1 unresolvedURL:(id)arg2 error:(id)arg3;
- (void)displayAdForURL:(id)arg1 mandatoryHandling:(_Bool)arg2 withSKAdNetwork:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

