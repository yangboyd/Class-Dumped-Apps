//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEVideoRouter : NSObject
{
}

+ (id)paramsWithVideoSegmentedClipViewControllerModel:(id)arg1;
+ (_Bool)shouldRemoveMusicApply:(id)arg1;
+ (id)fileURLWithString:(id)arg1;
+ (void)saveDraftWithSegmentedClipModel:(id)arg1 extraDict:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)ensureSpacesInText:(id)arg1 atUserText:(id)arg2;
+ (void)changeMusicWithSticker:(id)arg1 inputData:(id)arg2 originalMusicDownloadFailed:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)resetLocalizedDescriptionKeyForStickerDownloadError:(id)arg1;
+ (long long)recordModeFrom:(id)arg1;
+ (void)fetchStickerListWithStickerIDS:(id)arg1 shouldApplySticker:(_Bool)arg2 toDownloadParentSticker:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)downloadStickerWithStickerID:(id)arg1 gradeKey:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)downloadStickerWithStickerID:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_loadPublishViewModel:(id)arg1 fromDraft:(id)arg2 isEdit:(_Bool)arg3;
+ (void)setTranslationTransitionDelegate:(id)arg1;
+ (id)translationTransitionDelegate;
+ (void)setTransitionDelegate:(id)arg1;
+ (id)transitionDelegate;
+ (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)presentViewControllerCustom:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)createOrContinueRecordFlowWithInputData:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)startVideoEditViewControllerWithAssetModel:(id)arg1 processDataBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)startVideoClipViewControllerWithAssetModels:(id)arg1 withExtraInfo:(id)arg2 processDataBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)startVideoEditViewControllerWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)startVideoClipViewControllerWithModel:(id)arg1 extraDict:(id)arg2;
+ (void)saveHandlingPushData:(id)arg1;
+ (void)startVideoWithResultOfTCMJSB:(id)arg1;
+ (void)startVideoWithResultOfStarAltasJSB:(id)arg1;
+ (void)startVideoWithStarAltasOrderID:(id)arg1 channel:(id)arg2 info:(id)arg3;
+ (void)startVideoWithPushData:(id)arg1;
+ (void)startReactWithSourceAweme:(id)arg1 isReactOrigin:(_Bool)arg2 from:(id)arg3;
+ (void)startDuetWithAweme:(id)arg1 showGrant:(_Bool)arg2 withInfo:(id)arg3 publishModel:(id)arg4 inputData:(id)arg5;
+ (void)startDuetWithAweme:(id)arg1 showGrant:(_Bool)arg2 from:(id)arg3;
+ (void)startDuetWithAweme:(id)arg1 from:(id)arg2;
+ (void)startWithBackUpIfNeed;
+ (void)retrievePublishModuleFromDraft:(id)arg1 isEdit:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)startWithDraft:(id)arg1 orderIndex:(id)arg2 isBackup:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)startPublishLivePlaybackVideoWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)startPublishLiveHighlightVideoWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)startPublishLiveVideoWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)startPublishViewControllerWithVideoID:(id)arg1 videoURL:(id)arg2 music:(id)arg3 challenge:(id)arg4 referString:(id)arg5;
+ (void)startPublishAnnualReviewVideoWithChallengeID:(id)arg1 reviewVideoID:(id)arg2 videoURLStr:(id)arg3 musicID:(id)arg4 referString:(id)arg5;
+ (void)tryMusicAgainWithDraft:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)startWithTask:(id)arg1 duetAweme:(id)arg2 info:(id)arg3;
+ (void)startWithTask:(id)arg1 info:(id)arg2;
+ (void)startWithChallenge:(id)arg1 duetAweme:(id)arg2 fromChallengeDetail:(_Bool)arg3 info:(id)arg4;
+ (void)startWithChallenge:(id)arg1 fromChallengeDetail:(_Bool)arg2 info:(id)arg3;
+ (void)prepareInputDataWithChallenge:(id)arg1 publishModel:(id)arg2 fromChallengeDetail:(_Bool)arg3 info:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)startWithMusic:(id)arg1 withInfo:(id)arg2;
+ (void)startWithSeeding:(id)arg1 withInfo:(id)arg2;
+ (void)startWithOrderShare:(id)arg1 withInfo:(id)arg2;
+ (void)startMusicAndVideoWorkFlowWithInfo:(id)arg1;
+ (void)startMusicWorkFlowWithAweme:(id)arg1 info:(id)arg2 downloadedModel:(id)arg3 downloadedEffects:(id)arg4;
+ (void)startMusicWorkFlowWithInfo:(id)arg1;
+ (void)startUploadPhotoWithInfo:(id)arg1;
+ (void)startUploadAssetForStickPointVideoWithInfo:(id)arg1;
+ (void)startUploadVideoWorkFlowWithRefer:(id)arg1;
+ (void)startVideoWithStickerPanelUp:(_Bool)arg1 from:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)downloadStickerWithStickerIDArray:(id)arg1 musicModel:(id)arg2 musicDownloadDuration:(long long)arg3 referString:(id)arg4 trackInfo:(id)arg5 strictlyApplyFirstSticker:(_Bool)arg6 strictlyApplyMusic:(_Bool)arg7 progressView:(id)arg8 completion:(CDUnknownBlockType)arg9;
+ (void)startVideoWithStickerIDArray:(id)arg1 musicModel:(id)arg2 referString:(id)arg3 trackInfo:(id)arg4 strictlyApplyFirstSticker:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)_startVideoWithStickerID:(id)arg1 referString:(id)arg2 extraInfo:(id)arg3 prioritized:(_Bool)arg4 filterBusiness:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)startVideoWithStickerID:(id)arg1 referString:(id)arg2 extraInfo:(id)arg3 prioritized:(_Bool)arg4 filterBusiness:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)startVideoWithStickerID:(id)arg1 referString:(id)arg2 extraInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)startVideoWithStickerID:(id)arg1 referString:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)buildWorkFlowTrackParametersFrom:(id)arg1;
+ (void)startVideoWithRecordMode:(long long)arg1 enterFrom:(id)arg2 enterMethod:(id)arg3 parameters:(id)arg4;
+ (void)startVideoWithMVID:(id)arg1 inputData:(id)arg2 publishModel:(id)arg3 info:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)startMVVideoWithAweme:(id)arg1 withInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)startMVVideoWithChallenge:(id)arg1 mvID:(id)arg2 info:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)startMVVideoWithMVID:(id)arg1 info:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)startStickerVideoWithAweme:(id)arg1 withInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)startStickerVideoWithAweme:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)startStoryVideoWithInfo:(id)arg1 fromShake:(_Bool)arg2;
+ (void)handlestartOpenLiveSchema:(id)arg1;
+ (void)startVideoWithStatusID:(id)arg1 publishModel:(id)arg2 info:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)startStatusVideoWithChallenge:(id)arg1 statusID:(id)arg2 info:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)startStatusVideoWithStatusID:(id)arg1 info:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)startStatusVideoWithAweme:(id)arg1 withInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)p_configPublishViewModel:(id)arg1 draftModel:(id)arg2;
+ (void)createOrContinueTrimFlowWithInputData:(id)arg1;
+ (void)configDataForStitchVideWithLocalUrl:(id)arg1 Aweme:(id)arg2 enterFrom:(id)arg3 videoDownloadDuration:(long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)startStitchVideoWithAweme:(id)arg1 withInfo:(id)arg2 enterFrom:(id)arg3;
+ (void)startVideoRecordWithComment:(id)arg1 extraDictionary:(id)arg2;

@end

