//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UAScheduleInfo;

@interface UASchedule : NSObject
{
    NSString *_identifier;
    UAScheduleInfo *_info;
    NSDictionary *_metadata;
}

+ (id)scheduleWithIdentifier:(id)arg1 info:(id)arg2 metadata:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) UAScheduleInfo *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToSchedule:(id)arg1;
- (id)initWithIdentifier:(id)arg1 info:(id)arg2 metadata:(id)arg3;

@end

