//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWECaptionAnchorModel, UIImageView, UILabel;

@interface AWEFeedSearchCaptionAnchorView : UIView
{
    CDUnknownBlockType _logExtraBlk;
    UIImageView *_iconView;
    UILabel *_label;
    AWECaptionAnchorModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWECaptionAnchorModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) CDUnknownBlockType logExtraBlk; // @synthesize logExtraBlk=_logExtraBlk;
- (void)didClickedAnchorView:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)configWithCaptionAnchorModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

