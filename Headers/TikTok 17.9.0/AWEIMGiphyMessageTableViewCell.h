//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMUserMessageTableViewCell.h"

@class UITapGestureRecognizer, UIView, YYAnimatedImageView;

@interface AWEIMGiphyMessageTableViewCell : AWEIMUserMessageTableViewCell
{
    YYAnimatedImageView *_giphyImageView;
    UIView *_bubbleView;
    UITapGestureRecognizer *_reloadGiphyTap;
}

+ (id)identifier;
+ (struct CGSize)contentSizeWithMesasge:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *reloadGiphyTap; // @synthesize reloadGiphyTap=_reloadGiphyTap;
@property(retain, nonatomic) UIView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) YYAnimatedImageView *giphyImageView; // @synthesize giphyImageView=_giphyImageView;
- (void)processGreetGiphy:(id)arg1;
- (double)giphyImageViewCornerRadius;
- (id)giphyMessageMenuItems;
- (void)p_refreshGiphyUI;
- (void)setupUI;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)addForwardMsgResource;
- (_Bool)menuViewRectContainsPoint:(struct CGPoint)arg1;
- (struct CGRect)menuTargetRect;
- (id)menuInView;
- (id)menuItems;
- (_Bool)showAddCustomItem;
- (void)layoutSubviews;
- (void)configWithMessage:(id)arg1;

@end

