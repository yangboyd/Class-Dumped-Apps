//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

@class BaseButton, BaseLabel, UIView;
@protocol InboxCellContentViewDelegate, ReportableModel;

@interface InboxCellContentView : BaseView
{
    id <ReportableModel> _model;
    id <InboxCellContentViewDelegate> _delegate;
    BaseLabel *_mainLabel;
    BaseLabel *_metadataLabel;
    BaseLabel *_detailLabel;
    UIView *_metadataView;
    double _metadataViewVerticalPadding;
    BaseButton *_overflowButton;
}

@property(retain, nonatomic) BaseButton *overflowButton; // @synthesize overflowButton=_overflowButton;
@property(nonatomic) double metadataViewVerticalPadding; // @synthesize metadataViewVerticalPadding=_metadataViewVerticalPadding;
@property(retain, nonatomic) UIView *metadataView; // @synthesize metadataView=_metadataView;
@property(readonly, nonatomic) BaseLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) BaseLabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(readonly, nonatomic) BaseLabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(nonatomic) __weak id <InboxCellContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <ReportableModel> model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)didTapOverflowButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

