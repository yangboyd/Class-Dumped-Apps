//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKMDNSDataRecord.h"

@class NSArray, NSString;

@interface GCKMDNSServiceRecord : GCKMDNSDataRecord
{
    unsigned short _servicePort;
    NSArray *_serviceHost;
    long long _servicePriority;
    long long _serviceWeight;
}

+ (id)recordWithName:(id)arg1 serviceHost:(id)arg2 servicePort:(unsigned short)arg3 servicePriority:(long long)arg4 serviceWeight:(long long)arg5;
@property(nonatomic) long long serviceWeight; // @synthesize serviceWeight=_serviceWeight;
@property(nonatomic) long long servicePriority; // @synthesize servicePriority=_servicePriority;
@property(nonatomic) unsigned short servicePort; // @synthesize servicePort=_servicePort;
@property(retain, nonatomic) NSArray *serviceHost; // @synthesize serviceHost=_serviceHost;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isDataEqualTo:(id)arg1;
- (_Bool)writeDataWith:(id)arg1;
- (_Bool)readDataWith:(id)arg1;
@property(readonly, copy, nonatomic) NSString *serviceName;
@property(readonly, copy, nonatomic) NSString *serviceInstanceName;
@property(readonly, nonatomic) unsigned long long serviceProtocol;
- (id)initWithName:(id)arg1 recordClass:(unsigned short)arg2;

@end

