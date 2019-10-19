//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class GHKBaseEscalationOption, UILabel;

@interface GHKAssistantContactUsButton : UIButton
{
    UILabel *_waitTimeLabel;
    _Bool _showWaitTime;
    GHKBaseEscalationOption *_option;
}

+ (void)centerVerticallyWithPadding:(id)arg1;
+ (id)buttonWithTitle:(id)arg1 image:(id)arg2 option:(id)arg3 showWaitTime:(_Bool)arg4 enabled:(_Bool)arg5 target:(id)arg6 selector:(SEL)arg7;
@property(nonatomic) _Bool showWaitTime; // @synthesize showWaitTime=_showWaitTime;
@property(readonly, nonatomic) GHKBaseEscalationOption *option; // @synthesize option=_option;
- (void).cxx_destruct;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)initWithOption:(id)arg1;

@end

