//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XLFormBaseCell.h"

@class NSMutableArray, UILabel, UISegmentedControl;

@interface XLFormSegmentedCell : XLFormBaseCell
{
    UILabel *_textLabel;
    UISegmentedControl *_segmentedControl;
    NSMutableArray *_dynamicCustomConstraints;
}

@property(retain) NSMutableArray *dynamicCustomConstraints; // @synthesize dynamicCustomConstraints=_dynamicCustomConstraints;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateConstraints;
- (long long)selectedIndex;
- (void)updateSegmentedControl;
- (id)getItems;
- (void)valueChanged;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)update;
- (void)configure;

@end

