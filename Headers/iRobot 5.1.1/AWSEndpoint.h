//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;

@interface AWSEndpoint : NSObject
{
    _Bool _useUnsafeURL;
    long long _regionType;
    NSString *_regionName;
    long long _serviceType;
    NSString *_serviceName;
    NSURL *_URL;
    NSString *_hostName;
}

+ (id)regionNameFromType:(long long)arg1;
@property(readonly, nonatomic) _Bool useUnsafeURL; // @synthesize useUnsafeURL=_useUnsafeURL;
@property(readonly, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly, nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) NSString *regionName; // @synthesize regionName=_regionName;
@property(readonly, nonatomic) long long regionType; // @synthesize regionType=_regionType;
- (void).cxx_destruct;
- (id)URLWithRegion:(long long)arg1 regionName:(id)arg2 service:(long long)arg3 serviceName:(id)arg4 useUnsafeURL:(_Bool)arg5;
- (id)localTestingURLForService:(long long)arg1 port:(id)arg2 useUnsafeURL:(_Bool)arg3;
- (id)portNumberForService:(long long)arg1 isLocalTestingPort:(_Bool)arg2;
@property(readonly, nonatomic) NSNumber *portNumber;
- (id)serviceNameFromType:(long long)arg1;
- (void)setRegion:(long long)arg1 service:(long long)arg2;
- (id)initWithURLString:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithRegion:(long long)arg1 service:(long long)arg2 URL:(id)arg3;
- (id)initWithRegion:(long long)arg1 serviceName:(id)arg2 URL:(id)arg3;
- (id)initWithRegion:(long long)arg1 service:(long long)arg2 useUnsafeURL:(_Bool)arg3;
- (id)initLocalEndpointWithRegion:(long long)arg1 service:(long long)arg2 useUnsafeURL:(_Bool)arg3;
- (id)init;

@end

