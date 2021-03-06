//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginScreenViewLoggerProtocol-Protocol.h"

@class NSString;
@protocol SPTLoginLogger;

@interface SPTLoginIntentLedStartViewLogger : NSObject <SPTLoginScreenViewLoggerProtocol>
{
    id <SPTLoginLogger> _logger;
    unsigned long long _intent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
- (void)logUserDidSeeView;
- (id)initWithLogger:(id)arg1 intent:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

