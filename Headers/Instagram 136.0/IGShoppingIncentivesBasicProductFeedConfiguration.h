//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGShoppingBasicProductFeedViewControllerConfigurationType-Protocol.h>

@class IGSessionTracker, IGShoppingNavigationAnalyticsContext, IGUserSession, NSDictionary, NSString;

@interface IGShoppingIncentivesBasicProductFeedConfiguration : NSObject <IGShoppingBasicProductFeedViewControllerConfigurationType>
{
    IGUserSession *_userSession;
    NSString *_incentiveId;
    _Bool _disablePullToRefresh;
    IGShoppingNavigationAnalyticsContext *_navigationAnalyticsContext;
    NSString *_title;
    NSString *_subtitle;
    NSString *_analyticsModule;
    NSString *_priorModule;
    NSString *_priorSubmodule;
    long long _entryPoint;
    IGSessionTracker *_shoppingSessionTracker;
    NSDictionary *_loggingExtras;
}

@property(readonly, copy, nonatomic) NSDictionary *loggingExtras; // @synthesize loggingExtras=_loggingExtras;
@property(readonly, copy, nonatomic) IGSessionTracker *shoppingSessionTracker; // @synthesize shoppingSessionTracker=_shoppingSessionTracker;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, copy, nonatomic) NSString *priorSubmodule; // @synthesize priorSubmodule=_priorSubmodule;
@property(readonly, copy, nonatomic) NSString *priorModule; // @synthesize priorModule=_priorModule;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)enableTopPadding;
- (_Bool)disablePullToRefresh;
- (id)rightBarButtonItemWithViewController:(id)arg1;
- (id)productCollectionAnalyticsContext;
- (id)associatedFeedItemForInsights;
- (id)viewpointNamespace;
- (id)productWithContextCardLoggingProviderForViewModel:(id)arg1;
- (id)initialProducts;
- (_Bool)areProductCellsDismissable;
- (id)initWithUserSession:(id)arg1 title:(id)arg2 subtitle:(id)arg3 incentiveId:(id)arg4 disablePullToRefresh:(_Bool)arg5 analyticsModule:(id)arg6 priorModule:(id)arg7 priorSubmodule:(id)arg8 entryPoint:(long long)arg9 shoppingSessionTracker:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

