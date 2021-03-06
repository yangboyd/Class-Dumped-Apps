//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACCMusicModel, AWEPhotoToVideoMonitorInfo, IESCategoryEffectsModel, IESEffectModel, NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol AWEMVTemplateModelDelegate;

@interface AWEMVTemplateModel : NSObject
{
    _Bool _hasMore;
    _Bool _isLoadingData;
    _Bool _didLoadedFirstPageData;
    _Bool _isSinglePhotoTemplateDownloading;
    _Bool _isMultiplePhotoTemplateDownloading;
    _Bool _isTemplateMusicDownloading;
    id <AWEMVTemplateModelDelegate> _delegate;
    NSArray *_templateModels;
    NSDictionary *_trackExtraDic;
    NSMutableDictionary *_mvChallengeNameDict;
    NSArray *_urlPrefix;
    NSMutableDictionary *_effectModelTemplateInfos;
    NSMutableDictionary *_downloadingProgress;
    NSArray *_categories;
    IESCategoryEffectsModel *_categoryEffects;
    long long _loadCursor;
    long long _sortingPosition;
    IESEffectModel *_sameMVModel;
    IESEffectModel *_singlePhotoToVideoModel;
    IESEffectModel *_multiplePhotoToVideoModel;
    IESEffectModel *_feedPhotoToVideoModel;
    NSArray *_musicList;
    ACCMusicModel *_musicModel;
    ACCMusicModel *_lastMusicModel;
    ACCMusicModel *_feedMusicModel;
    CDUnknownBlockType _singlePhotoTemplateCompletion;
    CDUnknownBlockType _multiplePhotoTemplateCompletion;
    NSString *_feedPhotoTemplateDownloadingModelId;
    unsigned long long _feedVideoPhotoCountType;
    AWEPhotoToVideoMonitorInfo *_photoToVideoMonitorInfo;
}

+ (void)addEffectModelToManagerIfNeeds:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) AWEPhotoToVideoMonitorInfo *photoToVideoMonitorInfo; // @synthesize photoToVideoMonitorInfo=_photoToVideoMonitorInfo;
@property(nonatomic) unsigned long long feedVideoPhotoCountType; // @synthesize feedVideoPhotoCountType=_feedVideoPhotoCountType;
@property(copy, nonatomic) NSString *feedPhotoTemplateDownloadingModelId; // @synthesize feedPhotoTemplateDownloadingModelId=_feedPhotoTemplateDownloadingModelId;
@property(nonatomic) _Bool isTemplateMusicDownloading; // @synthesize isTemplateMusicDownloading=_isTemplateMusicDownloading;
@property(nonatomic) _Bool isMultiplePhotoTemplateDownloading; // @synthesize isMultiplePhotoTemplateDownloading=_isMultiplePhotoTemplateDownloading;
@property(nonatomic) _Bool isSinglePhotoTemplateDownloading; // @synthesize isSinglePhotoTemplateDownloading=_isSinglePhotoTemplateDownloading;
@property(copy, nonatomic) CDUnknownBlockType multiplePhotoTemplateCompletion; // @synthesize multiplePhotoTemplateCompletion=_multiplePhotoTemplateCompletion;
@property(copy, nonatomic) CDUnknownBlockType singlePhotoTemplateCompletion; // @synthesize singlePhotoTemplateCompletion=_singlePhotoTemplateCompletion;
@property(retain, nonatomic) ACCMusicModel *feedMusicModel; // @synthesize feedMusicModel=_feedMusicModel;
@property(retain, nonatomic) ACCMusicModel *lastMusicModel; // @synthesize lastMusicModel=_lastMusicModel;
@property(retain, nonatomic) ACCMusicModel *musicModel; // @synthesize musicModel=_musicModel;
@property(retain, nonatomic) NSArray *musicList; // @synthesize musicList=_musicList;
@property(retain, nonatomic) IESEffectModel *feedPhotoToVideoModel; // @synthesize feedPhotoToVideoModel=_feedPhotoToVideoModel;
@property(retain, nonatomic) IESEffectModel *multiplePhotoToVideoModel; // @synthesize multiplePhotoToVideoModel=_multiplePhotoToVideoModel;
@property(retain, nonatomic) IESEffectModel *singlePhotoToVideoModel; // @synthesize singlePhotoToVideoModel=_singlePhotoToVideoModel;
@property(retain, nonatomic) IESEffectModel *sameMVModel; // @synthesize sameMVModel=_sameMVModel;
@property(nonatomic) _Bool didLoadedFirstPageData; // @synthesize didLoadedFirstPageData=_didLoadedFirstPageData;
@property(nonatomic) _Bool isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(nonatomic) long long sortingPosition; // @synthesize sortingPosition=_sortingPosition;
@property(nonatomic) long long loadCursor; // @synthesize loadCursor=_loadCursor;
@property(retain, nonatomic) IESCategoryEffectsModel *categoryEffects; // @synthesize categoryEffects=_categoryEffects;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSMutableDictionary *downloadingProgress; // @synthesize downloadingProgress=_downloadingProgress;
@property(retain, nonatomic) NSMutableDictionary *effectModelTemplateInfos; // @synthesize effectModelTemplateInfos=_effectModelTemplateInfos;
@property(copy, nonatomic) NSArray *urlPrefix; // @synthesize urlPrefix=_urlPrefix;
@property(retain, nonatomic) NSMutableDictionary *mvChallengeNameDict; // @synthesize mvChallengeNameDict=_mvChallengeNameDict;
@property(copy, nonatomic) NSDictionary *trackExtraDic; // @synthesize trackExtraDic=_trackExtraDic;
@property(copy, nonatomic, setter=setTemplateModels:) NSArray *templateModels; // @synthesize templateModels=_templateModels;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) __weak id <AWEMVTemplateModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)templateInfoForModel:(id)arg1;
- (void)p_makeMVModelFirst:(id)arg1;
- (void)downloadMaterialForModel:(id)arg1;
- (void)downloadMaterialWithEffectId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)downloadProgressForModel:(id)arg1;
- (long long)templateTypeForModel:(id)arg1;
- (id)templatePicFillMode:(id)arg1;
- (long long)templatePicInputHeight:(id)arg1;
- (long long)templatePicInputWidth:(id)arg1;
- (long long)templateMaxMaterialForModel:(id)arg1;
- (long long)templateMinMaterialForModel:(id)arg1;
- (id)templatePictureCoverURLForModel:(id)arg1;
- (id)templateVideoCoverURLForModel:(id)arg1;
- (id)templateModelWithEffectId:(id)arg1;
- (void)setUpPlaceholderData;
- (void)updateTemplateModels:(id)arg1;
- (id)effectForPublishModel:(id)arg1;
- (void)reloadDataFromCache;
- (void)p_updatePageInfo:(id)arg1 isLoadMore:(_Bool)arg2;
- (void)p_reset;
- (void)p_loadCacheData;
- (void)p_loadMoreData;
- (void)p_fetchMVData;
- (void)checkAndUpdatePhotoMovieTemplate;
- (id)init;
- (id)timeDiffForStart:(double)arg1 end:(double)arg2;
- (id)photoToVideoMoniterInfoSucceeed:(_Bool)arg1 isSinglePhoto:(_Bool)arg2 startTime:(double)arg3;
- (void)asyncFetchPhotoToVideoTemplateWithIsSinglePhoto:(_Bool)arg1 needFetchHotMusicList:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadMaterialWithEffect:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPhotoToVideoMusic:(_Bool)arg1 WithRetryBlock:(CDUnknownBlockType)arg2;
- (void)fetchPhotoToVideoMusicList;
- (void)preFetchPhotoToVideoMusicList:(_Bool)arg1;
- (_Bool)finishCompletionForSameModel;
- (void)finishCompletion;
- (_Bool)enableUseMusicWithMusic:(id)arg1;
- (void)switchMusicModel;
- (void)resetFeedPhotoCountType;
- (id)videoMusicModelWithType:(unsigned long long)arg1;
- (id)feedVideoMusicModelForType:(unsigned long long)arg1;
- (void)preFetchPhotoToVideoFeedMusicWithMusicId:(id)arg1;
- (void)prefetchMVTemplateForSlideShowMVId:(id)arg1 photoCountType:(unsigned long long)arg2;
- (void)prefetchMVTemplatesForPanel:(id)arg1;
- (void)finishPhotoToVideoTemplateDownloadFor:(id)arg1;
- (void)prefetchCachedPhotoToVideoTemplates;
- (void)updatePhotoVideoModel:(id)arg1 forPanel:(id)arg2;
- (id)chooseEffectModelFrom:(id)arg1;
- (_Bool)support1080P;
- (void)prefetchPhotoToVideoTemplates;
- (id)defaultMusicForPhotoToVideoTemplate;
- (id)photoToVideoTemplateWithIsSinglePhoto:(_Bool)arg1;
- (void)cleanPhotoToVideoMusic;

@end

