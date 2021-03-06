//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGFeedItemMediaCell.h>

@class IGFeedItem, IGTapButton, UIImageView, UILabel, UIView;
@protocol IGGatingDelegate;

@interface IGFeedItemGatedMediaCTAButtonCell : IGFeedItemMediaCell
{
    IGTapButton *_tapButton;
    UIImageView *_glyph;
    UILabel *_titleLabel;
    UIView *_lineView;
    IGFeedItem *_post;
    id <IGGatingDelegate> _gatingDelegate;
}

+ (double)height;
@property(nonatomic) __weak id <IGGatingDelegate> gatingDelegate; // @synthesize gatingDelegate=_gatingDelegate;
- (id)post;
- (void).cxx_destruct;
- (id)defaultAccessibilityElements;
- (void)_didTapButton:(id)arg1;
- (void)configureWithFeedItem:(id)arg1;
- (void)layoutSubviews;
- (id)_createTitleLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

