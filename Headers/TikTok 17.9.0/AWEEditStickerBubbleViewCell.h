//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWEEditStickerBubbleItem, UIView;

@interface AWEEditStickerBubbleViewCell : UITableViewCell
{
    AWEEditStickerBubbleItem *_bubbleItem;
    UIView *_sepLine;
}

+ (id)awe_identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *sepLine; // @synthesize sepLine=_sepLine;
@property(retain, nonatomic) AWEEditStickerBubbleItem *bubbleItem; // @synthesize bubbleItem=_bubbleItem;
- (void)layoutSubviews;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

