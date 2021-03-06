//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNZLogger.h"

@class NSArray;
@protocol CMIClickStreamMetricEvent;

@interface AWSignInInterstitialLogger : SNZLogger
{
    NSArray *_events;
    id <CMIClickStreamMetricEvent> _genericClickStreamEvent;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <CMIClickStreamMetricEvent> genericClickStreamEvent; // @synthesize genericClickStreamEvent=_genericClickStreamEvent;
- (void).cxx_destruct;
- (void)logEventType:(int)arg1;
@property(readonly, nonatomic) NSArray *events; // @synthesize events=_events;
- (id)init;

@end

