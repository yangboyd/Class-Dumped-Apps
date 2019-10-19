//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCPSessionDataSource-Protocol.h"

@class NSData, NSDate, NSString;

@interface SCCPSessionDataStore : NSObject <SCCPSessionDataSource>
{
    unsigned short _port;
    NSString *_host;
    NSString *_username;
    NSString *_mac;
    NSString *_payload;
    NSDate *_lastUpdated;
    NSData *_cachedIpAddr;
    double _cachedIpExpirationTime;
}

@property(nonatomic) double cachedIpExpirationTime; // @synthesize cachedIpExpirationTime=_cachedIpExpirationTime;
@property(retain, nonatomic) NSData *cachedIpAddr; // @synthesize cachedIpAddr=_cachedIpAddr;
@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(copy, nonatomic) NSString *payload; // @synthesize payload=_payload;
@property(copy, nonatomic) NSString *mac; // @synthesize mac=_mac;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)updateWithUsername:(id)arg1;
- (void)updateWithAlternateSCCPServer:(id)arg1;
- (id)sccpServerDictionary;
- (void)updateDNSCache:(id)arg1 expirationTime:(double)arg2;
- (id)cachedAddr;
- (_Bool)isDNSCacheValid;
- (unsigned short)sccpPort;
- (id)sccpHost;
- (id)sccpAuthDictionary;
- (_Bool)isValid;
- (id)gatewayServer;
- (id)initWithUsername:(id)arg1 connectionDetails:(id)arg2;
- (id)initWithUsername:(id)arg1 connectionDetailsSoju:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

