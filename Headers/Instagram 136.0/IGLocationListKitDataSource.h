//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGTabControlDelegate-Protocol.h>

@class IG4BLogger, IGInfoLinkedBusinessViewModel, IGLocation, IGLocationInfoPageModel, IGLocationLinkedBusinessHeaderSectionController, IGLocationMainFeedDataStore, IGPlaybackCoordinator, IGReel, IGSpinnerLabelViewModel, IGUser, IGUserSession, NSArray, NSString, NSURL;
@protocol IGDiscoverySectionLoggingProvider, IGLocationHeaderSectionControllerDelegate, IGLocationInfoPageHeaderSectionControllerDelegate, IGLocationListKitDataSourceDelegate;

@interface IGLocationListKitDataSource : NSObject <IGTabControlDelegate, IGListAdapterDataSource>
{
    id <IGDiscoverySectionLoggingProvider> _discoveryLoggingProvider;
    struct IGGridLayoutConfiguration _layoutConfig;
    IGLocation *_location;
    IGLocationMainFeedDataStore *_locationMainFeedDataStore;
    IGUserSession *_userSession;
    IGPlaybackCoordinator *_playbackCoordinator;
    id <IGLocationListKitDataSourceDelegate> _delegate;
    id <IGLocationHeaderSectionControllerDelegate> _mapViewDelegate;
    id <IGLocationInfoPageHeaderSectionControllerDelegate> _locationHeaderDelegate;
    long long _feedType;
    NSArray *_availableTabs;
    IGSpinnerLabelViewModel *_spinnerViewModel;
    IGLocationInfoPageModel *_infoPageModel;
    IGInfoLinkedBusinessViewModel *_linkedBusinessViewModel;
    IGReel *_reel;
    NSURL *_defaultImageURL;
    IG4BLogger *_templateLogger;
    NSString *_analyticsModule;
    _Bool _showTailLoadingIndicator;
    IGUser *_linkedBusinessUser;
    IGLocationLinkedBusinessHeaderSectionController *_linkedBusinessSectionController;
}

@property(retain, nonatomic) IGLocationLinkedBusinessHeaderSectionController *linkedBusinessSectionController; // @synthesize linkedBusinessSectionController=_linkedBusinessSectionController;
@property(retain, nonatomic) IGUser *linkedBusinessUser; // @synthesize linkedBusinessUser=_linkedBusinessUser;
@property(readonly, nonatomic) IGLocation *location; // @synthesize location=_location;
@property(nonatomic) _Bool showTailLoadingIndicator; // @synthesize showTailLoadingIndicator=_showTailLoadingIndicator;
- (void).cxx_destruct;
- (void)_updateModuleGraph;
- (id)_tabControlViewModel;
- (void)tabControl:(id)arg1 tappedSegmentIndex:(unsigned long long)arg2;
- (id)_parseLinkedBusinessDict:(id)arg1;
- (id)_getAvailableTabs;
- (long long)_selectedIndexforFeedType:(long long)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)hideLinkedBusiness;
- (void)configureLocationMainFeedWithDataStore:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateDefaultImageURL:(id)arg1;
- (void)updateReel:(id)arg1;
- (void)updateInfoPage:(id)arg1;
- (void)updateLinkedBusiness:(id)arg1;
- (void)updateLocation:(id)arg1;
- (id)initWithUserSession:(id)arg1 location:(id)arg2 layoutConfig:(struct IGGridLayoutConfiguration)arg3 playbackCoordinator:(id)arg4 locationFeedType:(long long)arg5 availableTabs:(id)arg6 loggingProvider:(id)arg7 IG4BLogger:(id)arg8 analyticsModule:(id)arg9 delegate:(id)arg10 mapViewDelegate:(id)arg11 locationHeaderDelegate:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

