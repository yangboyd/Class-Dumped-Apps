//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCollectionViewSection-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCSearchCarouselContainerCollectionViewCellDelegate-Protocol.h"

@class NSArray, NSString, SCCollectionViewSectionUpdateModel, SCEventListenerAnnouncer, SCSearchQueryStateAwareSupplementaryViewProvider, SCSearchSession, SCSearchUserCardCarouselSectionConfiguration;
@protocol SCCollectionViewSectionDelegate, SCCollectionViewSectionLayoutProviding, SCSearchIntentHandler;

@interface SCSearchResultRelatedPeopleSection : NSObject <SCSearchCarouselContainerCollectionViewCellDelegate, SCEventListener, SCCollectionViewSection, SCEventAnnouncing>
{
    SCSearchSession *_searchSession;
    SCSearchUserCardCarouselSectionConfiguration *_configuration;
    NSArray *_carouselContainerCellModels;
    SCEventListenerAnnouncer *_eventAnnouncer;
    _Bool _shouldResetCarouselContentOffset;
    SCSearchQueryStateAwareSupplementaryViewProvider *_queryStateAwareSupplementaryProvider;
    SCCollectionViewSectionUpdateModel *_sectionUpdateModel;
    id <SCCollectionViewSectionDelegate> _delegate;
    id <SCSearchIntentHandler> _intentHandler_DEPRECATED;
    long long _dataLoadingStatus;
}

+ (id)announcerIdentifier;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler_DEPRECATED; // @synthesize intentHandler_DEPRECATED=_intentHandler_DEPRECATED;
@property(nonatomic) __weak id <SCCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SCCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
- (void).cxx_destruct;
- (void)_announceSearchResults;
- (id)_extraDataForIndexPath:(id)arg1 actionIdentifier:(id)arg2;
- (void)_updateReplaceConfigurationAndReload:(id)arg1;
- (void)_updateReplaceContainerCellModels:(id)arg1;
- (void)_updateReplaceConfiguration:(id)arg1;
- (void)_updateWithConfiguration:(id)arg1 shouldResetContentOffset:(_Bool)arg2;
- (void)_resetSectionIfNeeded;
- (void)_playStoryWithSourceView:(id)arg1 friendStories:(id)arg2;
- (void)_handleOpenMiniProfileWithSnapchatter:(id)arg1 searchPerson:(id)arg2 searchPersonViewModel:(id)arg3 indexPath:(id)arg4;
- (void)_showMiniprofileWithPersonViewModel:(id)arg1 indexPath:(id)arg2;
- (void)_updateViewStateForViewModelAtIndex:(unsigned long long)arg1;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 willDisplayAtIndexPath:(id)arg2 scrolled:(_Bool)arg3;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 didTriggerActionOnItemAtIndexPath:(id)arg2 withActionModel:(id)arg3 fromSourceView:(id)arg4;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 didTapItemAtIndexPath:(id)arg2;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)sectionInfo;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfCellsInSection;
- (id)reuseCellClassesByIdentifiers;
- (void)applyConfiguration:(id)arg1;
- (void)tearDown;
- (void)setUp;
- (id)supplementaryViewProvider;
- (id)initWithSearchSession:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <SCCollectionViewSectionLayoutProviding> layoutCalculator;
@property(readonly) Class superclass;

@end

