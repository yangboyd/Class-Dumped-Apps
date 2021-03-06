//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESMMEffectConfig, IESMMMVEffectFilter, NSArray, NSString;

@interface IESMMMVModel : NSObject
{
    struct MV_INFO *mvInfo_;
    struct MV_AUDIO_INFO *mvOriginalAudioInfo_;
    struct TESmartPtr<TEStickerEffect> stickerMV_;
    _Bool isCrossplat_;
    _Bool _isVideoAndPicMixed;
    NSArray *_resources;
    NSString *_mp3Rid;
    IESMMMVEffectFilter *_effectFilter;
    NSString *_modelPath;
    IESMMEffectConfig *_config;
}

+ (int)mvAudioConverter:(id)arg1 start:(double)arg2 duraion:(double)arg3 audioType:(int)arg4 buffer:(float **)arg5;
+ (id)getMVResourceInfo:(id)arg1;
@property(retain, nonatomic) IESMMEffectConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *modelPath; // @synthesize modelPath=_modelPath;
@property(retain, nonatomic) IESMMMVEffectFilter *effectFilter; // @synthesize effectFilter=_effectFilter;
@property(retain, nonatomic) NSString *mp3Rid; // @synthesize mp3Rid=_mp3Rid;
@property(nonatomic) _Bool isVideoAndPicMixed; // @synthesize isVideoAndPicMixed=_isVideoAndPicMixed;
@property(retain, nonatomic) NSArray *resources; // @synthesize resources=_resources;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void *)getMVInfo;
- (void *)getMVEffect;
- (id)getUserResourceFromEffectResource:(id)arg1;
- (void)dealloc;
- (void)releaseEffectFilter;
- (void)setServerAlgorithmResults:(id)arg1;
- (id)p_userSelectMusic:(id)arg1 start:(double)arg2 duration:(double)arg3 error:(id *)arg4;
- (id)getCurrentAlgorithmConfigs;
- (id)p_setMV:(id)arg1 userResourses:(id)arg2 userSelectMusic:(id)arg3 start:(double)arg4 duration:(double)arg5 error:(id *)arg6;
- (id)setMV:(id)arg1 userResourses:(id)arg2 videoData:(id)arg3;
- (void)setMV:(id)arg1 userResourses:(id)arg2 videoData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)userChangeMusic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getMVExportDataWithVideoData:(id)arg1;
- (id)makeAsset:(id)arg1 toDuration:(double)arg2;
- (id)getAssetWithPath:(id)arg1 baseDir:(id)arg2;
- (void)reBuildVideoData:(id)arg1 WithInfo:(id)arg2;
- (id)sortResource:(id)arg1;
- (id)buildVideoDataWithInfo:(id)arg1;
- (id)setMV:(id)arg1 userResourses:(id)arg2 userSelectMusic:(id)arg3;
- (id)setMV:(id)arg1 userResourses:(id)arg2;
- (void)setMV:(id)arg1 userResourses:(id)arg2 userSelectMusic:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setMV:(id)arg1 userResourses:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)hasMV;
- (id)init;

@end

