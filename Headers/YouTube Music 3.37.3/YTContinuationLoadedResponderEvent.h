//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@interface YTContinuationLoadedResponderEvent : YTResponderEvent
{
    id _continuationResponse;
}

+ (id)eventWithFirstResponder:(id)arg1 continuationResponse:(id)arg2;
@property(readonly, nonatomic) id continuationResponse; // @synthesize continuationResponse=_continuationResponse;
- (void).cxx_destruct;
- (id)initWithFirstResponder:(id)arg1 continuationResponse:(id)arg2;

@end

