//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface TCLPreCallInfo : NSObject
{
    NSNumber *_activeCalls;
}

+ (id)preCallInfoWithActiveCalls:(id)arg1;
@property(readonly, nonatomic) NSNumber *activeCalls; // @synthesize activeCalls=_activeCalls;
- (void).cxx_destruct;
- (id)description;
- (id)initWithActiveCalls:(id)arg1;

@end

