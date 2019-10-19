//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCImageProcessCommand, SCImageProcessLensCommandMetadata, SCLens, SCLensCommandEffectDescriptorContainer;
@protocol SCLensEffectDescriptorMutating, SCLensLoggerConsumptionTrackingProviding;

@protocol SCUnifiedCameraObjectCommandFactory <NSObject>
@property(retain, nonatomic) id <SCLensLoggerConsumptionTrackingProviding> lensLogger;
- (SCImageProcessCommand *)exportCommandWithCommand:(SCImageProcessCommand *)arg1;
- (SCImageProcessCommand *)smoothingCommand;
- (SCImageProcessCommand<SCLensEffectDescriptorMutating> *)videoProcessingCommandWithEffectDescriptorContainer:(SCLensCommandEffectDescriptorContainer *)arg1 metadata:(SCImageProcessLensCommandMetadata *)arg2;
- (SCImageProcessCommand<SCLensEffectDescriptorMutating> *)imageProcessingCommandWithEffectDescriptorContainer:(SCLensCommandEffectDescriptorContainer *)arg1 metadata:(SCImageProcessLensCommandMetadata *)arg2;
- (SCImageProcessCommand *)videoProcessingCommandWithLens:(SCLens *)arg1 metadata:(SCImageProcessLensCommandMetadata *)arg2;
- (SCImageProcessCommand *)imageProcessingCommandWithLens:(SCLens *)arg1 metadata:(SCImageProcessLensCommandMetadata *)arg2;
@end

