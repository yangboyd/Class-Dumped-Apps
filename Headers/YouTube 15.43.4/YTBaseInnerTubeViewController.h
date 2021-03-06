//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTHelpKitContextProvider-Protocol.h>
#import <Module_Framework/YTInnerTubeRequestorResponderProvider-Protocol.h>
#import <Module_Framework/YTScrollToModelProtocol-Protocol.h>
#import <Module_Framework/YTTopScrolling-Protocol.h>

@class GIMMe, NSString;
@protocol YTInnerTubeUIService, YTResponder, YTResponseViewController;

@interface YTBaseInnerTubeViewController : UIViewController <YTHelpKitContextProvider, YTScrollToModelProtocol, YTInnerTubeRequestorResponderProvider, YTTopScrolling>
{
    _Bool _isResponseError;
    _Bool _receivedInitialResponse;
    _Bool _receivedResponse;
    _Bool _refreshing;
    _Bool _hasPageStyleOverride;
    id <YTResponder> _parentResponder;
    UIViewController<YTResponseViewController> *_responseViewController;
    GIMMe *_gimme;
    long long _pageStyleOverride;
    id <YTInnerTubeUIService> _service;
    id _response;
    id _request;
    unsigned long long _requestCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(retain, nonatomic) id request; // @synthesize request=_request;
@property(readonly, nonatomic) id response; // @synthesize response=_response;
@property(readonly, nonatomic) id <YTInnerTubeUIService> service; // @synthesize service=_service;
@property(nonatomic) long long pageStyleOverride; // @synthesize pageStyleOverride=_pageStyleOverride;
@property(nonatomic) _Bool hasPageStyleOverride; // @synthesize hasPageStyleOverride=_hasPageStyleOverride;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)clearCaches;
- (_Bool)retryRequest;
- (void)makeRequestForRefresh:(_Bool)arg1 disablePrepareToRefresh:(_Bool)arg2;
- (void)makeRefreshRequest;
- (void)makeRequest;
- (void)createResponseViewController;
- (void)prepareResponseViewControllerForNewRequest;
- (void)didAddResponseViewController;
- (void)willRemoveResponseViewController;
- (id)helpKitContext;
- (_Bool)isResponseError;
- (_Bool)selectModelMatchingBlock:(CDUnknownBlockType)arg1;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)loadWithModel:(id)arg1;
- (void)scrollToTopAndPullToRefresh;
- (void)scrollToTop;
@property(readonly, nonatomic) UIViewController<YTResponseViewController> *responseViewController; // @synthesize responseViewController=_responseViewController;
- (_Bool)scrollToSectionIdentifier:(id)arg1;
- (void)loadWithError:(id)arg1;
- (void)refreshWithRequest:(id)arg1;
- (_Bool)refreshPreviousRequestWithDisableRefreshSpinner:(_Bool)arg1;
- (void)loadWithResponse:(id)arg1;
- (void)loadWithInitialResponse:(id)arg1;
- (void)loadWithRequest:(id)arg1;
- (void)loadView;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

