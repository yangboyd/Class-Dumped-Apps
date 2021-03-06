//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

@class NSSet;

@interface _TtC8SlackKit32SKTokenSearchInputViewController : UICollectionViewController
{
    // Error parsing type: , name: flowLayout
    // Error parsing type: , name: tokensDataSource
    // Error parsing type: , name: inputParser
    // Error parsing type: , name: presentationObject
    // Error parsing type: , name: containerDelegate
    // Error parsing type: , name: pasteboardWrapper
    // Error parsing type: , name: shouldAllowNewlines
    // Error parsing type: , name: shouldAutofocusTextField
    // Error parsing type: , name: observerMap
    // Error parsing type: , name: displayKeyboard
    // Error parsing type: , name: selectedCellIndexPath
    // Error parsing type: , name: searchInputCell
    // Error parsing type: , name: currentSearchFilter
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;
- (long long)numberOfTokens;
- (void)resetSelectedCellIndexPath;
- (void)deleteBackwardsWithTextView:(id)arg1;
- (void)deleteWithTokenUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveWithToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateTokenDisplayImageForTokenObject:(id)arg1 displayImage:(id)arg2;
- (void)hasRemovedFromTokenListWithTokenObjectId:(id)arg1;
- (void)hasSelectedFromTokenListWithToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, readonly) double contentHeight;
@property(nonatomic, readonly) _Bool areAllTokensResolved;
@property(nonatomic, readonly) long long totalTokensCount;
@property(nonatomic, readonly) NSSet *resolvedTokenIds;

@end

