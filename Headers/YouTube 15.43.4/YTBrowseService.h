//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseInnerTubeRequestService.h>

#import <Module_Framework/YTInnerTubeUIServiceWithTimeoutInterval-Protocol.h>

@class GIMMe, NSDate, NSHashTable, NSNumber, NSString, YTApiaryResourceParser, YTUserDefaults;
@protocol YTAdInnerTubeConfig, YTBrowseServiceDelegate;

@interface YTBrowseService : YTBaseInnerTubeRequestService <YTInnerTubeUIServiceWithTimeoutInterval>
{
    id <YTAdInnerTubeConfig> _adInnerTubeConfig;
    YTApiaryResourceParser *_resourceParser;
    NSHashTable *_browseServiceObservers;
    long long _innerTubeBrowseService;
    YTUserDefaults *_userDefaults;
    NSNumber *_deviceNotificationsEnabled;
    NSDate *_lastNotificationsEnabledStatusChangeTime;
    _Bool _handleOnResponseReceivedActions;
    id <YTBrowseServiceDelegate> _delegate;
    GIMMe *_gimme;
}

+ (long long)browseServiceFromConfig;
- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTBrowseServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool handleOnResponseReceivedActions; // @synthesize handleOnResponseReceivedActions=_handleOnResponseReceivedActions;
- (void)setNotificationParamsWithRequest:(id)arg1;
- (void)notifyObservers;
- (void)handleCommands:(id)arg1;
- (void)setDeviceNotificationsEnabled:(id)arg1 lastStatusChangeTime:(id)arg2;
- (void)addBrowseServiceObserver:(id)arg1;
- (id)continuationRequestWithToken:(id)arg1 clickTrackingParams:(id)arg2;
- (void)makeRequest:(id)arg1 refresh:(_Bool)arg2 retryEnabled:(_Bool)arg3 timeoutInterval:(double)arg4 responseBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)makeRequest:(id)arg1 refresh:(_Bool)arg2 timeoutInterval:(double)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)makeRequest:(id)arg1 refresh:(_Bool)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)clearCaches;
- (Class)responseClass;
- (_Bool)shouldHandleOnResponseReceivedCommand:(id)arg1;
- (id)initWithRequestFactory:(id)arg1 requestor:(id)arg2;
- (id)initWithServiceRegistryScope:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

