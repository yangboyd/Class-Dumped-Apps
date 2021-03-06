//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSString, SPTSearch2Configuration, SPTSearch2RequestParametersProvider, UIViewController;
@protocol SPTSearch2EmptyStatePropertiesProvider, SPTSearch2RootViewControllerProtocol><SPTPageController, SPTSearch2URLProviding, SPTSearch2ViewControllerProtocol><SPTPageController, SPTSearchRecentsDataSourceProviding;

@protocol SPTSearchPlatformService <SPTService>
@property(readonly, nonatomic) id <SPTSearchRecentsDataSourceProviding> recentsDataSourceProvider;
- (id <SPTSearch2URLProviding>)makeURLProviderWithParametersProvider:(SPTSearch2RequestParametersProvider *)arg1 drilldownEntityType:(NSString *)arg2 limit:(unsigned long long)arg3 onDemandSetsEnabled:(_Bool)arg4 musicAndTalkEnabled:(_Bool)arg5;
- (id <SPTSearch2URLProviding>)makeURLProviderWithParametersProvider:(SPTSearch2RequestParametersProvider *)arg1 drilldownEntityType:(NSString *)arg2 limit:(unsigned long long)arg3;
- (id <SPTSearch2EmptyStatePropertiesProvider>)makeEmptyStatePropertiesProviderWithOfflineSearchEnabled:(_Bool)arg1;
- (SPTSearch2RequestParametersProvider *)searchRequestParametersProvider;
- (SPTSearch2Configuration *)makeConfiguration;
- (UIViewController<SPTSearch2ViewControllerProtocol><SPTPageController> *)makeViewControllerWithConfiguration:(SPTSearch2Configuration *)arg1;
- (UIViewController<SPTSearch2RootViewControllerProtocol><SPTPageController> *)makeRootViewControllerWithConfiguration:(SPTSearch2Configuration *)arg1;
@end

