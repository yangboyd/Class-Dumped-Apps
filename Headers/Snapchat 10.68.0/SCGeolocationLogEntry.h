//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSString;

@interface SCGeolocationLogEntry : NSObject
{
    NSString *_geocell;
    CLLocation *_location;
    unsigned long long _duration;
}

+ (id)fromLocation:(id)arg1;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSString *geocell; // @synthesize geocell=_geocell;
- (void).cxx_destruct;
- (id)logString;
- (id)initWithLocation:(id)arg1;

@end

