//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface IESMMTranscoderParam : NSObject <NSCopying>
{
    _Bool _useUserBitrate;
    _Bool _allowFrameReordering;
    _Bool _forceReencode;
    _Bool _forceRemux;
    _Bool _adjustBitrateWithResolution;
    _Bool _adjustBitrateWithEffectFilter;
    _Bool _adjustBitrateWithVideoRate;
    _Bool _adjustBitrateAndKeyFrameIntervalWithAccelerateInfo;
    _Bool _useVideoDataOutputSize;
    _Bool _useOutputSizeLimited;
    int _bitrate;
    int _maxEncodeFrameCache;
    int _minEncodeFrameCache;
    double _frameRate;
    double _maxKeyFrameDuration;
    NSString *_videoEntropyMode;
    NSString *_videoProfileLevel;
    long long _transType;
    long long _testID;
    NSString *_sceneKey;
    struct CGSize _videoSize;
    struct CGSize _targetVideoSize;
    struct CGAffineTransform _transform;
}

@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(retain, nonatomic) NSString *sceneKey; // @synthesize sceneKey=_sceneKey;
@property(nonatomic) long long testID; // @synthesize testID=_testID;
@property(nonatomic) long long transType; // @synthesize transType=_transType;
@property(nonatomic) _Bool useOutputSizeLimited; // @synthesize useOutputSizeLimited=_useOutputSizeLimited;
@property(nonatomic) _Bool useVideoDataOutputSize; // @synthesize useVideoDataOutputSize=_useVideoDataOutputSize;
@property(nonatomic) int minEncodeFrameCache; // @synthesize minEncodeFrameCache=_minEncodeFrameCache;
@property(nonatomic) int maxEncodeFrameCache; // @synthesize maxEncodeFrameCache=_maxEncodeFrameCache;
@property(nonatomic) _Bool adjustBitrateAndKeyFrameIntervalWithAccelerateInfo; // @synthesize adjustBitrateAndKeyFrameIntervalWithAccelerateInfo=_adjustBitrateAndKeyFrameIntervalWithAccelerateInfo;
@property(nonatomic) _Bool adjustBitrateWithVideoRate; // @synthesize adjustBitrateWithVideoRate=_adjustBitrateWithVideoRate;
@property(nonatomic) _Bool adjustBitrateWithEffectFilter; // @synthesize adjustBitrateWithEffectFilter=_adjustBitrateWithEffectFilter;
@property(nonatomic) _Bool adjustBitrateWithResolution; // @synthesize adjustBitrateWithResolution=_adjustBitrateWithResolution;
@property(nonatomic) _Bool forceRemux; // @synthesize forceRemux=_forceRemux;
@property(nonatomic) _Bool forceReencode; // @synthesize forceReencode=_forceReencode;
@property(retain, nonatomic) NSString *videoProfileLevel; // @synthesize videoProfileLevel=_videoProfileLevel;
@property(retain, nonatomic) NSString *videoEntropyMode; // @synthesize videoEntropyMode=_videoEntropyMode;
@property(nonatomic) _Bool allowFrameReordering; // @synthesize allowFrameReordering=_allowFrameReordering;
@property(nonatomic) double maxKeyFrameDuration; // @synthesize maxKeyFrameDuration=_maxKeyFrameDuration;
@property(nonatomic) _Bool useUserBitrate; // @synthesize useUserBitrate=_useUserBitrate;
@property(nonatomic) int bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) double frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) struct CGSize targetVideoSize; // @synthesize targetVideoSize=_targetVideoSize;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
- (void).cxx_destruct;
- (_Bool)isTargetSizeNeedChanged;
- (void)resetParamWithID:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)acc_transcoderParamDict;

@end

