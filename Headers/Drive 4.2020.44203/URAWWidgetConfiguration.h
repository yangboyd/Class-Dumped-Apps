//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSSet, NSString, ReportAbuseConfig;
@protocol GTMFetcherAuthorizationProtocol, URAWBackendManager;

@interface URAWWidgetConfiguration : NSObject
{
    _Bool _dryRun;
    int _configName;
    NSString *_language;
    NSString *_reportedContentID;
    NSSet *_fulfilledRequirements;
    NSString *_sourceApp;
    CDUnknownBlockType _completion;
    id <GTMFetcherAuthorizationProtocol> _authToken;
    unsigned long long _reporterRole;
    NSError *_error;
    NSObject<URAWBackendManager> *_backendManager;
    ReportAbuseConfig *_config;
    NSString *_clientID;
    NSString *_clientSecret;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *clientSecret; // @synthesize clientSecret=_clientSecret;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(retain, nonatomic) ReportAbuseConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSObject<URAWBackendManager> *backendManager; // @synthesize backendManager=_backendManager;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long reporterRole; // @synthesize reporterRole=_reporterRole;
@property(nonatomic) _Bool dryRun; // @synthesize dryRun=_dryRun;
@property(retain, nonatomic) id <GTMFetcherAuthorizationProtocol> authToken; // @synthesize authToken=_authToken;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *sourceApp; // @synthesize sourceApp=_sourceApp;
@property(nonatomic) int configName; // @synthesize configName=_configName;
@property(retain, nonatomic) NSSet *fulfilledRequirements; // @synthesize fulfilledRequirements=_fulfilledRequirements;
@property(copy, nonatomic) NSString *reportedContentID; // @synthesize reportedContentID=_reportedContentID;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
- (id)init;

@end

