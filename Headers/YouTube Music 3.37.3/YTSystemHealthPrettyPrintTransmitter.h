//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTSystemHealthTransmitter-Protocol.h"

@class GIMMe, NSString;

@interface YTSystemHealthPrettyPrintTransmitter : NSObject <YTSystemHealthTransmitter>
{
    _Bool _isEnabled;
    GIMMe *_gimme;
}

@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)transmitDroppedFramesEvent:(id)arg1 eventDate:(id)arg2 error:(id *)arg3;
- (void)transmitSystemHealthMetrics:(id)arg1 error:(id *)arg2;
- (void)configureWithConfig:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

