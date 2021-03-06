//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MiSnapSDKScienceParameters, MobileFlowSpikeNormalizer;

@interface MiSnapSDKAnalyzer : NSObject
{
    int _normalizerFrameCounter;
    long long _statusbarOrientation;
    MiSnapSDKScienceParameters *_parameters;
    MobileFlowSpikeNormalizer *_glareNormalizer;
    MobileFlowSpikeNormalizer *_sharpnessNormalizer;
}

@property(nonatomic) int normalizerFrameCounter; // @synthesize normalizerFrameCounter=_normalizerFrameCounter;
@property(retain, nonatomic) MobileFlowSpikeNormalizer *sharpnessNormalizer; // @synthesize sharpnessNormalizer=_sharpnessNormalizer;
@property(retain, nonatomic) MobileFlowSpikeNormalizer *glareNormalizer; // @synthesize glareNormalizer=_glareNormalizer;
@property(retain, nonatomic) MiSnapSDKScienceParameters *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) long long statusbarOrientation; // @synthesize statusbarOrientation=_statusbarOrientation;
- (void).cxx_destruct;
- (_Bool)isMICRPartiallyReadable:(id)arg1;
- (_Bool)isMinPaddingMet:(double)arg1 withResults:(id)arg2 withOrientation:(long long)arg3;
- (_Bool)isBoundingBoxValidForResults:(id)arg1 withOrientation:(long long)arg2;
- (id)analyzeDriversLicenseResults:(id)arg1;
- (_Bool)isCornerConfidenceDueToAngle:(id)arg1;
- (id)analyzeGenericResults:(id)arg1;
- (id)analyzePassportResults:(id)arg1;
- (id)classifyCheckBackWithScienceResults:(id)arg1;
- (id)analyzeCheckBackResults:(id)arg1;
- (id)classifyCheckFrontWithScienceResults:(id)arg1;
- (id)analyzeCheckFrontResults:(id)arg1;
- (id)initWithParameters:(id)arg1;

@end

