//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ANXNavigationService-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol AMIAppNavigationService, ANXMetricsService;

@interface ANPNavigationServiceImpl : NSObject <ANXNavigationService>
{
    NSMutableDictionary *_navActions;
    id <AMIAppNavigationService> _appNavigationService;
    id <ANXMetricsService> _metricsService;
}

@property(retain, nonatomic) id <ANXMetricsService> metricsService; // @synthesize metricsService=_metricsService;
@property(retain, nonatomic) id <AMIAppNavigationService> appNavigationService; // @synthesize appNavigationService=_appNavigationService;
@property(retain, nonatomic) NSMutableDictionary *navActions; // @synthesize navActions=_navActions;
- (void).cxx_destruct;
- (void)handleYOBAYLYAUrl:(id)arg1 info:(id)arg2;
- (void)handleMShopExternalLink:(id)arg1;
- (void)handleSystemDeeplink:(id)arg1;
- (void)handleNativeUrl:(id)arg1 info:(id)arg2;
- (void)handleSmashUrl:(id)arg1 replaceTop:(_Bool)arg2;
- (void)handleSmashUrl:(id)arg1;
- (id)manageBrowseUrl:(id)arg1;
- (_Bool)isBrowseUrl:(id)arg1 info:(id)arg2;
- (void)removeNavAction:(id)arg1;
- (void)addNavAction:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)navigateByUrl:(id)arg1 info:(id)arg2;
- (void)initialize;
- (id)initWithAppNavigationService:(id)arg1 metricsService:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

