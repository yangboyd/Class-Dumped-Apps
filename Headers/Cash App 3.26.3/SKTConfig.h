//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Smooch/SKTRemoteObject-Protocol.h>

@class NSString, SKTRetryConfiguration;

@interface SKTConfig : NSObject <SKTRemoteObject>
{
    _Bool _pushEnabled;
    _Bool _multiConvoEnabled;
    _Bool _stripeEnabled;
    NSString *_integrationId;
    NSString *_appId;
    NSString *_appStatus;
    NSString *_appName;
    NSString *_acceptedSdkVersion;
    unsigned long long _validityStatus;
    SKTRetryConfiguration *_retryConfiguration;
    NSString *_apiBaseUrl;
    NSString *_stripePublicKey;
}

@property(copy, nonatomic) NSString *stripePublicKey; // @synthesize stripePublicKey=_stripePublicKey;
@property _Bool stripeEnabled; // @synthesize stripeEnabled=_stripeEnabled;
@property(copy, nonatomic) NSString *apiBaseUrl; // @synthesize apiBaseUrl=_apiBaseUrl;
@property(retain, nonatomic) SKTRetryConfiguration *retryConfiguration; // @synthesize retryConfiguration=_retryConfiguration;
@property unsigned long long validityStatus; // @synthesize validityStatus=_validityStatus;
@property _Bool multiConvoEnabled; // @synthesize multiConvoEnabled=_multiConvoEnabled;
@property _Bool pushEnabled; // @synthesize pushEnabled=_pushEnabled;
@property(copy, nonatomic) NSString *acceptedSdkVersion; // @synthesize acceptedSdkVersion=_acceptedSdkVersion;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appStatus; // @synthesize appStatus=_appStatus;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *integrationId; // @synthesize integrationId=_integrationId;
- (void).cxx_destruct;
- (_Bool)hasValidUrl;
- (_Bool)isAppActive;
- (void)deserializeRetryConfiguration:(id)arg1;
- (void)deserializeIntegrations:(id)arg1;
- (void)deserialize:(id)arg1;
- (id)serialize;
- (id)remotePath;
- (id)initWithIntegrationId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

