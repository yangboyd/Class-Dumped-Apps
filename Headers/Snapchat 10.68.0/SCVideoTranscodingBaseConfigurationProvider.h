//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCVideoTranscodingConfigurationProviderInput, VideoTranscodingConfiguration;

@interface SCVideoTranscodingBaseConfigurationProvider : NSObject
{
    SCVideoTranscodingConfigurationProviderInput *_input;
    VideoTranscodingConfiguration *_adaptiveConfiguration;
}

- (void).cxx_destruct;
- (_Bool)_deviceMeetsMinimumRequirementsForHighQualityVideo;
- (struct CGSize)_videoTranscodingTargetSizeForSendSnapVideo;
- (_Bool)isStreamingEnabledForSaving;
- (_Bool)isStreamingEnabledForSending;
- (_Bool)isQualityScoreCalculationEnabled;
- (_Bool)shouldMuteAudio;
- (unsigned long long)maxFrameRate;
- (unsigned long long)transcodingCodecType;
- (double)audioBitrateForSaving;
- (double)audioBitrateForSending;
- (unsigned long long)keyFrameIntervalForSaving;
- (unsigned long long)keyFrameIntervalForSending;
- (struct CGSize)targetSizeForSaving;
- (struct CGSize)targetSizeForSending;
- (double)bitrateForSaving;
- (double)bitrateForSending;
- (id)initWithConfigurationProviderInput:(id)arg1 mediaQualityLevel:(long long)arg2;

@end

