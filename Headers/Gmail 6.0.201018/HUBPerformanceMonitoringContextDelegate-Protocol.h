//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class PRMMetricExtension;
@protocol GSCAccountsService, HUBPerformanceMonitoringInternalContext;

@protocol HUBPerformanceMonitoringContextDelegate
@property(readonly, nonatomic) int hubConfiguration;
@property(readonly, nonatomic) id <GSCAccountsService> accountsService;
@property(nonatomic) _Bool coldStartupMetricsCaptured;
- (_Bool)isActiveContext:(id <HUBPerformanceMonitoringInternalContext>)arg1;
- (_Bool)accountIdDidChange;
- (PRMMetricExtension *)metricExtensionWithAccountLoadState:(int)arg1 activityLoadState:(int)arg2 entryPoint:(int)arg3 previousView:(int)arg4 currentView:(int)arg5;
- (int)activityLoadStateForPresentedView:(int)arg1;
@end

