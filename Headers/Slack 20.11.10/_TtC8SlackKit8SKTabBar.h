//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SlackKit/UICollectionViewDelegateFlowLayout-Protocol.h>

@interface _TtC8SlackKit8SKTabBar : UIView <UICollectionViewDelegateFlowLayout>
{
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: progressView
    // Error parsing type: , name: tabProgress
    // Error parsing type: , name: selectedTabIndex
    // Error parsing type: , name: presentationObject
    // Error parsing type: , name: observerMap
}

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)contentSizeChanged;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

