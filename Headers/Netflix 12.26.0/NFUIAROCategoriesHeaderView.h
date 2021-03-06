//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NFUIOverlayPickerViewControllerDataSource-Protocol.h"
#import "NFUIOverlayPickerViewControllerDelegate-Protocol.h"
#import "NFUISecondaryNavigationElementTranslationProtocol-Protocol.h"

@class NFUIAROCategoriesHeaderImageView, NFUIAROGalleryMenuItem, NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIStackView, UIViewController;
@protocol NFUIAROCategoriesHeaderMenuItemProtocol, NFUIAROCategoriesHeaderViewDelegate;

@interface NFUIAROCategoriesHeaderView : UIView <NFUIOverlayPickerViewControllerDataSource, NFUIOverlayPickerViewControllerDelegate, NFUISecondaryNavigationElementTranslationProtocol>
{
    _Bool _interactionsEnabled;
    _Bool _itemsDirty;
    UIViewController<NFUIAROCategoriesHeaderViewDelegate> *_delegate;
    NFUIAROCategoriesHeaderImageView *_logoView;
    UIStackView *_menuItemsStackView;
    UIView<NFUIAROCategoriesHeaderMenuItemProtocol> *_selectedItem;
    UIView<NFUIAROCategoriesHeaderMenuItemProtocol> *_topLevelView;
    UIView<NFUIAROCategoriesHeaderMenuItemProtocol> *_subGenresView;
    NFUIAROGalleryMenuItem *_selectedMenuItem;
    NFUIAROGalleryMenuItem *_homeItem;
    NSMutableArray *_items;
    unsigned long long _menuState;
    unsigned long long _actionState;
    NSLayoutConstraint *_logoStackViewHorizontalSpacingConstraint;
    NSLayoutConstraint *_topLevelViewSpacingConstraint;
    NSLayoutConstraint *_topLevelViewTrailingConstraint;
    NSLayoutConstraint *_topLevelSubGenreSpacingConstraint;
    double _logoStackViewHorizontalSpacingDefaultValue;
    double _topLevelViewSpacingDefaultValue;
    double _topLevelViewTrailingDefaultValue;
    double _topLevelSubGenreSpacingDefaultValue;
    NSLayoutConstraint *_logoViewLeadingConstraint;
    NSLayoutConstraint *_logoViewWidthConstraint;
    NSArray *_selectedConstraints;
}

@property(retain, nonatomic) NSArray *selectedConstraints; // @synthesize selectedConstraints=_selectedConstraints;
@property(retain, nonatomic) NSLayoutConstraint *logoViewWidthConstraint; // @synthesize logoViewWidthConstraint=_logoViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *logoViewLeadingConstraint; // @synthesize logoViewLeadingConstraint=_logoViewLeadingConstraint;
@property(nonatomic) double topLevelSubGenreSpacingDefaultValue; // @synthesize topLevelSubGenreSpacingDefaultValue=_topLevelSubGenreSpacingDefaultValue;
@property(nonatomic) double topLevelViewTrailingDefaultValue; // @synthesize topLevelViewTrailingDefaultValue=_topLevelViewTrailingDefaultValue;
@property(nonatomic) double topLevelViewSpacingDefaultValue; // @synthesize topLevelViewSpacingDefaultValue=_topLevelViewSpacingDefaultValue;
@property(nonatomic) double logoStackViewHorizontalSpacingDefaultValue; // @synthesize logoStackViewHorizontalSpacingDefaultValue=_logoStackViewHorizontalSpacingDefaultValue;
@property(retain, nonatomic) NSLayoutConstraint *topLevelSubGenreSpacingConstraint; // @synthesize topLevelSubGenreSpacingConstraint=_topLevelSubGenreSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topLevelViewTrailingConstraint; // @synthesize topLevelViewTrailingConstraint=_topLevelViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topLevelViewSpacingConstraint; // @synthesize topLevelViewSpacingConstraint=_topLevelViewSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *logoStackViewHorizontalSpacingConstraint; // @synthesize logoStackViewHorizontalSpacingConstraint=_logoStackViewHorizontalSpacingConstraint;
@property(nonatomic) _Bool itemsDirty; // @synthesize itemsDirty=_itemsDirty;
@property(nonatomic) _Bool interactionsEnabled; // @synthesize interactionsEnabled=_interactionsEnabled;
@property(nonatomic) unsigned long long actionState; // @synthesize actionState=_actionState;
@property(nonatomic) unsigned long long menuState; // @synthesize menuState=_menuState;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NFUIAROGalleryMenuItem *homeItem; // @synthesize homeItem=_homeItem;
@property(retain, nonatomic) NFUIAROGalleryMenuItem *selectedMenuItem; // @synthesize selectedMenuItem=_selectedMenuItem;
@property(retain, nonatomic) UIView<NFUIAROCategoriesHeaderMenuItemProtocol> *subGenresView; // @synthesize subGenresView=_subGenresView;
@property(retain, nonatomic) UIView<NFUIAROCategoriesHeaderMenuItemProtocol> *topLevelView; // @synthesize topLevelView=_topLevelView;
@property(retain, nonatomic) UIView<NFUIAROCategoriesHeaderMenuItemProtocol> *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) UIStackView *menuItemsStackView; // @synthesize menuItemsStackView=_menuItemsStackView;
@property(retain, nonatomic) NFUIAROCategoriesHeaderImageView *logoView; // @synthesize logoView=_logoView;
@property(nonatomic) __weak UIViewController<NFUIAROCategoriesHeaderViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)translateElementForYValue:(double)arg1 withPercentVisible:(double)arg2;
- (unsigned long long)numberOfItems;
- (id)homeItemView;
- (id)itemViewAtIndex:(unsigned long long)arg1;
- (void)updateAceessibilityLabels;
- (_Bool)isUnfiltered;
- (id)a11yDescription;
- (void)handleLolomoResultsNotification:(id)arg1;
- (void)a11yAnnounceCurrentStatus;
- (void)handleVoiceOverChanged;
- (void)configureSubgenresAddingTopLevelItem:(_Bool)arg1;
- (void)overlayPickerDidAppear;
- (long long)initiallySelectedItem;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInPicker;
- (id)itemStringForRowAtIndexPath:(id)arg1;
- (void)refresh;
- (void)hideLogo;
- (void)setupConstraints;
- (void)removeAllMenuItems;
- (void)logPresentationItem:(id)arg1;
- (void)logPresentationOfMenu;
- (void)notifyDelegate:(id)arg1;
- (void)subGenreSelected:(id)arg1;
- (void)topLevelSelected:(id)arg1;
- (void)toggleStackView:(_Bool)arg1;
- (void)createPicker;
- (void)handleSubGenreTap:(id)arg1;
- (void)handleTopLevelTap:(id)arg1;
- (id)currentSelectedItemForReturnAnimation;
- (void)setupSelectedViewConstraints;
- (void)goToItemId:(id)arg1 withPresentationIdentifier:(id)arg2;
- (void)goToItemNamed:(id)arg1;
- (void)goToSelectedIndex:(unsigned long long)arg1;
- (void)goHome;
- (void)checkMenuState:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

