//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface AWEPOIDetailQuoraHeaderView : UIView
{
    UILabel *_titleLabel;
    UILabel *_numberOfQuestionsLabel;
    UIImageView *_arrowImageView;
}

+ (double)quoraHeaderViewHeight;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *numberOfQuestionsLabel; // @synthesize numberOfQuestionsLabel=_numberOfQuestionsLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateWithNumberOfQuestions:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

