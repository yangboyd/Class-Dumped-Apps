//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXModalViewModel.h"

@interface SGFeedbackViewModel : XBXModalViewModel
{
    _Bool _smileActionValue;
    _Bool _frownActionValue;
    _Bool _problemActionValue;
    _Bool _suggestActionValue;
    _Bool _complete;
}

@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(nonatomic) _Bool suggestActionValue; // @synthesize suggestActionValue=_suggestActionValue;
@property(nonatomic) _Bool problemActionValue; // @synthesize problemActionValue=_problemActionValue;
@property(nonatomic) _Bool frownActionValue; // @synthesize frownActionValue=_frownActionValue;
@property(nonatomic) _Bool smileActionValue; // @synthesize smileActionValue=_smileActionValue;
- (void)close;
- (void)onSuggestToggled;
- (void)onProblemToggled;
- (void)onFrownToggled;
- (void)onSmileToggled;
- (void)onDestroy;
- (void)onDeactivate;
- (void)onInitialize;
- (void)onActivate;

@end

