//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UICAlert.h"

@class UICButton;
@protocol SXAutomotiveAlertViewDelegate;

@interface SXAutomotiveAlertView : UICAlert
{
    UICButton *_clearFilterButton;
}

@property(retain, nonatomic) UICButton *clearFilterButton; // @synthesize clearFilterButton=_clearFilterButton;
- (void).cxx_destruct;
- (void)didClearFilterButtonPressed;
- (struct CGSize)sizeAndLayoutToFits:(struct CGSize)arg1 setFrames:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)createClearFilterButton;
- (id)initWithFrame:(struct CGRect)arg1 withAlertType:(long long)arg2 withMessage:(id)arg3 withClearButtontext:(id)arg4;

// Remaining properties
@property(nonatomic) __weak id <SXAutomotiveAlertViewDelegate> delegate;

@end

