//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTResponderEvent.h>

@class YTIFormattedString;

@interface YTDonationProgressBarUpdatedResponderEvent : YTResponderEvent
{
    float _progress;
    YTIFormattedString *_donatedAmountString;
}

+ (id)eventWithFirstResponder:(id)arg1 progress:(float)arg2 donatedAmount:(id)arg3;
@property(readonly, nonatomic) YTIFormattedString *donatedAmountString; // @synthesize donatedAmountString=_donatedAmountString;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (id)initWithFirstResponder:(id)arg1 progress:(float)arg2 donatedAmount:(id)arg3;

@end

