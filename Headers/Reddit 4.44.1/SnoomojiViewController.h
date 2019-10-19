//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "CurrentActionSheetProtocol-Protocol.h"
#import "RUIActionSheetViewControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class BaseCollectionView, NSArray, NSString, RUIActionSheetViewController, SnoomojiImage;
@protocol SnoomojiViewControllerDelegate;

@interface SnoomojiViewController : BaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, RUIActionSheetViewControllerDelegate, CurrentActionSheetProtocol>
{
    _Bool _disableAnimatedImages;
    id <SnoomojiViewControllerDelegate> _delegate;
    SnoomojiImage *_selectedSnoomojiImage;
    RUIActionSheetViewController *_currentActionSheetViewController;
    NSString *_confirmationDialogButtonText;
    NSArray *_snoomojiImages;
    BaseCollectionView *_snoomojiCollectionView;
}

@property(retain, nonatomic) BaseCollectionView *snoomojiCollectionView; // @synthesize snoomojiCollectionView=_snoomojiCollectionView;
@property(retain, nonatomic) NSArray *snoomojiImages; // @synthesize snoomojiImages=_snoomojiImages;
@property(copy, nonatomic) NSString *confirmationDialogButtonText; // @synthesize confirmationDialogButtonText=_confirmationDialogButtonText;
@property(nonatomic) __weak RUIActionSheetViewController *currentActionSheetViewController; // @synthesize currentActionSheetViewController=_currentActionSheetViewController;
@property(retain, nonatomic) SnoomojiImage *selectedSnoomojiImage; // @synthesize selectedSnoomojiImage=_selectedSnoomojiImage;
@property(nonatomic) _Bool disableAnimatedImages; // @synthesize disableAnimatedImages=_disableAnimatedImages;
@property(nonatomic) __weak id <SnoomojiViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak RUIActionSheetViewController *actionSheetViewController;
- (void)actionSheetViewController:(id)arg1 didGetDismissedFromOutside:(_Bool)arg2;
- (void)actionSheetViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)prefersTabBarHidden;
- (_Bool)allowNonEdgyNavigationPopGesture;
- (id)majorContentView;
- (void)loadView;
- (id)initWithDelegate:(id)arg1 confirmationDialogButtonText:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

