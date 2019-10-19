//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UILabel;

@interface ASMTooltipView : UIView
{
    UILabel *_titleLabel;
    NSArray *_subtitleLabels;
}

@property(readonly, nonatomic) NSArray *subtitleLabels; // @synthesize subtitleLabels=_subtitleLabels;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 subtitles:(id)arg2 useMyGoogleStyle:(_Bool)arg3;

@end

