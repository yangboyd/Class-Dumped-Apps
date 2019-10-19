//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OAStackView.h"

@class GWAImageWithCaptionView, OrchLineItem, UILabel, UIView;

@interface GWALineItemView : OAStackView
{
    UILabel *_nameLabel;
    UILabel *_valueLabel;
    UILabel *_infoMessageLabel;
    GWAImageWithCaptionView *_imageView;
    UIView *_dividerView;
    OrchLineItem *_proto;
}

@property(readonly, nonatomic) OrchLineItem *proto; // @synthesize proto=_proto;
- (void).cxx_destruct;
- (id)dividerView;
- (id)imageView;
- (id)infoMessageLabel;
- (id)valueLabel;
- (id)nameLabel;
- (void)setUpStyle;
- (void)updateWithProto;
- (id)initWithLineItem:(id)arg1;

@end

