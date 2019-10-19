//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class YTIFormattedString, YTIReloadContinuationData;

@interface YTChannelListFilterUpdateResponderEvent : YTResponderEvent
{
    _Bool _isFilterActive;
    YTIFormattedString *_channelTitle;
    YTIReloadContinuationData *_resetContinuation;
}

+ (id)eventWithFirstResponder:(id)arg1 isFilterActive:(_Bool)arg2 channelTitle:(id)arg3 resetContinuation:(id)arg4;
@property(readonly, nonatomic) YTIReloadContinuationData *resetContinuation; // @synthesize resetContinuation=_resetContinuation;
@property(readonly, nonatomic) YTIFormattedString *channelTitle; // @synthesize channelTitle=_channelTitle;
@property(readonly, nonatomic) _Bool isFilterActive; // @synthesize isFilterActive=_isFilterActive;
- (void).cxx_destruct;
- (id)initWithFirstResponder:(id)arg1 isFilterActive:(_Bool)arg2 channelTitle:(id)arg3 resetContinuation:(id)arg4;

@end

