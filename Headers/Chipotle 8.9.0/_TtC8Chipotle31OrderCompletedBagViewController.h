//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8Chipotle22ChipotleViewController.h"

@class NSLayoutConstraint, UIButton, UICollectionView, UILabel, UIView, _TtC8Chipotle10ShadowView, _TtC8Chipotle18SlideoutDrawerView, _TtC8Chipotle26SlideoutDrawerDeliveryView;

@interface _TtC8Chipotle31OrderCompletedBagViewController : _TtC8Chipotle22ChipotleViewController
{
    // Error parsing type: , name: orderCompleteBagCollectionView
    // Error parsing type: , name: slideoutDrawerView
    // Error parsing type: , name: slideoutDrawerHeightConstraint
    // Error parsing type: , name: bottomBarView
    // Error parsing type: , name: bottomBarViewHeightConstraint
    // Error parsing type: , name: collectionViewBottomConstraint
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: signInButton
    // Error parsing type: , name: topDividerView
    // Error parsing type: , name: slideoutDrawerDeliveryView
    // Error parsing type: , name: slideoutDrawerDeliveryHeightConstraint
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: disposeBag
    // Error parsing type: , name: orderControlIndexPath
    // Error parsing type: , name: prototypeCells
    // Error parsing type: , name: sectionsAndCells
    // Error parsing type: , name: shouldShowLoyaltyPromptInCelebrationMode
    // Error parsing type: , name: shouldShowPromptSuccess
    // Error parsing type: , name: isTaxAndFeesExpanded
    // Error parsing type: , name: isOrderAvailable
    // Error parsing type: , name: feedbackNotificationManager
    // Error parsing type: , name: foodPrintDisplayState
    // Error parsing type: , name: foodPrintCellIndexPath
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)handleOrderStatusSilentNotificationWithNotification:(id)arg1;
- (void)didSelectSignInButton:(id)arg1;
- (void)didSelectCloseButton:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak NSLayoutConstraint *slideoutDrawerDeliveryHeightConstraint; // @synthesize slideoutDrawerDeliveryHeightConstraint;
@property(nonatomic) __weak _TtC8Chipotle26SlideoutDrawerDeliveryView *slideoutDrawerDeliveryView; // @synthesize slideoutDrawerDeliveryView;
@property(nonatomic) __weak _TtC8Chipotle10ShadowView *topDividerView; // @synthesize topDividerView;
@property(nonatomic) __weak UIButton *signInButton; // @synthesize signInButton;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak NSLayoutConstraint *collectionViewBottomConstraint; // @synthesize collectionViewBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *bottomBarViewHeightConstraint; // @synthesize bottomBarViewHeightConstraint;
@property(nonatomic) __weak UIView *bottomBarView; // @synthesize bottomBarView;
@property(nonatomic) __weak NSLayoutConstraint *slideoutDrawerHeightConstraint; // @synthesize slideoutDrawerHeightConstraint;
@property(nonatomic) __weak _TtC8Chipotle18SlideoutDrawerView *slideoutDrawerView; // @synthesize slideoutDrawerView;
@property(nonatomic) __weak UICollectionView *orderCompleteBagCollectionView; // @synthesize orderCompleteBagCollectionView;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;

@end

