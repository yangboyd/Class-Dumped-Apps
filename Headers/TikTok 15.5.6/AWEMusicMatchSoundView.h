//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEMusicModel, NSString, UIImageView, YYLabel;

@interface AWEMusicMatchSoundView : UIView
{
    _Bool _shouldShowFeedBackView;
    AWEMusicModel *_model;
    YYLabel *_label;
    NSString *_title;
    CDUnknownBlockType _linkAction;
    CDUnknownBlockType _feedbackAction;
    UIImageView *_feedbackIconView;
}

@property(retain, nonatomic) UIImageView *feedbackIconView; // @synthesize feedbackIconView=_feedbackIconView;
@property(copy, nonatomic) CDUnknownBlockType feedbackAction; // @synthesize feedbackAction=_feedbackAction;
@property(copy, nonatomic) CDUnknownBlockType linkAction; // @synthesize linkAction=_linkAction;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) YYLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) AWEMusicModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool shouldShowFeedBackView; // @synthesize shouldShowFeedBackView=_shouldShowFeedBackView;
- (void).cxx_destruct;
- (void)feedbackViewTapped;
- (void)setupUI;
- (id)initWithMusicModel:(id)arg1 title:(id)arg2 linkAction:(CDUnknownBlockType)arg3 feedbackAction:(CDUnknownBlockType)arg4;

@end

