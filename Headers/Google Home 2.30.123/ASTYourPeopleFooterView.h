//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView;
@protocol ASTYourPeopleFooterViewDelegate;

@interface ASTYourPeopleFooterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <ASTYourPeopleFooterViewDelegate> _delegate;
    UICollectionView *_suggestionChipCollectionView;
    NSArray *_suggestionStringArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *suggestionStringArray; // @synthesize suggestionStringArray=_suggestionStringArray;
@property(retain, nonatomic) UICollectionView *suggestionChipCollectionView; // @synthesize suggestionChipCollectionView=_suggestionChipCollectionView;
@property(nonatomic) __weak id <ASTYourPeopleFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

