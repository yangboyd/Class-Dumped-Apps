//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaLocalDeviceProtocol-Protocol.h"

@class NSString;

@interface SPTGaiaConnectLocalDevice : NSObject <SPTGaiaLocalDeviceProtocol>
{
    _Bool _isActive;
    NSString *_deviceId;
    NSString *_name;
}

@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
- (void).cxx_destruct;
- (id)initWithDeviceId:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

