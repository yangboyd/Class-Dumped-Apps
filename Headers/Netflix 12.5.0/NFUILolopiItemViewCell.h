//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NFUILolopiItem, UIImageView;

@interface NFUILolopiItemViewCell : UICollectionViewCell
{
    UIImageView *_imageView;
    NFUILolopiItem *_lolopiItem;
}

@property(retain, nonatomic) NFUILolopiItem *lolopiItem; // @synthesize lolopiItem=_lolopiItem;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

