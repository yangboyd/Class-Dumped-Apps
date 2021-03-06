//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBNavigationController.h"

#import "DBGlobalAccountManagerObserver-Protocol.h"
#import "DBLinkableStateObserverProtocol-Protocol.h"
#import "DBMetadataUpdateObserver-Protocol.h"
#import "DBSplitViewDetailRootViewController-Protocol.h"

@class DBFileViewerController, DBObserverHandle, DBUserState, NSString, UIView;

@interface PadFileViewNavigationController : DBNavigationController <DBLinkableStateObserverProtocol, DBMetadataUpdateObserver, DBGlobalAccountManagerObserver, DBSplitViewDetailRootViewController>
{
    DBUserState *_userState;
    UIView *_smokeView;
    DBObserverHandle *_accountSwitcherObserver;
    _Bool _isEmptyView;
}

@property(readonly, nonatomic) _Bool isEmptyView; // @synthesize isEmptyView=_isEmptyView;
- (void).cxx_destruct;
- (void)refreshHideDetailPaneButtonIfNeeded;
- (void)db_setupCollapseButtonOnViewController:(id)arg1;
- (void)globalAccountManager:(id)arg1 didChangeToUserState:(id)arg2;
- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissPopover;
- (void)metadataManager:(id)arg1 didRenameOldPath:(id)arg2 toNewPath:(id)arg3 updatedMetadata:(id)arg4;
- (void)metadataManager:(id)arg1 didMoveEntries:(id)arg2 toPath:(id)arg3 updatedMetadataEntries:(id)arg4;
- (void)metadataManager:(id)arg1 didDeleteEntries:(id)arg2;
- (void)db_photosDeletedNotification:(id)arg1;
- (void)db_removeViewIfCurrentViewHasAncestorPathIn:(id)arg1 hasMetadataManager:(id)arg2;
- (void)db_removeViewIfCurrentViewHasPath:(id)arg1 hasUserId:(id)arg2;
- (id)currentFileEntry;
@property(readonly, nonatomic) DBFileViewerController *fileViewController;
- (void)openFileViewControllerForPath:(id)arg1 fileType:(unsigned long long)arg2 userId:(id)arg3 withConsumerKey:(id)arg4 animated:(_Bool)arg5 shouldExitFullscreen:(_Bool)arg6 analyticsParams:(id)arg7 fileOpenContext:(id)arg8;
- (void)showViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_setViewController:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)shouldAutorotate;
- (_Bool)isEmptyOrHasPlaceholder;
- (void)db_addAnimationForSmoke;
- (void)db_updateMasterVisibility;
- (void)ensureMasterVisibleWithCompletion:(CDUnknownBlockType)arg1;
- (void)ensureMasterVisibleDelayed;
- (void)setSmoked:(_Bool)arg1;
- (_Bool)smoked;
- (void)db_removeObserversForUserState:(id)arg1;
- (void)db_addObserversForUserState:(id)arg1;
- (void)dealloc;
- (id)initWithRootViewController:(id)arg1 withUserState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

