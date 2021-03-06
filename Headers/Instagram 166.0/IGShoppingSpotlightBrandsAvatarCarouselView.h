//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/UICollectionViewDataSource-Protocol.h>

@class CADisplayLink, IGShoppingSpotlightTileBrandsAvatarCarouselCollectionViewLayout, NSArray, NSString, UICollectionView;

@interface IGShoppingSpotlightBrandsAvatarCarouselView : UIView <UICollectionViewDataSource>
{
    UICollectionView *_collectionView;
    IGShoppingSpotlightTileBrandsAvatarCarouselCollectionViewLayout *_collectionViewLayout;
    CADisplayLink *_displayLink;
    _Bool _animating;
    NSArray *_avatarURLs;
    long long _profilePictureBorderStyle;
    double _avatarItemSize;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) double avatarItemSize; // @synthesize avatarItemSize=_avatarItemSize;
@property(nonatomic) long long profilePictureBorderStyle; // @synthesize profilePictureBorderStyle=_profilePictureBorderStyle;
@property(copy, nonatomic) NSArray *avatarURLs; // @synthesize avatarURLs=_avatarURLs;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_displayLinkUpdated:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic) long long layoutDirection;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

