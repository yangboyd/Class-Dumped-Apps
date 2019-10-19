//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTInstrumentationCurrentPageViewObserver-Protocol.h"
#import "SPTLocalSettingsObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSString, SPTDataLoader, SPTObserverManager;
@protocol SPTAlertInterface, SPTInAppMessagePreviewViewModelObserver, SPTLocalSettings;

@interface SPTInAppMessagePreviewViewModel : NSObject <SPTLocalSettingsObserver, SPTDataLoaderDelegate, SPTInstrumentationCurrentPageViewObserver, SPTPlayerObserver>
{
    _Bool _useDevEndpoint;
    SPTDataLoader *_dataLoader;
    id <SPTAlertInterface> _alertInterface;
    id <SPTLocalSettings> _localSettings;
    SPTObserverManager *_observerManager;
    NSString *_pageURI;
    NSString *_playbackURI;
}

@property(nonatomic) _Bool useDevEndpoint; // @synthesize useDevEndpoint=_useDevEndpoint;
@property(copy, nonatomic) NSString *playbackURI; // @synthesize playbackURI=_playbackURI;
@property(copy, nonatomic) NSString *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)presentAlertWithTitle:(id)arg1 message:(id)arg2;
- (id)getURIForPageView:(id)arg1;
- (void)handleSuccessfulResponse:(id)arg1;
- (void)handleErrorResponse:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)fetchMessageForCreativeID:(id)arg1 triggerType:(id)arg2;
@property(readonly, nonatomic) id <SPTInAppMessagePreviewViewModelObserver> observerNotifierProxy;
- (void)removePreviewViewModelObserver:(id)arg1;
- (void)addPreviewViewModelObserver:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)currentPageViewUpdated:(id)arg1;
- (void)localSettingsDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithDataLoader:(id)arg1 alertInterface:(id)arg2 localSettings:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

