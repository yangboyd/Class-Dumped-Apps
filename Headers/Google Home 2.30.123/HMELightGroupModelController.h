//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMELightGroupData-Protocol.h"

@class NSString;
@protocol HMEDeviceEligibilityChecker, HMEStructureDeviceData;

@interface HMELightGroupModelController : NSObject <HMELightGroupData>
{
    id <HMEStructureDeviceData> _structureDeviceData;
    id <HMEDeviceEligibilityChecker> _deviceEligibilityChecker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HMEDeviceEligibilityChecker> deviceEligibilityChecker; // @synthesize deviceEligibilityChecker=_deviceEligibilityChecker;
@property(readonly, nonatomic) id <HMEStructureDeviceData> structureDeviceData; // @synthesize structureDeviceData=_structureDeviceData;
- (id)lightGroupModelFromUnifiedDevicesModel:(id)arg1;
- (id)lightGroupForSpace:(id)arg1 devices:(id)arg2;
- (id)groupDevicesBySpace:(id)arg1;
- (id)lightDevicesInSpacesFromUnifiedDevices:(id)arg1;
- (id)lightGroupForSpaceWithID:(id)arg1;
- (id)lightGroupsInCurrentStructure;
- (id)initWithDeviceEligibilityChecker:(id)arg1 structureDeviceData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

