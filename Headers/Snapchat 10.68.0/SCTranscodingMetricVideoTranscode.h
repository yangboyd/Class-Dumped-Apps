//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTranscodingMetricBase.h"

@class NSString;

@interface SCTranscodingMetricVideoTranscode : SCTranscodingMetricBase
{
    unsigned long long _inputVideoDurationMS;
    NSString *_inputMediaFormat;
    long long _inputFileSize;
    unsigned long long _inputVideoBitrate;
    NSString *_imageProcessCommandsInfo;
    unsigned long long _outputVideoDurationMS;
    NSString *_outputMediaFormat;
    long long _outputFileSize;
    unsigned long long _outputVideoBitrate;
    long long _outputOverlayFileSize;
    double _userSendStartTimeSecs;
    long long _numSegments;
    long long _segmentIndex;
    double _segmentStartTime;
    double _segmentDuration;
    struct CGSize _inputResolution;
    struct CGSize _outputResolution;
}

@property(nonatomic) double segmentDuration; // @synthesize segmentDuration=_segmentDuration;
@property(nonatomic) double segmentStartTime; // @synthesize segmentStartTime=_segmentStartTime;
@property(nonatomic) long long segmentIndex; // @synthesize segmentIndex=_segmentIndex;
@property(nonatomic) long long numSegments; // @synthesize numSegments=_numSegments;
@property(nonatomic) double userSendStartTimeSecs; // @synthesize userSendStartTimeSecs=_userSendStartTimeSecs;
@property(nonatomic) long long outputOverlayFileSize; // @synthesize outputOverlayFileSize=_outputOverlayFileSize;
@property(nonatomic) unsigned long long outputVideoBitrate; // @synthesize outputVideoBitrate=_outputVideoBitrate;
@property(nonatomic) long long outputFileSize; // @synthesize outputFileSize=_outputFileSize;
@property(nonatomic) struct CGSize outputResolution; // @synthesize outputResolution=_outputResolution;
@property(copy, nonatomic) NSString *outputMediaFormat; // @synthesize outputMediaFormat=_outputMediaFormat;
@property(nonatomic) unsigned long long outputVideoDurationMS; // @synthesize outputVideoDurationMS=_outputVideoDurationMS;
@property(copy, nonatomic) NSString *imageProcessCommandsInfo; // @synthesize imageProcessCommandsInfo=_imageProcessCommandsInfo;
@property(nonatomic) unsigned long long inputVideoBitrate; // @synthesize inputVideoBitrate=_inputVideoBitrate;
@property(nonatomic) long long inputFileSize; // @synthesize inputFileSize=_inputFileSize;
@property(nonatomic) struct CGSize inputResolution; // @synthesize inputResolution=_inputResolution;
@property(copy, nonatomic) NSString *inputMediaFormat; // @synthesize inputMediaFormat=_inputMediaFormat;
@property(nonatomic) unsigned long long inputVideoDurationMS; // @synthesize inputVideoDurationMS=_inputVideoDurationMS;
- (void).cxx_destruct;
- (id)metricType;
@property(readonly, copy, nonatomic) NSString *splits;
- (id)outputMediaMetadata;
- (id)inputMediaMetadata;

@end

