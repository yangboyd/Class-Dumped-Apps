//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class YTIReloadContinuationData;

@interface YTChipBarFilterUpdateResponderEvent : YTResponderEvent
{
    YTIReloadContinuationData *_continuation;
}

+ (id)eventWithFirstResponder:(id)arg1 continuation:(id)arg2;
@property(readonly, nonatomic) YTIReloadContinuationData *continuation; // @synthesize continuation=_continuation;
- (void).cxx_destruct;
- (id)initWithFirstResponder:(id)arg1 continuation:(id)arg2;

@end

