//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGSurveyAnswer, IGSurveyQuestion, UIImageView, UILabel;

@interface IGSurveyResultView : UIView
{
    IGSurveyQuestion *_question;
    IGSurveyAnswer *_answer;
    UIImageView *_checkmarkImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *checkmarkImageView; // @synthesize checkmarkImageView=_checkmarkImageView;
@property(retain, nonatomic) IGSurveyAnswer *answer; // @synthesize answer=_answer;
@property(retain, nonatomic) IGSurveyQuestion *question; // @synthesize question=_question;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateCheckmark;
- (id)initWithFrame:(struct CGRect)arg1;

@end

