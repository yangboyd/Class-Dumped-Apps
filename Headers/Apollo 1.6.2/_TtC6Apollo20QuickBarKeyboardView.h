//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton;

@interface _TtC6Apollo20QuickBarKeyboardView : UIView
{
    // Error parsing type: , name: autocompleteCollectionView
    // Error parsing type: , name: autocompleteCollectionViewLayout
    // Error parsing type: , name: topSeparator
    // Error parsing type: , name: mainActionButtonsView
    // Error parsing type: , name: addLinkTitleView
    // Error parsing type: , name: mainViewDistanceFromLeftConstraint
    // Error parsing type: , name: topSeparatorLeftDistanceConstraint
    // Error parsing type: , name: topSeparatorRightDistanceConstraint
    // Error parsing type: , name: topSeparatorHeightConstraint
    // Error parsing type: , name: cameraButton
    // Error parsing type: , name: linkButton
    // Error parsing type: , name: boldButton
    // Error parsing type: , name: italicsButton
    // Error parsing type: , name: subredditButton
    // Error parsing type: , name: userButton
    // Error parsing type: , name: moreButton
    // Error parsing type: , name: delegate
    // Error parsing type: , name: currentlyVisibleView
    // Error parsing type: , name: typeToSearch
    // Error parsing type: , name: alwaysFullWidthSeparator
    // Error parsing type: , name: suggestions
    // Error parsing type: , name: usersToSearch
    // Error parsing type: , name: additionalSubredditsToSearch
    // Error parsing type: , name: typedTextToFilter
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)addTitleToLinkButtonTapped:(id)arg1;
- (void)moreButtonTapped:(id)arg1;
- (void)userButtonTapped:(id)arg1;
- (void)subredditButtonTapped:(id)arg1;
- (void)italicsButtonTapped:(id)arg1;
- (void)boldButtonTapped:(id)arg1;
- (void)linkButtonTapped:(id)arg1;
- (void)cameraButtonTapped:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)awakeFromNib;
- (void)layoutSubviews;
@property(nonatomic) __weak UIButton *moreButton; // @synthesize moreButton;
@property(nonatomic) __weak UIButton *userButton; // @synthesize userButton;
@property(nonatomic) __weak UIButton *subredditButton; // @synthesize subredditButton;
@property(nonatomic) __weak UIButton *italicsButton; // @synthesize italicsButton;
@property(nonatomic) __weak UIButton *boldButton; // @synthesize boldButton;
@property(nonatomic) __weak UIButton *linkButton; // @synthesize linkButton;
@property(nonatomic) __weak UIButton *cameraButton; // @synthesize cameraButton;
@property(nonatomic) __weak NSLayoutConstraint *topSeparatorHeightConstraint; // @synthesize topSeparatorHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *topSeparatorRightDistanceConstraint; // @synthesize topSeparatorRightDistanceConstraint;
@property(nonatomic) __weak NSLayoutConstraint *topSeparatorLeftDistanceConstraint; // @synthesize topSeparatorLeftDistanceConstraint;
@property(nonatomic) __weak NSLayoutConstraint *mainViewDistanceFromLeftConstraint; // @synthesize mainViewDistanceFromLeftConstraint;
@property(nonatomic) __weak UIView *addLinkTitleView; // @synthesize addLinkTitleView;
@property(nonatomic) __weak UIView *mainActionButtonsView; // @synthesize mainActionButtonsView;
@property(nonatomic) __weak UIView *topSeparator; // @synthesize topSeparator;

@end

