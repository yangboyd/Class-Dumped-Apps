//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWETabbarInnerView-Protocol.h"

@class NSString, UILabel;

@interface AWETabbarTextView : UIView <AWETabbarInnerView>
{
    _Bool _isInTitleChangedAnimation;
    UILabel *_label;
    NSString *_text;
    double _labelFontSize;
    long long _status;
    long long _feedStatus;
    long long _familiarStatus;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInTitleChangedAnimation; // @synthesize isInTitleChangedAnimation=_isInTitleChangedAnimation;
@property(nonatomic) long long familiarStatus; // @synthesize familiarStatus=_familiarStatus;
@property(nonatomic) long long feedStatus; // @synthesize feedStatus=_feedStatus;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) double labelFontSize; // @synthesize labelFontSize=_labelFontSize;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)familiarStatusDidChange:(long long)arg1;
- (void)feedStatusDidChange:(long long)arg1;
- (id)accessibilityLabel;
- (void)tabbarStatusDidChanged:(long long)arg1 animated:(_Bool)arg2;
- (double)indicatorWidth;
- (void)updateTitle:(id)arg1 animated:(_Bool)arg2;
- (void)updateTitle:(id)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

