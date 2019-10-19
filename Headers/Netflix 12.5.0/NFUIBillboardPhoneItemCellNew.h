//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIBillboardBaseItemCell.h"

#import "NFUICellFactoryItemProtocol-Protocol.h"
#import "NFUIDynamicStackButtonsDataSource-Protocol.h"
#import "NFUIDynamicStackButtonsDelegate-Protocol.h"
#import "NFUIReusableViewProtocol-Protocol.h"

@class IPInsetLabel, LolomoListViewModel, NFUIBillboardItemViewModel, NFUIDynamicStackButtonsView, NFUIGradientView, NFUILabel, NFUIPreviewTagsView, NSArray, NSLayoutConstraint, NSString, UICollectionView, UIImageView, UIViewController;

@interface NFUIBillboardPhoneItemCellNew : NFUIBillboardBaseItemCell <NFUIDynamicStackButtonsDelegate, NFUIDynamicStackButtonsDataSource, NFUICellFactoryItemProtocol, NFUIReusableViewProtocol>
{
    _Bool hasInlineVideo;
    _Bool _isLayoutPass;
    _Bool _didFinishButtonsHorizontalLayout;
    id delegate;
    LolomoListViewModel *_delegateListViewModel;
    UICollectionView *_delegateCollectionView;
    UIViewController *_delegateViewController;
    NFUIBillboardItemViewModel *_viewModel;
    NFUIGradientView *_topGradientView;
    NFUIGradientView *_bottomGradientView;
    IPInsetLabel *_badgeLabel;
    NFUILabel *_supplementalMessage;
    NFUIPreviewTagsView *_tagsView;
    NFUIDynamicStackButtonsView *_buttonsView;
    NSString *_billboardType;
    NSLayoutConstraint *_badgeHeightConstraint;
    NSLayoutConstraint *_supplementalHeightConstraint;
    NSLayoutConstraint *_tagsHeightConstraint;
    NSLayoutConstraint *_titleTreatmentBottomConstraint;
    long long _buttonsViewLeadingAndTrailingGap;
    NSArray *_tags;
    NSArray *_localCallToActions;
    UIImageView *_licensedBoxshot;
}

+ (id)viewModelForEntityId:(id)arg1;
+ (id)reuseIdentifier;
+ (id)dequeueForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2 withLolomoViewDelegate:(id)arg3;
+ (void)registerInCollectionView:(id)arg1 withLolomoViewDelegate:(id)arg2;
+ (void)load;
+ (_Bool)shouldReturnClassForType:(id)arg1 withModel:(id)arg2;
@property(retain, nonatomic) UIImageView *licensedBoxshot; // @synthesize licensedBoxshot=_licensedBoxshot;
@property(nonatomic) _Bool didFinishButtonsHorizontalLayout; // @synthesize didFinishButtonsHorizontalLayout=_didFinishButtonsHorizontalLayout;
@property(retain, nonatomic) NSArray *localCallToActions; // @synthesize localCallToActions=_localCallToActions;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) long long buttonsViewLeadingAndTrailingGap; // @synthesize buttonsViewLeadingAndTrailingGap=_buttonsViewLeadingAndTrailingGap;
@property(nonatomic) __weak NSLayoutConstraint *titleTreatmentBottomConstraint; // @synthesize titleTreatmentBottomConstraint=_titleTreatmentBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *tagsHeightConstraint; // @synthesize tagsHeightConstraint=_tagsHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *supplementalHeightConstraint; // @synthesize supplementalHeightConstraint=_supplementalHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *badgeHeightConstraint; // @synthesize badgeHeightConstraint=_badgeHeightConstraint;
@property(nonatomic) NSString *billboardType; // @synthesize billboardType=_billboardType;
@property(nonatomic) __weak NFUIDynamicStackButtonsView *buttonsView; // @synthesize buttonsView=_buttonsView;
@property(nonatomic) __weak NFUIPreviewTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(nonatomic) __weak NFUILabel *supplementalMessage; // @synthesize supplementalMessage=_supplementalMessage;
@property(nonatomic) __weak IPInsetLabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(nonatomic) __weak NFUIGradientView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(nonatomic) __weak NFUIGradientView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(retain, nonatomic) NFUIBillboardItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool isLayoutPass; // @synthesize isLayoutPass=_isLayoutPass;
@property(nonatomic) _Bool hasInlineVideo; // @synthesize hasInlineVideo;
@property(nonatomic) __weak UIViewController *delegateViewController; // @synthesize delegateViewController=_delegateViewController;
@property(nonatomic) __weak UICollectionView *delegateCollectionView; // @synthesize delegateCollectionView=_delegateCollectionView;
@property(nonatomic) __weak LolomoListViewModel *delegateListViewModel; // @synthesize delegateListViewModel=_delegateListViewModel;
@property(nonatomic) __weak id delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)trackingInfo;
- (id)getVolatileKeyPaths;
- (void)volatileDataFetched:(id)arg1 myListStatus:(unsigned long long)arg2;
- (void)configureLocalCallToActions:(id)arg1;
- (void)setupTags;
- (void)configureTagsView;
- (void)configureSupplementalLabel:(id)arg1;
- (void)configureNewBadge:(id)arg1;
- (void)setupButtonsHorizontalButtonsLayout;
- (void)setupMetaDataForEntity:(id)arg1 billboardType:(long long)arg2;
- (void)myListButtonPressed:(id)arg1 withAction:(id)arg2;
- (void)seeAllTappedWithUserInfo:(id)arg1;
- (void)infoTapped:(id)arg1;
- (void)playTapped:(id)arg1 userInfo:(id)arg2;
- (void)playButtonClicked:(id)arg1;
- (void)moreInfoClicked;
- (void)titleAvailable:(id)arg1;
- (void)queueModified:(id)arg1;
- (void)setupFallbackBackgroundImage:(id)arg1;
- (void)volatileDataFetched;
- (void)titleAvailable;
- (unsigned long long)stackButtonStyleTypeForIndex:(long long)arg1;
- (unsigned long long)stackButtonLayoutTypeForIndex:(long long)arg1;
- (void)buttonClicked:(id)arg1 withAction:(id)arg2;
- (void)setupGradients;
- (void)commonInit;
- (struct CGSize)calculatedSize:(struct CGSize)arg1 withModel:(id)arg2 withCollectionView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool shouldBlockDetailsAction;
@property(readonly) Class superclass;

@end

