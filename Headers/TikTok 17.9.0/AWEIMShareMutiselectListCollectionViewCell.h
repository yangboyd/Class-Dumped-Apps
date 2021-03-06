//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMTranspondListCollectionViewCell.h"

@class UIImageView, UIView;

@interface AWEIMShareMutiselectListCollectionViewCell : AWEIMTranspondListCollectionViewCell
{
    _Bool _isSelected;
    UIView *_selectedContainerView;
    UIImageView *_selectedImageView;
    UIView *_bigMaskView;
    UIView *_smallMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *smallMaskView; // @synthesize smallMaskView=_smallMaskView;
@property(retain, nonatomic) UIView *bigMaskView; // @synthesize bigMaskView=_bigMaskView;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UIView *selectedContainerView; // @synthesize selectedContainerView=_selectedContainerView;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (_Bool)needNewSelectedStyle;
- (void)avatarTapped:(id)arg1;
- (void)configWithShareModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

