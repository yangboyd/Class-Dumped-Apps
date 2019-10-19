//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSectionDataProviding-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCExperimentManager, SCSearchStoriesPresenter, SCSearchStreamingCompositeDownloader, SCSearchVideoDownloader, SCUserSession;
@protocol NSCopying, SCImageDownloading, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCSearchStorySectionDataProvider : NSObject <SCUpdateListener, SCSectionDataProviding>
{
    SCExperimentManager *_experimentManager;
    SCSearchStoriesPresenter *_storiesPresenter;
    id <SCImageDownloading> _imageDownloader;
    SCSearchVideoDownloader *_videoDownloader;
    SCSearchStreamingCompositeDownloader *_streamingCompositeDownloader;
    SCUserSession *_userSession;
    SCEventListenerAnnouncer *_eventAnnouncer;
    _Bool _needsStoryCardContextForViewModels;
    _Bool _shouldUseSectionAsIndex;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
@property(nonatomic) _Bool shouldUseSectionAsIndex; // @synthesize shouldUseSectionAsIndex=_shouldUseSectionAsIndex;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)_updateSectionDataModelDynamicStory:(id)arg1 withIsSubscribed:(_Bool)arg2;
- (void)_handleSubscribeCallbackForDynamicStory:(id)arg1 isSubscribed:(_Bool)arg2;
- (id)_containerViewModelForDynamicStory:(id)arg1 storyCardContext:(id)arg2 sectionType:(id)arg3 resultRankingId:(id)arg4 storyCardColorTheme:(id)arg5;
- (id)_applyContainerCellViewModelsForIndexPath:(id)arg1 storyCardContext:(id)arg2;
- (void)_configureStoryCardCollectionViewCell:(id)arg1 withCellClass:(Class)arg2;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (long long)dataLoadingStatus;
- (id)configurationBlocksByReuseIdentifier;
- (id)contentCellClassesByReuseIdentifier;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)initWithUserSession:(id)arg1 storiesPresenter:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

