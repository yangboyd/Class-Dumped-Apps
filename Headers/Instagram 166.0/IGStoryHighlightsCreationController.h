//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGHighlightsCoverEditViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGHighlightsEditDetailsViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGHighlightsEditViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryArchiveNavigationHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryArchiveSelectionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryHighlightCustomCoverUploaderDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryHighlightsCreationControllerType-Protocol.h>

@class IGHighlightCreationModel, IGNavigationController, IGStoryHighlightCustomCoverUploader, IGUserSession, NSString;
@protocol IGStoryHighlightsCreationControllerDelegate;

@interface IGStoryHighlightsCreationController : IGViewController <IGHighlightsEditViewControllerDelegate, IGHighlightsEditDetailsViewControllerDelegate, IGHighlightsCoverEditViewControllerDelegate, IGStoryArchiveNavigationHandler, IGStoryArchiveSelectionDelegate, IGStoryHighlightCustomCoverUploaderDelegate, IGStoryHighlightsCreationControllerType>
{
    IGUserSession *_userSession;
    long long _mode;
    long long _entryPoint;
    NSString *_creationToken;
    IGHighlightCreationModel *_highlightModel;
    IGHighlightCreationModel *_originalHighlightModel;
    IGNavigationController *_navigationController;
    IGStoryHighlightCustomCoverUploader *_coverUploader;
    CDUnknownBlockType _coverUploadCompleteBlock;
    id <IGStoryHighlightsCreationControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryHighlightsCreationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)statusBarStyle;
- (void)createPrivateHighlightWithController:(id)arg1;
- (void)_showErrorAlert;
- (void)_updateController:(id)arg1 rightBarItemWithItem:(id)arg2 enabled:(_Bool)arg3;
- (void)completeWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)createHighlightReelWithController:(id)arg1;
- (void)publishReelWithController:(id)arg1 addedItems:(id)arg2 removedItems:(id)arg3 title:(id)arg4;
- (void)editReelWithController:(id)arg1 addedItems:(id)arg2 removedItems:(id)arg3 title:(id)arg4;
- (void)highlightCustomCoverUploader:(id)arg1 didFinishUploadWithUploadID:(id)arg2;
- (void)highlightCustomCoverUploader:(id)arg1 didFailUploadForUploadID:(id)arg2;
- (void)dismissStoryArchiveViewController:(id)arg1 navigationAction:(long long)arg2;
- (void)highlightsCoverEditVC:(id)arg1 didTapDoneWithCustomImage:(id)arg2;
- (void)highlightsCoverEditVC:(id)arg1 didTapDoneWithCoverItem:(id)arg2 cropRect:(struct CGRect)arg3;
- (void)highlightsCoverEditVCDidTapCancel:(id)arg1;
- (void)_showDeleteHighlightConfirmation;
- (void)editHighlightsVC:(id)arg1 didUpdateCover:(id)arg2;
- (void)editHighlightsVCDidTapCover:(id)arg1;
- (void)editHighlightsVCDidTapCancel:(id)arg1 didChangeSelection:(_Bool)arg2;
- (void)editHighlightsVC:(id)arg1 didTapDoneWithAddedItems:(id)arg2 removedItems:(id)arg3 title:(id)arg4;
- (void)highlightsEditDetailsVCDidTapCancel:(id)arg1;
- (void)highlightsEditDetailsVC:(id)arg1 didTapDoneWithTitle:(id)arg2 coverModel:(id)arg3;
- (void)_updateArchiveControllerNavigationBar:(id)arg1;
- (void)storyArchiveViewController:(id)arg1 didDeselectStoryItem:(id)arg2;
- (void)storyArchiveViewController:(id)arg1 didSelectStoryItem:(id)arg2;
- (void)_onStoryArchiveViewControllerDoneTapped:(id)arg1;
- (void)_onStoryArchiveViewControllerCancelTapped:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCreationMode:(long long)arg1 entryPoint:(long long)arg2 userSession:(id)arg3;
- (id)initWithCreationMode:(long long)arg1 entryPoint:(long long)arg2 items:(id)arg3 reelPK:(id)arg4 title:(id)arg5 coverInfo:(id)arg6 userSession:(id)arg7 reelType:(long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

