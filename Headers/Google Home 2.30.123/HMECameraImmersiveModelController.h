//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMECameraImmersiveModelController-Protocol.h"

@class HMEModel, NSString;

@interface HMECameraImmersiveModelController : NSObject <HMECameraImmersiveModelController>
{
    HMEModel *_cameraDevicesModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMEModel *cameraDevicesModel; // @synthesize cameraDevicesModel=_cameraDevicesModel;
- (id)cameraDevices;
- (id)initWithStructureID:(id)arg1 deviceData:(id)arg2 deviceEligibilityChecker:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

