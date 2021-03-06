//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface UARuntimeConfig : NSObject
{
    _Bool _automaticSetupEnabled;
    _Bool _analyticsEnabled;
    _Bool _clearUserOnAppRestore;
    _Bool _clearNamedUserOnAppRestore;
    _Bool _channelCaptureEnabled;
    _Bool _openURLWhitelistingEnabled;
    _Bool _channelCreationDelayEnabled;
    _Bool _requestAuthorizationToUseNotifications;
    _Bool _dataCollectionOptInEnabled;
    _Bool _inProduction;
    _Bool _detectProvisioningMode;
    NSArray *_whitelist;
    NSString *_deviceAPIURL;
    NSString *_analyticsURL;
    NSString *_remoteDataAPIURL;
    NSString *_messageCenterStyleConfig;
    NSString *_itunesID;
    NSString *_appKey;
    NSString *_appSecret;
    long long _logLevel;
    NSDictionary *_customConfig;
}

+ (id)runtimeConfigWithConfig:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool detectProvisioningMode; // @synthesize detectProvisioningMode=_detectProvisioningMode;
@property(copy, nonatomic) NSDictionary *customConfig; // @synthesize customConfig=_customConfig;
@property(nonatomic, getter=isInProduction) _Bool inProduction; // @synthesize inProduction=_inProduction;
@property(nonatomic) long long logLevel; // @synthesize logLevel=_logLevel;
@property(copy, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(nonatomic, getter=isDataCollectionOptInEnabled) _Bool dataCollectionOptInEnabled; // @synthesize dataCollectionOptInEnabled=_dataCollectionOptInEnabled;
@property(nonatomic) _Bool requestAuthorizationToUseNotifications; // @synthesize requestAuthorizationToUseNotifications=_requestAuthorizationToUseNotifications;
@property(nonatomic, getter=isChannelCreationDelayEnabled) _Bool channelCreationDelayEnabled; // @synthesize channelCreationDelayEnabled=_channelCreationDelayEnabled;
@property(nonatomic, getter=isOpenURLWhitelistingEnabled) _Bool openURLWhitelistingEnabled; // @synthesize openURLWhitelistingEnabled=_openURLWhitelistingEnabled;
@property(nonatomic, getter=isChannelCaptureEnabled) _Bool channelCaptureEnabled; // @synthesize channelCaptureEnabled=_channelCaptureEnabled;
@property(nonatomic) _Bool clearNamedUserOnAppRestore; // @synthesize clearNamedUserOnAppRestore=_clearNamedUserOnAppRestore;
@property(nonatomic) _Bool clearUserOnAppRestore; // @synthesize clearUserOnAppRestore=_clearUserOnAppRestore;
@property(copy, nonatomic) NSString *itunesID; // @synthesize itunesID=_itunesID;
@property(copy, nonatomic) NSString *messageCenterStyleConfig; // @synthesize messageCenterStyleConfig=_messageCenterStyleConfig;
@property(copy, nonatomic) NSString *remoteDataAPIURL; // @synthesize remoteDataAPIURL=_remoteDataAPIURL;
@property(copy, nonatomic) NSString *analyticsURL; // @synthesize analyticsURL=_analyticsURL;
@property(copy, nonatomic) NSString *deviceAPIURL; // @synthesize deviceAPIURL=_deviceAPIURL;
@property(nonatomic, getter=isAnalyticsEnabled) _Bool analyticsEnabled; // @synthesize analyticsEnabled=_analyticsEnabled;
@property(copy, nonatomic) NSArray *whitelist; // @synthesize whitelist=_whitelist;
@property(nonatomic, getter=isAutomaticSetupEnabled) _Bool automaticSetupEnabled; // @synthesize automaticSetupEnabled=_automaticSetupEnabled;
- (id)initWithConfig:(id)arg1;

@end

