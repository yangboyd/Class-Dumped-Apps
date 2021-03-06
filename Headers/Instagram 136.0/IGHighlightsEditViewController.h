//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGHighlightCoverCellDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGHighlightsEditTagsViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGHighlightsMultiSelectControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGHighlightsMultiSelectViewControllerLoadDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGHighlightsMultiSelectViewControllerSelectionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLocationSuggestionDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGLocationSuggestionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryArchiveNavigationHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryArchiveSelectionDelegate-Protocol.h>

@class IGHighlightCoverTitleViewModel, IGHighlightsAddHashtagsCell, IGHighlightsMultiSelectViewController, IGLocation, IGLocationSuggestionCell, IGSegmentedTabPageViewController, IGStoryArchiveViewController, IGUserSession, NSArray, NSMutableSet, NSOrderedSet, NSSet, NSString, UITapGestureRecognizer, UIView;
@protocol IGHighlightCoverViewType, IGHighlightsEditViewControllerDelegate;

@interface IGHighlightsEditViewController : IGViewController <IGHighlightCoverCellDelegate, IGHighlightsEditTagsViewControllerDelegate, IGHighlightsMultiSelectViewControllerLoadDelegate, IGHighlightsMultiSelectViewControllerSelectionDelegate, IGHighlightsMultiSelectControllerDelegate, IGLocationSuggestionDelegate, IGLocationSuggestionDataSource, IGStoryArchiveNavigationHandler, IGStoryArchiveSelectionDelegate>
{
    IGUserSession *_userSession;
    IGSegmentedTabPageViewController *_tabPageViewController;
    IGStoryArchiveViewController *_archiveController;
    IGHighlightsMultiSelectViewController *_highlightsController;
    NSSet *_originalHighlightedItems;
    NSMutableSet *_itemsToAdd;
    NSMutableSet *_itemsToRemove;
    _Bool _isUnpublished;
    UITapGestureRecognizer *_titleTextFieldTapRecognizer;
    UIView<IGHighlightCoverViewType> *_headerView;
    IGHighlightCoverTitleViewModel *_coverTitleModel;
    IGLocationSuggestionCell *_locationCell;
    IGLocation *_initialLocation;
    IGLocation *_selectedLocation;
    IGHighlightsAddHashtagsCell *_addHashtagsCell;
    NSArray *_hashtagNames;
    id <IGHighlightsEditViewControllerDelegate> _completionDelegate;
}

@property(nonatomic) __weak id <IGHighlightsEditViewControllerDelegate> completionDelegate; // @synthesize completionDelegate=_completionDelegate;
- (void).cxx_destruct;
- (void)_textFieldEditingTapRecognizerTapped:(id)arg1;
- (void)_onDoneTapped:(id)arg1;
- (void)_onCancelTapped:(id)arg1;
- (void)storyArchiveViewController:(id)arg1 didDeselectStoryItem:(id)arg2;
- (void)storyArchiveViewController:(id)arg1 didSelectStoryItem:(id)arg2;
- (void)dismissStoryArchiveViewController:(id)arg1;
- (id)viewControllerForPresentingLocationPicker;
- (void)locationSuggestionCell:(id)arg1 stateChanged:(long long)arg2;
- (void)locationSuggestionCelldidClearLocation:(id)arg1;
- (void)locationSuggestionCell:(id)arg1 didSelectTokenWithLocation:(id)arg2;
- (void)locationSuggestionCell:(id)arg1 didFinishWithLocation:(id)arg2;
- (void)highlightsMultiSelectVC:(id)arg1 didLoadItems:(id)arg2 cover:(id)arg3;
- (void)highlightsMultiSelectVCDidDisableCover:(id)arg1;
- (void)highlightsMultiSelectVC:(id)arg1 didUpdateCover:(id)arg2;
- (void)highlightsMultiSelectVCDidTapCover:(id)arg1;
- (void)_endEditingTitleTextField;
- (void)highlightCoverCell:(id)arg1 textField:(id)arg2 didUpdateToEditing:(_Bool)arg3;
- (void)highlightCoverCellDidTapEditCover:(id)arg1;
- (void)highlightCoverCell:(id)arg1 didEditTitle:(id)arg2;
- (void)_handleSelectionUpdateWithFeedItem:(id)arg1 sourceController:(id)arg2 selected:(_Bool)arg3;
- (void)_updateCoverItemIfEmpty;
- (void)highlightsMultiSelectVC:(id)arg1 didDeselectFeedItem:(id)arg2;
- (void)highlightsMultiSelectVC:(id)arg1 didSelectFeedItem:(id)arg2;
- (void)editTagsViewController:(id)arg1 didTapDoneWithHashtagNames:(id)arg2;
- (void)_didTapHashtagCell:(id)arg1;
- (void)focusOnTitleEditField;
@property(readonly, copy, nonatomic) NSOrderedSet *highlightedItems;
- (void)updateCover:(id)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithStoryHighlightsModel:(id)arg1 isUnpublished:(_Bool)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

