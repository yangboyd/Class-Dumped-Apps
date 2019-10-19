//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, SCGalleryOperaConfiguration, SCGalleryOperaGroup, SCGalleryOperaMediaManager, SCOperaViewModel, SCUserSession;
@protocol SCGalleryOperaMagicMomentCaching;

@interface SCGalleryOperaSingleGroupDataSource : NSObject
{
    SCGalleryOperaGroup *_group;
    CDStruct_bac8f6e9 _baseMediaScenePath;
    SCGalleryOperaMediaManager *_mediaManager;
    SCGalleryOperaConfiguration *_configuration;
    id <SCGalleryOperaMagicMomentCaching> _magicMomentCache;
    SCUserSession *_userSession;
    NSString *_currentSnapId;
    NSMutableDictionary *_snapIdToGalleryOperaSnap;
    NSMutableDictionary *_snapIdToViewModelMap;
    NSMutableDictionary *_snapIdToLoadedMediaProperties;
    NSMutableArray *_delayToLoadSnapIds;
    SCOperaViewModel *_currentViewModel;
}

@property(retain, nonatomic) SCOperaViewModel *currentViewModel; // @synthesize currentViewModel=_currentViewModel;
- (void).cxx_destruct;
- (void)_removePropertiesFromPage:(id)arg1 removePropertyWithKeys:(id)arg2;
- (void)_appendPropertiesToPage:(id)arg1 newProperties:(id)arg2;
- (id)_pageForGallerySnap:(id)arg1;
- (void)_removeAllMediaLoadedPropertiesForSnapId:(id)arg1;
- (void)_appendMediaLoadedPropertiesForSnapId:(id)arg1 newProperties:(id)arg2;
- (void)_didLoadContentWithSnapId:(id)arg1 loadedProperties:(id)arg2;
- (void)_startToLoadSnap:(id)arg1 mediaScenePath:(CDStruct_bac8f6e9)arg2;
- (void)_startToLoadTransferringSnap:(id)arg1 mediaScenePath:(CDStruct_bac8f6e9)arg2;
- (void)_updateSingleViewModelForGallerySnap:(id)arg1 entryInfo:(id)arg2;
- (id)_pageIdForSnap:(id)arg1;
- (void)_updateSingleViewModelForSnap:(id)arg1;
- (void)_updateViewModelGroup;
- (void)_loadDelayedSnapsIfAvailable;
- (void)updateMagicMomentFrameTime:(id)arg1 forSnapId:(id)arg2;
- (id)resolveGalleryOperaSnapAtPageId:(id)arg1;
- (id)resolveGallerySnapAtPageId:(id)arg1;
- (void)handleMoveToNextEventAtPageId:(id)arg1 didTapToNext:(_Bool)arg2;
- (void)startToBrowsePageWithPageId:(id)arg1 distanceToCurrentDataSource:(long long)arg2;
- (void)removeMediaWithPageId:(id)arg1;
- (void)prepareToViewPageWithPageId:(id)arg1;
- (id)currentViewSnap;
- (void)updateGroup:(id)arg1;
- (void)buildViewModels;
- (void)dealloc;
- (id)initWithSingleGroup:(id)arg1 basePath:(CDStruct_bac8f6e9)arg2 mediaManager:(id)arg3 configuration:(id)arg4 magicMomentCache:(id)arg5 userSession:(id)arg6;

@end

