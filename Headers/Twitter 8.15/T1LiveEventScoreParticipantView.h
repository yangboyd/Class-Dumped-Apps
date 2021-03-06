//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1MomentScoreParticipantInfo, UIImageView, UILabel, UIStackView;

@interface T1LiveEventScoreParticipantView : UIView
{
    T1MomentScoreParticipantInfo *_participantInfo;
    UIStackView *_stackView;
    UIImageView *_logoImageView;
    UILabel *_abbreviationLabel;
}

@property(readonly, nonatomic) UILabel *abbreviationLabel; // @synthesize abbreviationLabel=_abbreviationLabel;
@property(readonly, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) T1MomentScoreParticipantInfo *participantInfo; // @synthesize participantInfo=_participantInfo;
- (void).cxx_destruct;
- (void)tfn_fontSizeChanged;
- (id)_t1_abbreviationFont;
- (void)_t1_updateSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithImagePipeline:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

