//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

@class DYNLabel, UISwitch;

@interface DYNCreateThreadedRoomContentView : GOOBaseContentView
{
    UISwitch *_threadedRoomSwitch;
    DYNLabel *_threadedRoomLabel;
    DYNLabel *_threadedRoomDescription;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)accessibilityValue;
- (_Bool)accessibilityActivate;
- (_Bool)isAccessibilityElement;
- (void)didToggleThreadedRoom;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateViewWithObject:(id)arg1;

@end

