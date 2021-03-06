//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol IESLiveAppInfo, IESLiveCloudResourceService, IESLiveCreateViewProtocol, IESLiveHTTPClient, IESLiveMonitor, IESLiveTracker, IESLiveWebImageService, IESLiveWebViewService;

@protocol IESLiveSDKServicesInjector <NSObject>
- (id <IESLiveAppInfo>)provideIESLiveAppInfo;
- (id <IESLiveWebImageService>)provideIESLiveWebImageService;
- (id <IESLiveMonitor>)provideIESLiveMonitor;
- (id <IESLiveTracker>)provideIESLiveTracker;
- (id <IESLiveWebViewService>)provideIESLiveWebViewService;
- (id <IESLiveHTTPClient>)provideIESLiveHTTPClient;

@optional
- (id <IESLiveCloudResourceService>)provideIESLiveCloudResourceService;
- (id <IESLiveCreateViewProtocol>)provideIESLiveCreateViewProtocol;
@end

