//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImageProcessLensCommandLoadEffectBlock.h"

@class LSADeviceMotionDataProvider, SCImageProcessLensCommandMetadata;

@interface SCImageProcessLensCommandLoadSnap3DEffectBlock : SCImageProcessLensCommandLoadEffectBlock
{
    LSADeviceMotionDataProvider *_deviceMotionProvider;
    SCImageProcessLensCommandMetadata *_metadata;
}

@property(readonly, nonatomic) SCImageProcessLensCommandMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (_Bool)executeWithTrackingComponent:(id)arg1 effectComponent:(id)arg2 motionComponent:(id)arg3 depthComponent:(id)arg4 sixDofComponent:(id)arg5 command:(id)arg6 error:(id *)arg7;
- (id)initWithLensEffectDescriptorContainer:(id)arg1 metadata:(id)arg2 lensLogger:(id)arg3;

@end

