//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IMNetworkDelegate-Protocol.h>

@class IMPingsDAO, IMSDKCommonsNetworkReachability, NSMutableArray, NSString;

@interface IMPingStore : NSObject <IMNetworkDelegate>
{
    IMPingsDAO *_dao;
    IMSDKCommonsNetworkReachability *_reachability;
    NSMutableArray *_pingNetworkinterfaceArray;
    NSMutableArray *_processingPingIdList;
    long long _maxNetworkInterfacesAllowed;
    unsigned long long _identifier;
}

+ (id)sharedStore;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long maxNetworkInterfacesAllowed; // @synthesize maxNetworkInterfacesAllowed=_maxNetworkInterfacesAllowed;
@property(retain, nonatomic) NSMutableArray *processingPingIdList; // @synthesize processingPingIdList=_processingPingIdList;
@property(retain, nonatomic) NSMutableArray *pingNetworkinterfaceArray; // @synthesize pingNetworkinterfaceArray=_pingNetworkinterfaceArray;
@property(retain, nonatomic) IMSDKCommonsNetworkReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) IMPingsDAO *dao; // @synthesize dao=_dao;
- (void).cxx_destruct;
- (void)removeNetworkInterface:(id)arg1;
- (void)addNetworkInterface:(id)arg1;
- (unsigned long long)networkInterfaceCount;
- (void)removeActivePing:(id)arg1;
- (void)addActivePing:(id)arg1;
- (unsigned long long)activePingCount;
- (_Bool)isHttpOrHttps:(id)arg1;
- (id)makeNetworkConnection:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)processFailedPing:(id)arg1 error:(id)arg2;
- (void)processSuccessfulPing:(id)arg1;
- (void)networkServiceProvider:(id)arg1 request:(id)arg2 didGetResponse:(id)arg3;
- (_Bool)networkServiceProvider:(id)arg1 forWebViewController:(id)arg2 shouldStartLoadWithRequest:(id)arg3 navigationType:(long long)arg4 withIMRequest:(id)arg5;
- (_Bool)isNetworkReachable;
- (void)processPendingPings;
- (void)processPing:(id)arg1;
- (void)stop;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

