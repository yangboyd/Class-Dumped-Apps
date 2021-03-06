//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVButton.h>

@class NSString, UIImage;

@interface PTVPlayPauseButton : PTVButton
{
    UIImage *_pauseImage;
    UIImage *_pauseHiglightedImage;
    NSString *_pauseAccessibilityLabel;
    UIImage *_playImage;
    UIImage *_playHiglightedImage;
    NSString *_playAccessibilityLabel;
    long long _displayMode;
}

@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
- (void).cxx_destruct;
- (void)executeState;
- (id)initWithFrame:(struct CGRect)arg1;

@end

