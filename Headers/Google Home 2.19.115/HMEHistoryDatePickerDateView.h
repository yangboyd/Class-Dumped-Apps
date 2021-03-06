//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HMEDateBubbleView;

@interface HMEHistoryDatePickerDateView : UIView
{
    _Bool _selected;
    _Bool _enabled;
    HMEDateBubbleView *_dateBubbleView;
}

+ (double)diameter;
@property(readonly, nonatomic) HMEDateBubbleView *dateBubbleView; // @synthesize dateBubbleView=_dateBubbleView;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (id)attributesForSelected:(_Bool)arg1 enabled:(_Bool)arg2;
- (void)updateSelected:(_Bool)arg1 enabled:(_Bool)arg2 animate:(_Bool)arg3;
- (void)setupConstraints;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithDayLabel:(id)arg1 monthLabel:(id)arg2;

@end

