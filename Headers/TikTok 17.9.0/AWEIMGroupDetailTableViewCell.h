//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWEIMMessageConversation, AWESettingSwitch, CAShapeLayer, UIImageView, UILabel;

@interface AWEIMGroupDetailTableViewCell : UITableViewCell
{
    CAShapeLayer *_dotLayer;
    CDUnknownBlockType _switchBlock;
    long long _type;
    AWEIMMessageConversation *_conversation;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_arrowImageView;
    AWESettingSwitch *_aSwitch;
}

+ (double)heigthOfCellWithCellWidth:(double)arg1 conversation:(id)arg2 type:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) AWESettingSwitch *aSwitch; // @synthesize aSwitch=_aSwitch;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AWEIMMessageConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType switchBlock; // @synthesize switchBlock=_switchBlock;
@property(retain, nonatomic) CAShapeLayer *dotLayer; // @synthesize dotLayer=_dotLayer;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)switchControlDidChanged:(id)arg1;
- (id)titleWithCellType;
- (void)updateLayout;
- (void)configWithConversation:(id)arg1 type:(long long)arg2;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

