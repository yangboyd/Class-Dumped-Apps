//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEIronManModel, UIImageView, UILabel;

@interface AWEAdIronManCardView : UIView
{
    CDUnknownBlockType _pushIronManBlock;
    AWEIronManModel *_model;
    UIImageView *_cardImage;
    UILabel *_textLabel;
    UILabel *_titleLabel;
    UILabel *_challengeLabel;
    UIImageView *_arrowImage;
    UIView *_interactionView;
}

@property(retain, nonatomic) UIView *interactionView; // @synthesize interactionView=_interactionView;
@property(retain, nonatomic) UIImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UILabel *challengeLabel; // @synthesize challengeLabel=_challengeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *cardImage; // @synthesize cardImage=_cardImage;
@property(retain, nonatomic) AWEIronManModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType pushIronManBlock; // @synthesize pushIronManBlock=_pushIronManBlock;
- (void).cxx_destruct;
- (void)tappedCard:(id)arg1;
- (void)setupModel;
- (void)setupConstraints;
- (id)initWithModel:(id)arg1;

@end

