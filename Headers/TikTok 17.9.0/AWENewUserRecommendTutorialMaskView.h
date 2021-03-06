//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface AWENewUserRecommendTutorialMaskView : UIView
{
    UIView *_containerView;
    UIImageView *_swipeUpIndicator;
    UILabel *_mainLabel;
    NSString *_content;
    double _showStartTime;
}

+ (void)showTutorialWithContent:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double showStartTime; // @synthesize showStartTime=_showStartTime;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) UIImageView *swipeUpIndicator; // @synthesize swipeUpIndicator=_swipeUpIndicator;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)dismiss:(id)arg1;
- (void)loadSubviews;
- (void)dealloc;
- (id)initWithContent:(id)arg1;

@end

