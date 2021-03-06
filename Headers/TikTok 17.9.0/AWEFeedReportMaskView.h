//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEAwemeModel, NSString, UIButton, UIImageView, UILabel, UIVisualEffectView;

@interface AWEFeedReportMaskView : UIView
{
    CDUnknownBlockType _showVideoCompletion;
    NSString *_referString;
    UIVisualEffectView *_effectView;
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIButton *_showVideoButton;
    AWEAwemeModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *showVideoButton; // @synthesize showVideoButton=_showVideoButton;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(copy, nonatomic) CDUnknownBlockType showVideoCompletion; // @synthesize showVideoCompletion=_showVideoCompletion;
- (void)showVideoButtonClicked;
- (void)_setupUI;
- (void)updateViewWithAwemeModel:(id)arg1;
- (id)init;

@end

