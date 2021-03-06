//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMELightEQSettingsData-Protocol.h"

@class NSString;
@protocol HMEDeviceQueryService;

@interface HMELightEQSettingsModelController : NSObject <HMELightEQSettingsData>
{
    id <HMEDeviceQueryService> _deviceQueryService;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HMEDeviceQueryService> deviceQueryService; // @synthesize deviceQueryService=_deviceQueryService;
- (void)fetchDisplaySettingsFromDevice:(id)arg1 completion:(CDUnknownBlockType)arg2 previousAttemptCount:(unsigned long long)arg3;
- (void)fetchDisplaySettingsFromDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateDisplayThemeSettings:(id)arg1 device:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateLightEQSettings:(id)arg1 device:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDeviceQueryService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

