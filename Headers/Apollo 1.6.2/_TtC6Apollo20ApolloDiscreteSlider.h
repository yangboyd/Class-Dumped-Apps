//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@interface _TtC6Apollo20ApolloDiscreteSlider : UISlider
{
    // Error parsing type: , name: incrementAmount
    // Error parsing type: , name: steps
    // Error parsing type: , name: trackColor
    // Error parsing type: , name: discreteValueChangedHandler
    // Error parsing type: , name: discreteValueChangeEndedHandler
    // Error parsing type: , name: discreteValue
}

- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (void)trackTapped:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

