//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, IESLiveMTFeedMarkView, UIImageView, UILabel;

@interface IESLiveMTFeedFollowRoomCell : UICollectionViewCell
{
    UIImageView *_avatarView;
    UILabel *_nicknameLabel;
    UILabel *_liveLabel;
    CAGradientLayer *_colorLayer;
    IESLiveMTFeedMarkView *_liveMarkView;
}

+ (struct CGSize)cellSize;
- (void).cxx_destruct;
@property(retain, nonatomic) IESLiveMTFeedMarkView *liveMarkView; // @synthesize liveMarkView=_liveMarkView;
@property(retain, nonatomic) CAGradientLayer *colorLayer; // @synthesize colorLayer=_colorLayer;
@property(retain, nonatomic) UILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void)_commonInit;
- (void)prepareForReuse;
- (void)update:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

