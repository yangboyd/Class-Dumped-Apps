//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOTextFieldController.h>

@interface GWATextFieldController : GOOTextFieldController
{
    double _errorMessageExtraWidth;
    long long _extendedPresentationStyle;
}

@property(nonatomic) long long extendedPresentationStyle; // @synthesize extendedPresentationStyle=_extendedPresentationStyle;
- (double)floatingPlaceholderScaleFactor;
- (struct CGRect)frameForTextViewBelowFrame:(id)arg1;
- (struct CGRect)placeholderFloatingPositionFrame;
- (struct CGRect)placeholderDefaultPositionFrame;
- (void)setErrorMessageWithExtraWidth:(double)arg1;
- (id)initWithTextField:(id)arg1 isMultiline:(_Bool)arg2;

@end

