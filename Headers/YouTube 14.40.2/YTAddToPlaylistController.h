//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTActionSheetControllerDelegate.h"
#import "YTCreatePlaylistViewControllerDelegate.h"
#import "YTResponder.h"
#import "YTTopController.h"

@class GIMMe, NSArray, NSSet, NSString, UIView, YTActionSheetController, YTIButtonRenderer, YTICommand, YTIdentityController;

@interface YTAddToPlaylistController : NSObject <YTActionSheetControllerDelegate, YTCreatePlaylistViewControllerDelegate, YTResponder, YTTopController>
{
    YTActionSheetController *_actionSheetController;
    YTAddToPlaylistController *_retainedSelf;
    NSSet *_addToPlaylistOptionControllers;
    id <YTResponder> _retainedParentResponder;
    YTICommand *_endpoint;
    YTIButtonRenderer *_menuTitleButtonRenderer;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTServices> _services;
    YTIdentityController *_identityController;
    UIView *_fromView;
    NSArray *_playlistAddToOptionRenderers;
    NSArray *_playlistAddToActionRenderers;
    struct CGRect _fromRect;
}

@property(retain, nonatomic) NSArray *playlistAddToActionRenderers; // @synthesize playlistAddToActionRenderers=_playlistAddToActionRenderers;
@property(retain, nonatomic) NSArray *playlistAddToOptionRenderers; // @synthesize playlistAddToOptionRenderers=_playlistAddToOptionRenderers;
@property(nonatomic) struct CGRect fromRect; // @synthesize fromRect=_fromRect;
@property(retain, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(readonly, nonatomic) YTIdentityController *identityController; // @synthesize identityController=_identityController;
@property(nonatomic) __weak id <YTServices> services; // @synthesize services=_services;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)newActionSheetController;
- (_Bool)handleActionsAndCheckForAddToToast:(id)arg1;
- (id)playlistIconForButton:(id)arg1;
- (void)handleButtonActionForButton:(id)arg1 fromView:(id)arg2;
- (void)didPressMenuTitleButton:(id)arg1;
- (void)makePlaylistsRequest:(id)arg1;
- (void)addToPlaylistWithID:(id)arg1 title:(id)arg2;
- (void)notifyPlaylistActionCompletedWithMessage:(id)arg1 playlistID:(id)arg2 title:(id)arg3;
- (void)prepareAndShowSheetInRotatedView:(id)arg1;
- (void)cleanup;
- (void)createPlaylistFromView:(id)arg1;
- (void)handleModelAfterSignIn;
- (_Bool)isCreatePlaylist:(id)arg1;
- (_Bool)isAddToPlaylist:(id)arg1;
- (id)playlistID;
- (id)videoID;
- (id)signInEndpointWithNextNavEndpoint:(id)arg1;
- (void)didTapCancel;
- (void)didTapDoneToCreatePlaylistWithTitle:(id)arg1 privacyStatus:(int)arg2;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)actionSheetDidDisappear:(id)arg1 cancelAction:(_Bool)arg2;
- (void)dealloc;
- (id)initWithServices:(id)arg1 identityController:(id)arg2 parentResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

