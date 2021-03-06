//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSTimer, NlsApiWorker, NlsKeychainStorage;
@protocol NlsConfigManagerDelegate, NlsDeviceUserAgentProvider, OS_dispatch_queue;

@interface NlsConfigManager : NSObject
{
    _Bool _configReady;
    _Bool _cancelled;
    _Bool _removeTimerFlag;
    unsigned int _configStatus;
    unsigned int _viewabilityStatus;
    int _configRetryCounter;
    long long _logReportInterval;
    long long _configRefreshInterval;
    NSString *_requestMethod;
    id <NlsConfigManagerDelegate> _delegate;
    NlsApiWorker *_worker;
    NlsKeychainStorage *_keychainStorage;
    NSObject<OS_dispatch_queue> *_dataConfigQueue;
    NSTimer *_configRetryTimer;
    NSString *_devUserAgent;
    id <NlsDeviceUserAgentProvider> _deviceUserAgentProvider;
    NSArray *_tagsArray;
}

@property(retain) NSArray *tagsArray; // @synthesize tagsArray=_tagsArray;
@property(retain, nonatomic) id <NlsDeviceUserAgentProvider> deviceUserAgentProvider; // @synthesize deviceUserAgentProvider=_deviceUserAgentProvider;
@property(retain, nonatomic) NSString *devUserAgent; // @synthesize devUserAgent=_devUserAgent;
@property(retain) NSTimer *configRetryTimer; // @synthesize configRetryTimer=_configRetryTimer;
@property(nonatomic) int configRetryCounter; // @synthesize configRetryCounter=_configRetryCounter;
@property(nonatomic) _Bool removeTimerFlag; // @synthesize removeTimerFlag=_removeTimerFlag;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *dataConfigQueue; // @synthesize dataConfigQueue=_dataConfigQueue;
@property(nonatomic) __weak NlsKeychainStorage *keychainStorage; // @synthesize keychainStorage=_keychainStorage;
@property(nonatomic) __weak NlsApiWorker *worker; // @synthesize worker=_worker;
@property(nonatomic) __weak id <NlsConfigManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) unsigned int viewabilityStatus; // @synthesize viewabilityStatus=_viewabilityStatus;
@property(retain, nonatomic) NSString *requestMethod; // @synthesize requestMethod=_requestMethod;
@property(nonatomic) long long configRefreshInterval; // @synthesize configRefreshInterval=_configRefreshInterval;
@property(nonatomic) long long logReportInterval; // @synthesize logReportInterval=_logReportInterval;
@property(nonatomic) unsigned int configStatus; // @synthesize configStatus=_configStatus;
@property(nonatomic) _Bool configReady; // @synthesize configReady=_configReady;
- (void).cxx_destruct;
- (void)stopConfigRetryTimer;
- (void)startLongConfigRetryTimer;
- (void)startShortConfigRetryTimer;
- (void)runRetryTimers;
- (void)updateEventFilterWithDict:(id)arg1;
- (void)updateGlobalDefaultsValues;
- (void)updateKeychainValuesWithDict:(id)arg1;
- (id)parseTagDictionary:(id)arg1 tagMapDefaults:(id)arg2 cadenceArray:(id)arg3 productArray:(id)arg4 urlArray:(id)arg5 globalDict:(id)arg6 customExtensions:(id)arg7;
- (_Bool)parseConfigFile:(id)arg1 cacheAge:(long long)arg2;
- (void)setConfigDefault;
- (_Bool)handleJsLibResponse:(id)arg1 forType:(int)arg2 withResponseCode:(long long)arg3 age:(long long)arg4;
- (_Bool)handleConfigResponse:(id)arg1 withResponseCode:(long long)arg2 age:(long long)arg3;
- (id)getJsLibraryFromServer:(id)arg1 withStatusCode:(long long *)arg2;
- (id)getConfigFromServer:(id)arg1 withStatusCode:(long long *)arg2;
- (id)retrieveViewabilityJsFileWithType:(int)arg1 fromUrl:(id)arg2 responseStatusCode:(long long *)arg3 age:(unsigned long long *)arg4 useCache:(_Bool)arg5;
- (id)retrieveConfigCached:(_Bool)arg1 responseStatusCode:(long long *)arg2 age:(unsigned long long *)arg3 obtainedFromCache:(_Bool *)arg4;
- (id)buildConfigRequestUrlWithResult:(_Bool *)arg1;
- (void)obtainConfig;
@property(readonly, nonatomic) NSString *deviceUserAgent;
- (id)tagInfoForProcessorWithIndex:(unsigned long long)arg1;
- (void)handleAppDisabled:(_Bool)arg1;
- (void)refreshConfig;
@property(readonly, nonatomic) unsigned long long totalProcessors;
- (id)initWithWorker:(id)arg1 delegate:(id)arg2;

@end

