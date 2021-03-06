//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NLServiceInfo : NSObject
{
    long long _serviceId;
    NSString *_accountId;
    NSString *_serviceConfig;
    NSString *_pairingToken;
    NSString *_pairingInitData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pairingInitData; // @synthesize pairingInitData=_pairingInitData;
@property(retain, nonatomic) NSString *pairingToken; // @synthesize pairingToken=_pairingToken;
@property(retain, nonatomic) NSString *serviceConfig; // @synthesize serviceConfig=_serviceConfig;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(nonatomic) long long serviceId; // @synthesize serviceId=_serviceId;
- (id)decodeServiceConfig;
- (id)initWithServiceId:(long long)arg1 serviceConfig:(id)arg2;
- (id)initWithServiceId:(long long)arg1 accountId:(id)arg2 serviceConfig:(id)arg3 pairingToken:(id)arg4 pairingInitData:(id)arg5;

@end

