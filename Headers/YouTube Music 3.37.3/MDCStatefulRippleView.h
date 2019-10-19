//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCRippleView.h"

@class MDCRippleLayer, NSMutableDictionary;

@interface MDCStatefulRippleView : MDCRippleView
{
    NSMutableDictionary *_rippleColors;
    _Bool _tapWentOutsideOfBounds;
    _Bool _tapWentInsideOfBounds;
    _Bool _didReceiveTouch;
    struct CGPoint _lastTouch;
    _Bool _selected;
    _Bool _rippleHighlighted;
    _Bool _dragged;
    _Bool _allowsSelection;
}

@property(nonatomic) _Bool allowsSelection; // @synthesize allowsSelection=_allowsSelection;
@property(nonatomic, getter=isDragged) _Bool dragged; // @synthesize dragged=_dragged;
@property(nonatomic, getter=isRippleHighlighted) _Bool rippleHighlighted; // @synthesize rippleHighlighted=_rippleHighlighted;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInsideSuperview:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (long long)state;
- (void)setRippleColor:(id)arg1 forState:(long long)arg2;
- (void)updateActiveRippleColor;
- (void)updateRippleColor;
- (id)rippleColorForState:(long long)arg1;
- (void)commonMDCStatefulRippleViewInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) MDCRippleLayer *activeRippleLayer; // @dynamic activeRippleLayer;

@end

