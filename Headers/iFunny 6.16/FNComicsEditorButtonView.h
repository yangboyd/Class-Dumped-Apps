//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ComicsBorderView, ComicsFrameView, FNComicsEditorHintView, NSMutableDictionary, NSTimer, UIButton, UIImageView;
@protocol FNComicsEditorButtonViewDelegate;

@interface FNComicsEditorButtonView : UIView
{
    id <FNComicsEditorButtonViewDelegate> delegate;
    NSMutableDictionary *frameInfo;
    NSTimer *holdTimer;
    _Bool wasHoldTouch;
    struct CGPoint touchBeganLocation;
    ComicsFrameView *frameView;
    UIImageView *highlightedView;
    ComicsBorderView *borderView;
    FNComicsEditorHintView *hintView;
    UIButton *removeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *frameInfo; // @synthesize frameInfo;
- (void)dealloc;
- (void)hideRemoveButton;
- (void)showRemoveButton;
- (void)onRemove;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (void)onTouchAndHold;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)hideBorder;
- (void)showBorder;
- (void)setHighlighted:(_Bool)arg1;
- (void)reloadFrameView;
- (id)initWithDelegate:(id)arg1 frameInfo:(id)arg2 frame:(struct CGRect)arg3 isFirst:(_Bool)arg4;

@end

