//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IAInterfaceUnitController-Protocol.h>

@class IAContentController, IAWeakTimer, NSDate, NSHashTable, NSString, UIViewController;
@protocol IAInterfaceRefresher, IAUnitDelegate;

@interface IAUnitController : NSObject <IAInterfaceUnitController>
{
    _Bool _hasFiredImpression;
    _Bool _inNonRefreshableState;
    _Bool _inFS;
    _Bool _hasFiredSessionTimeoutEvent;
    id <IAUnitDelegate> _unitDelegate;
    NSHashTable *_supportedContentControllers;
    IAContentController *_activeContentController;
    UIViewController *_viewController;
    IAWeakTimer *_refreshTimer;
    id <IAInterfaceRefresher> _adRefresher;
    NSDate *_inNonRefreshableStateDate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasFiredSessionTimeoutEvent; // @synthesize hasFiredSessionTimeoutEvent=_hasFiredSessionTimeoutEvent;
@property(retain, nonatomic) NSDate *inNonRefreshableStateDate; // @synthesize inNonRefreshableStateDate=_inNonRefreshableStateDate;
@property(nonatomic) _Bool inFS; // @synthesize inFS=_inFS;
@property(nonatomic) _Bool inNonRefreshableState; // @synthesize inNonRefreshableState=_inNonRefreshableState;
@property(nonatomic) __weak id <IAInterfaceRefresher> adRefresher; // @synthesize adRefresher=_adRefresher;
@property(retain, nonatomic) IAWeakTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(nonatomic) _Bool hasFiredImpression; // @synthesize hasFiredImpression=_hasFiredImpression;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak IAContentController *activeContentController; // @synthesize activeContentController=_activeContentController;
@property(retain, nonatomic) NSHashTable *supportedContentControllers; // @synthesize supportedContentControllers=_supportedContentControllers;
@property(nonatomic) __weak id <IAUnitDelegate> unitDelegate; // @synthesize unitDelegate=_unitDelegate;
- (void)dealloc;
- (void)appDidBecomeInactive:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)treatRefreshTimer:(id)arg1;
- (void)stopRefreshTimer;
- (void)startRefreshTimer;
- (void)adDidExitNonRefreshableState;
- (void)adWillEnterNonRefreshableState;
- (void)dismissAd;
- (void)reset;
- (void)willOpenExternalApp;
- (void)didDismissFullscreen;
- (void)willDismissFullscreen;
- (void)didPresentFullscreen;
- (void)willPresentFullscreen;
- (void)willReportImpression;
- (void)didClick;
- (id)viewControllerForPresentingModalViews;
- (_Bool)isInFS;
- (_Bool)isInBG;
- (void)clean;
- (void)reshowAd;
- (void)cancelRefresh;
- (_Bool)supportsRefresh;
- (_Bool)isReady;
- (void)addSupportedContentController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

