//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CMRScheduleRecommendation : NSObject
{
    NSString *_dateTimeInfo;
    NSString *_regionName;
}

+ (id)ScheduleRecommendationWithDateTimeInfo:(id)arg1 regionName:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *regionName; // @synthesize regionName=_regionName;
@property(readonly, nonatomic) NSString *dateTimeInfo; // @synthesize dateTimeInfo=_dateTimeInfo;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDateTimeInfo:(id)arg1 regionName:(id)arg2;

@end

