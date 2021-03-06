//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMHashProtocol-Protocol.h"
#import "IVEAmazingFeatureProtocol-Protocol.h"
#import "IVEClipEffectBinProtocol-Protocol.h"
#import "IVEClipPreprocessBinProtocol-Protocol.h"
#import "IVEEffectMessageProtocol-Protocol.h"
#import "IVEEffectTextProtocol-Protocol.h"
#import "IVEGestureAmazingEngineProtocol-Protocol.h"
#import "IVEInfoStickerPinProtocol-Protocol.h"
#import "IVESequenceBinProtocol-Protocol.h"
#import "IVEUnitObject-Protocol.h"
#import "VEProcessSampleDelegate-Protocol.h"

@class AVAsset, HTSGLFilter, HTSGLFilterInput, HTSVideoData, IESMMALLKeyFrames, IESMMEffectStickerInfo, IESMMImageMovieInfo, IESMMMVModel, NSString, UIImage, VEConfigData, VEReverseUnit;
@protocol IESVideoEngineEffectProtocol;

@protocol IVEEffectProcess <VEProcessSampleDelegate, IVEUnitObject, IESMMHashProtocol, IVEClipPreprocessBinProtocol, IVEClipEffectBinProtocol, IVESequenceBinProtocol, IVEInfoStickerPinProtocol, IVEAmazingFeatureProtocol, IVEGestureAmazingEngineProtocol, IVEEffectTextProtocol, IVEEffectMessageProtocol>
@property(copy, nonatomic) CDUnknownBlockType canvasObservableEvent;
@property(nonatomic) _Bool needResetFilter;
@property(retain, nonatomic) VEReverseUnit *reverseUnit;
@property(retain, nonatomic) IESMMMVModel *mvModel;
@property(retain, nonatomic) IESMMEffectStickerInfo *currentPerformEffectInfo;
@property(retain, nonatomic) IESMMEffectStickerInfo *globalEffectGroupInfo;
@property(readonly, nonatomic) struct CGSize previewSize;
@property(nonatomic) _Bool bUseFilter;
@property(retain, nonatomic) HTSGLFilter<IESVideoEngineEffectProtocol> *engineFilter;
@property(retain, nonatomic) HTSGLFilterInput *input;
@property(retain, nonatomic) HTSGLFilter *waterMarkFilter;
- (HTSVideoData *)getMVExportData;
- (void)processStoryImageFilterWithCompleteBlock:(void (^)(UIImage *, NSError *))arg1;
- (void)setStoryImageFilterForPreview:(IESMMImageMovieInfo *)arg1;
- (void)setPhotoMovieTransShowDuration:(double)arg1;
- (void)switchPhotoMovieTransition:(long long)arg1;
- (void)setEndingGaussIntensity:(double)arg1;
- (void)setEndingWaterMarkIntensity:(double)arg1;
- (void)setEndingWaterMark:(_Bool)arg1 waterImage:(UIImage *)arg2 gaussImage:(UIImage *)arg3;
- (void)setRecordEffectFilter:(id)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setConfig:(VEConfigData *)arg1 updateVideoDataType:(long long)arg2;
- (id)initWithMVModel:(IESMMMVModel *)arg1;
- (id)init;

@optional
- (void)checkLVEffectPathBlock;
- (void)updateSubTrackAssetLayer:(AVAsset *)arg1 layer:(long long)arg2;
- (IESMMALLKeyFrames *)getAllKeyFramesAtPts:(unsigned long long)arg1;
- (void)setKeyFrameCallBack:(void (^)(unsigned long long, IESMMALLKeyFrames *))arg1;
- (void)commitAllKeyFrame;
- (void)setAlgorithmReplayMmode:(long long)arg1 filePath:(NSString *)arg2;
- (void)getCurrentPlayImageAsset:(AVAsset *)arg1 completeBlock:(void (^)(UIImage *))arg2;
@end

