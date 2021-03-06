//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGImageView, UILabel;

@interface IGSavedCollectionsHeaderView : UIView
{
    UILabel *_collectionTitle;
    UILabel *_numberOfSavedPosts;
    IGImageView *_collectionImage;
}

- (void).cxx_destruct;
- (void)_setupNumberOfSavedPosts:(long long)arg1;
- (void)_setupCollectionTitleLabel:(id)arg1;
- (void)_setupCollectionImage:(id)arg1;
- (void)_setupHeaderViewItemsWithCollection:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCollection:(id)arg1;

@end

