//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSString;

@interface BFDevice : NSObject
{
    NSString *_deviceId;
    CLLocation *_location;
    NSString *_networkType;
    NSString *_carrier;
    NSString *_os;
    NSString *_osVersion;
    NSString *_deviceBrand;
    NSString *_deviceType;
    NSString *_deviceModel;
}

@property(readonly, copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(readonly, copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, copy, nonatomic) NSString *deviceBrand; // @synthesize deviceBrand=_deviceBrand;
@property(readonly, copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly, copy, nonatomic) NSString *os; // @synthesize os=_os;
@property(readonly, copy, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
@property(readonly, copy, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
- (void).cxx_destruct;
- (id)metadata;
- (id)initWithId:(id)arg1 currentLocation:(id)arg2;

@end

