//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPUBMoatConfig : NSObject
{
    _Bool isOn;
    _Bool isDebug;
    int vwIntervalMillis;
}

@property int vwIntervalMillis; // @synthesize vwIntervalMillis;
@property _Bool isDebug; // @synthesize isDebug;
@property _Bool isOn; // @synthesize isOn;
- (id)trim:(id)arg1;
- (_Bool)isAppBlackListedForLocation:(id)arg1;
- (_Bool)isAppBlackListed:(id)arg1;
- (_Bool)isOSBlacklisted:(id)arg1;
- (void)parseConfig:(id)arg1;
- (id)initWithResponse:(id)arg1;

@end

