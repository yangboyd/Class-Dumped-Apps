//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStatusMessageItemView.h"

@class UIImageView, UILabel;

@interface WAStatusInformativeItemView : WAStatusMessageItemView
{
    struct CGSize _lastViewSize;
    UIImageView *_imageView;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (id)attributedText;
- (double)presentationTime;
- (void)layoutSubviews;
- (void)didSetItem;
- (id)initWithFrame:(struct CGRect)arg1;

@end

