//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PlaylistFeature-Protocol.h"
#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, NSURL, SPTAllocationContext, SPTPlaylistGLUETheme, SPTPlaylistTestManager;
@protocol SPContextMenuFeature, SPTAbbaService, SPTAddToPlaylistService, SPTCollectionLogger, SPTCollectionPlatformService, SPTContainerService, SPTContainerUIService, SPTCoreService, SPTFeatureFlaggingService, SPTFreeTierService, SPTGLUEService, SPTNuxService, SPTPageRegistrationToken, SPTPlaylistPlatformService, SPTSessionService, SPTSnackbarService, SPTURIDispatchService, SPTYourLibraryService;

@interface PlaylistFeatureImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTService, PlaylistFeature>
{
    id <SPTAddToPlaylistService> _addToPlaylistService;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTSessionService> _clientSessionService;
    id <SPTCoreService> _coreService;
    id <SPTGLUEService> _glueService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTNuxService> _nuxService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTAbbaService> _abbaService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTSnackbarService> _snackbarService;
    id <SPTYourLibraryService> _yourLibraryService;
    id <SPTCollectionLogger> _logger;
    SPTPlaylistTestManager *_testManager;
    SPTPlaylistGLUETheme *_playlistGLUETheme;
    id <SPTPageRegistrationToken> _legacyPlaylistFolderViewControllerRegistrationToken;
    id <SPTPageRegistrationToken> _legacyPlaylistRootViewControllerRegistrationToken;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTPageRegistrationToken> legacyPlaylistRootViewControllerRegistrationToken; // @synthesize legacyPlaylistRootViewControllerRegistrationToken=_legacyPlaylistRootViewControllerRegistrationToken;
@property(retain, nonatomic) id <SPTPageRegistrationToken> legacyPlaylistFolderViewControllerRegistrationToken; // @synthesize legacyPlaylistFolderViewControllerRegistrationToken=_legacyPlaylistFolderViewControllerRegistrationToken;
@property(retain, nonatomic) SPTPlaylistGLUETheme *playlistGLUETheme; // @synthesize playlistGLUETheme=_playlistGLUETheme;
@property(retain, nonatomic) SPTPlaylistTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTCollectionLogger> logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTYourLibraryService> yourLibraryService; // @synthesize yourLibraryService=_yourLibraryService;
@property(nonatomic) __weak id <SPTSnackbarService> snackbarService; // @synthesize snackbarService=_snackbarService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(retain, nonatomic) id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTNuxService> nuxService; // @synthesize nuxService=_nuxService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTAddToPlaylistService> addToPlaylistService; // @synthesize addToPlaylistService=_addToPlaylistService;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (id)provideTestManager;
- (id)provideLogger;
@property(readonly, nonatomic) NSURL *rootlistURL;
- (id)providePlaylistFolderViewModelForFolderURL:(id)arg1;
- (id)providePlaylistFolderViewModelForRootList;
- (id)provideAddToPlaylistViewControllerWithTrackURLs:(id)arg1 inFolderURL:(id)arg2 addEntityURL:(id)arg3 defaultPlaylistName:(id)arg4 logContext:(id)arg5 sourceURL:(id)arg6 contextSourceURL:(id)arg7;
- (void)presentAddToPlaylistViewControllerWithTrackURLs:(id)arg1 addEntityURL:(id)arg2 defaultPlaylistName:(id)arg3 senderView:(id)arg4 logContext:(id)arg5 sourceURL:(id)arg6 contextSourceURL:(id)arg7;
- (void)unload;
- (id)providePlaylistGLUETheme;
- (id)providePlaylistFolderViewController:(id)arg1 context:(id)arg2;
- (id)providePlaylistRootViewControllerForURI:(id)arg1 context:(id)arg2;
- (id)provideEducationSnackBarPresenter;
- (void)registerMenuItems;
- (void)unregisterListOfPlaylistsPages;
- (void)registerListOfPlaylistsPages;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

