//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface XMPPBusinessHours : NSObject
{
    NSString *_timezone;
    NSArray *_configs;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *configs; // @synthesize configs=_configs;
@property(readonly, copy, nonatomic) NSString *timezone; // @synthesize timezone=_timezone;
- (id)initWithTimeZone:(id)arg1 hourConfigs:(id)arg2;
- (id)initWithBusinessHoursElement:(id)arg1;

@end

