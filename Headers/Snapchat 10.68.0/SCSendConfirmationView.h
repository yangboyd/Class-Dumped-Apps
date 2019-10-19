//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSOrderedSet, NSString, SCGradientView, SCGrowingButton, SCLoadingIndicatorView, UIButton, UICollectionView, UILabel;
@protocol SCSendConfirmationViewControllerDelegate;

@interface SCSendConfirmationView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UIView *_contentView;
    SCGrowingButton *_sendButton;
    UIButton *_sendLabelButton;
    UILabel *_hintLabel;
    NSArray *_labelInfos;
    SCLoadingIndicatorView *_sendingIndicator;
    UIView *_sendButtonContainerView;
    double _buttonLabelExtraWidth;
    unsigned long long _sendButtonStyle;
    NSString *_currentUserId;
    _Bool _ctaButtonEnabled;
    UIButton *_addMoreButton;
    NSOrderedSet *_orderedItemIds;
    UICollectionView *_recipientsCollectionView;
    _Bool _showGradientLayer;
    SCGradientView *_gradientView;
    _Bool _pillEnabled;
    double _buttonRightOffset;
    double _buttonHeight;
    _Bool _addToMyStory;
    _Bool _addToMyGallery;
    _Bool _quickSend;
    id <SCSendConfirmationViewControllerDelegate> _delegate;
    double _contentBottomInset;
    NSArray *_friendRecipients;
    NSArray *_quickAddRecipients;
    NSArray *_contactSnapchatterRecipients;
    NSArray *_usernameSearchedRecipients;
    NSArray *_mischiefsSelected;
    NSArray *_sharedStoriesSelected;
    NSArray *_groupStoriesSelected;
    NSArray *_businessProfilesSelected;
    NSArray *_appStoriesSelected;
}

@property(copy, nonatomic) NSArray *appStoriesSelected; // @synthesize appStoriesSelected=_appStoriesSelected;
@property(readonly, copy, nonatomic) NSArray *businessProfilesSelected; // @synthesize businessProfilesSelected=_businessProfilesSelected;
@property(copy, nonatomic) NSArray *groupStoriesSelected; // @synthesize groupStoriesSelected=_groupStoriesSelected;
@property(copy, nonatomic) NSArray *sharedStoriesSelected; // @synthesize sharedStoriesSelected=_sharedStoriesSelected;
@property(copy, nonatomic) NSArray *mischiefsSelected; // @synthesize mischiefsSelected=_mischiefsSelected;
@property(readonly, copy, nonatomic) NSArray *usernameSearchedRecipients; // @synthesize usernameSearchedRecipients=_usernameSearchedRecipients;
@property(readonly, copy, nonatomic) NSArray *contactSnapchatterRecipients; // @synthesize contactSnapchatterRecipients=_contactSnapchatterRecipients;
@property(readonly, copy, nonatomic) NSArray *quickAddRecipients; // @synthesize quickAddRecipients=_quickAddRecipients;
@property(copy, nonatomic) NSArray *friendRecipients; // @synthesize friendRecipients=_friendRecipients;
@property(nonatomic) _Bool quickSend; // @synthesize quickSend=_quickSend;
@property(nonatomic) _Bool addToMyGallery; // @synthesize addToMyGallery=_addToMyGallery;
@property(nonatomic) _Bool addToMyStory; // @synthesize addToMyStory=_addToMyStory;
@property(nonatomic) double contentBottomInset; // @synthesize contentBottomInset=_contentBottomInset;
@property(nonatomic) __weak id <SCSendConfirmationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGRect)_recipientsCollectionViewFrame;
- (id)_displayedLabelInfos;
- (_Bool)hasOnlyFriendRecipients;
- (long long)_selectedRecipientsCount;
- (_Bool)hasSelectedStories;
- (_Bool)hasSelectedRecipients;
- (void)hideSendingIndicator;
- (void)showSendingIndicator;
- (id)sendingIndicator;
- (void)_addDisplayname:(id)arg1 labelInfos:(id)arg2 labelInfoMaps:(id)arg3 type:(long long)arg4 searchKey:(id)arg5 start:(double *)arg6 itemId:(id)arg7;
- (void)_appendViewModels:(id)arg1 labelInfos:(id)arg2 labelInfoMaps:(id)arg3 type:(long long)arg4 start:(double *)arg5;
- (id)_truncatedRecipientsListWithCount:(id)arg1;
- (void)_scrollToLastItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_orderedLabelInfos:(id)arg1 labelInfoMaps:(id)arg2;
- (void)_updateRecipientsAnimated:(_Bool)arg1;
- (void)updateViewModel:(id)arg1 orderedItemIds:(id)arg2;
- (void)updateViewModel:(id)arg1;
- (void)forceUpdateRecipients;
- (id)allPersonRecipients;
- (void)_didSelectLabelInfo:(id)arg1;
- (void)_recipientsScrollViewTapped:(id)arg1;
- (_Bool)_respondsToTappingOnRecipientsEvents;
- (void)_sendLabelButtonPressed;
- (void)_sendButtonPressed;
- (void)scrollToLeft;
- (void)_setupBackground;
- (struct CGRect)_hintLabelFrame;
- (void)updateHintLabelWithAttributedText:(id)arg1 visible:(_Bool)arg2;
- (void)showTapToAddLabel;
- (double)_sendButtonTopMargin;
- (struct CGRect)_addMoreButtonFrame;
- (void)_addMoreButtonTouchUpOutside;
- (void)_addMoreButtonTouchUpInside:(id)arg1;
- (void)_addMoreButtonTouchDown;
- (struct CGRect)_rightGradientFrame;
- (double)_sendButtonImageRightOffset;
- (double)_sendButtonHeight;
- (double)_sendButtonWidth;
- (struct CGRect)_sendButtonFrame;
- (void)_updateAddMoreButtonFrame;
- (void)_addMoreButton;
- (struct CGRect)_contentViewFrame;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 showHintLabel:(_Bool)arg2 currentUserId:(id)arg3 sendToCTAButtonEnabled:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1 showHintLabel:(_Bool)arg2 currentUserId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

