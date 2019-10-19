//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class UIView;

@interface _TtC6Apollo22MessagesViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    // Error parsing type: , name: messagesCollectionView
    // Error parsing type: , name: messageInputBar
    // Error parsing type: , name: scrollsToBottomOnKeyboardBeginsEditing
    // Error parsing type: , name: maintainPositionOnKeyboardFrameChanged
    // Error parsing type: , name: additionalBottomInset
    // Error parsing type: , name: isFirstLayout
    // Error parsing type: , name: isMessagesControllerBeingDismissed
    // Error parsing type: , name: selectedIndexPathForMenu
    // Error parsing type: , name: messageCollectionViewBottomInset
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)clearMemoryCache;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, readonly) _Bool shouldAutorotate;
@property(nonatomic, readonly) UIView *inputAccessoryView;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)adjustScrollViewTopInset;
- (void)handleKeyboardDidChangeState:(id)arg1;
- (void)handleTextViewDidBeginEditing:(id)arg1;
- (void)menuControllerWillShow:(id)arg1;

@end

