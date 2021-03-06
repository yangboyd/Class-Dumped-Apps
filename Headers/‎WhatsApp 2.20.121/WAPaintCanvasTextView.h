//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

#import <Core/UIGestureRecognizerDelegate-Protocol.h>

@class NSDictionary, NSString, UIPinchGestureRecognizer, UITapGestureRecognizer;
@protocol WAPaintCanvasTextViewDelegate;

@interface WAPaintCanvasTextView : UITextView <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_tapGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    double _initialFontSize;
    _Bool _hasShadow;
    NSDictionary *_textAttributes;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property(copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePinch:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setTextColor:(id)arg1;
- (void)updateShadowOffset;
- (void)applyFontType:(int)arg1;
- (void)reapplyAttributes;
- (void)paintCanvasTextViewDidChange:(id)arg1;
- (void)_scrollToSelectionIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WAPaintCanvasTextViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

