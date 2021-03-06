//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AWEPhotoCropModeCollectionViewCellAnimationView, UIImage, UIImageView, UILabel;

@interface AWEPhotoCropModeCollectionViewCell : UICollectionViewCell
{
    UIImage *_normalImage;
    UIImage *_selectedImage;
    UILabel *_bottomLabel;
    CDUnknownBlockType _didClickedBlock;
    AWEPhotoCropModeCollectionViewCellAnimationView *_animationView;
    UIImageView *_centerImageView;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *centerImageView; // @synthesize centerImageView=_centerImageView;
@property(retain, nonatomic) AWEPhotoCropModeCollectionViewCellAnimationView *animationView; // @synthesize animationView=_animationView;
@property(copy, nonatomic) CDUnknownBlockType didClickedBlock; // @synthesize didClickedBlock=_didClickedBlock;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
- (void)endAnimation;
- (void)startAnimation;
- (void)didClicked;
- (void)setSelected:(_Bool)arg1;
- (void)forceApplyContentImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

