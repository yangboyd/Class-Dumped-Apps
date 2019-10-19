//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseAPIClient.h"

@class NSDateFormatter, NSURL;

@interface 41e01b04321 : SCBaseAPIClient
{
    NSURL *_defaultBaseURL;
    double _loggingRate;
    NSDateFormatter *_dateFormatter;
}

+ (void)apiClientDidFinishRequest:(id)arg1 response:(id)arg2 parameters:(id)arg3;
+ (void)removeListener:(id)arg1;
+ (void)addListener:(id)arg1;
+ (id)getConnectionType;
+ (id)getCarrierMNC;
+ (id)getCarrierMCC;
+ (id)getCarrierName;
+ (_Bool)isDevSnapConnect;
+ (_Bool)isDevAuthService;
+ (_Bool)isDevSnapchat;
+ (id)defaultSnapConnectUrl;
+ (id)defaultSnaptokenUrl;
+ (id)defaultAuthServiceUrl;
+ (id)defaultUrl;
+ (id)updateSharedSnapConnectClientWithUrl:(id)arg1;
+ (id)updateSharedSnaptokenClientWithUrl:(id)arg1;
+ (id)updateSharedAuthServiceClientWithUrl:(id)arg1;
+ (id)updateSharedClientWithUrl:(id)arg1;
+ (id)sharedSnapConnectClient;
+ (id)sharedSnaptokenClient;
+ (id)sharedAuthServiceClient;
+ (id)sharedClient;
+ (void)initialize;
+ (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
+ (void)showAlertAndWaitForDismissalWithUrl:(id)arg1;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, nonatomic) double loggingRate; // @synthesize loggingRate=_loggingRate;
@property(retain, nonatomic) NSURL *defaultBaseURL; // @synthesize defaultBaseURL=_defaultBaseURL;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)enqueueHTTPRequestOperation:(id)arg1;
- (id)7b13a71a93c3efe4f:(id)arg1 7fa1:(id)arg2 77595f7b78:(id)arg3;
- (id)e802f93add3350a59dd1c3e3625c95:(id)arg1 3e06:(id)arg2 ab68584f13:(id)arg3 c7d479e91fb8da5c355134310:(CDUnknownBlockType)arg4;
- (_Bool)isCustomEndpoint;
- (_Bool)_shouldLogPayloadGeneration;
- (void)9881dd69c571d8ea773:(id)arg1 8503:(id)arg2 5d3c1cd657:(id)arg3;
- (id)f03595895693df064:(id)arg1 9b9:(id)arg2 46fd0407ba:(id)arg3 612aa197b3b4e:(_Bool)arg4;
- (id)initWithBaseURL:(id)arg1;

@end

