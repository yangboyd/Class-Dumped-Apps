//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UILabel, UIView;

@interface HMECameraClipInfoSectionTableViewFooter : UITableViewHeaderFooterView
{
    UILabel *_detailLabel;
    UILabel *_durationLabel;
    UIView *_dividerLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *dividerLine; // @synthesize dividerLine=_dividerLine;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
- (void)applyConstraints;
- (void)populateViewsWithDataSource:(id)arg1;
- (void)setupViews;
- (id)initWithDataSource:(id)arg1;

@end

