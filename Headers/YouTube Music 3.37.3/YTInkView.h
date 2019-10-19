//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, YTInkLayer;

@interface YTInkView : UIView
{
    long long _inkStyle;
}

+ (Class)layerClass;
@property(nonatomic) long long inkStyle; // @synthesize inkStyle=_inkStyle;
- (void)evaporateToPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)evaporateWithCompletion:(CDUnknownBlockType)arg1;
- (void)spreadFromPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reset;
@property(readonly, nonatomic) YTInkLayer *inkLayer;
@property(nonatomic) struct CGPoint customInkCenter;
@property(nonatomic) _Bool usesCustomInkCenter;
@property(nonatomic) double maxRippleRadius;
- (void)setBackgroundColorGroup:(id)arg1;
@property(retain, nonatomic) UIColor *inkColor;
@property(nonatomic) _Bool clipsRippleToBounds;
@property(nonatomic) _Bool fillsBackgroundOnSpread;
@property(nonatomic) _Bool gravitatesInk;
- (id)initWithFrame:(struct CGRect)arg1 inkColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 backgroundColorGroup:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

