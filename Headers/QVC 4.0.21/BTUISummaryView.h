//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BraintreeUI/BTUIThemedView.h>

@class NSString, UILabel;

@interface BTUISummaryView : BTUIThemedView
{
    NSString *_slug;
    NSString *_summary;
    NSString *_amount;
    UILabel *_slugLabel;
    UILabel *_summaryLabel;
    UILabel *_amountLabel;
}

@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) UILabel *slugLabel; // @synthesize slugLabel=_slugLabel;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *slug; // @synthesize slug=_slug;
- (void).cxx_destruct;
- (void)updateText;
- (void)updateConstraints;
- (void)setTheme:(id)arg1;
- (void)setupView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

