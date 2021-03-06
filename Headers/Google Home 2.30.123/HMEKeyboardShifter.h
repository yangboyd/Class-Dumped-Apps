//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, UIView;

@interface HMEKeyboardShifter : NSObject
{
    _Bool _invertConstraintShifting;
    _Bool _active;
    _Bool _keyboardVisible;
    NSLayoutConstraint *_constraint;
    UIView *_view;
    double _keyboardDelta;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(nonatomic) double keyboardDelta; // @synthesize keyboardDelta=_keyboardDelta;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) NSLayoutConstraint *constraint; // @synthesize constraint=_constraint;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) _Bool invertConstraintShifting; // @synthesize invertConstraintShifting=_invertConstraintShifting;
- (void)keyboardWillHide;
- (void)keyboardChanged:(id)arg1;
- (void)startObservingKeyboardChanges;
- (void)removeDelta;
- (void)applyDelta;
- (id)initWithView:(id)arg1 constraint:(id)arg2;
- (id)initWithView:(id)arg1;
- (id)initWithConstraint:(id)arg1 invertConstraintShifting:(_Bool)arg2;
- (id)initWithConstraint:(id)arg1;

@end

