//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@protocol YTDismissalFollowUpViewModel;

@interface YTDismissalFollowupResponderEvent : YTResponderEvent
{
    id _entry;
    id <YTDismissalFollowUpViewModel> _renderer;
}

+ (id)eventWithFirstResponder:(id)arg1 entry:(id)arg2 renderer:(id)arg3;
@property(readonly, nonatomic) id <YTDismissalFollowUpViewModel> renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) id entry; // @synthesize entry=_entry;
- (void).cxx_destruct;
- (id)initWithFirstResponder:(id)arg1 entry:(id)arg2 renderer:(id)arg3;

@end

