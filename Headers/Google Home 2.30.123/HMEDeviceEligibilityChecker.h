//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEDeviceEligibilityChecker-Protocol.h"

@class NSString;
@protocol GCAConfigurationFlags;

@interface HMEDeviceEligibilityChecker : NSObject <HMEDeviceEligibilityChecker>
{
    id <GCAConfigurationFlags> _flags;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GCAConfigurationFlags> flags; // @synthesize flags=_flags;
- (_Bool)deviceProperty:(id)arg1 matchesDeviceMaskPropertyPrefix:(id)arg2;
- (_Bool)deviceTypes:(id)arg1 matchDeviceMaskDeviceTypes:(id)arg2;
- (_Bool)deviceProperty:(id)arg1 matchesDeviceMaskProperty:(id)arg2;
- (_Bool)isValidDeviceMask:(id)arg1;
- (_Bool)device:(id)arg1 matchesDeviceMask:(id)arg2;
- (id)filterDeviceSupportedTraits:(id)arg1 withConditionTraits:(id)arg2;
- (id)deviceTraitStringsFromDeviceTraits:(id)arg1;
- (id)eligibleTraitsForGraphDevice:(id)arg1;
- (_Bool)isGraphDeviceSupported:(id)arg1;
- (id)initWithFlags:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

