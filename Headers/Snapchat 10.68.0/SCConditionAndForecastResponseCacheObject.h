//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, SCWCurrentConditionAndForecastResponse;

@interface SCConditionAndForecastResponseCacheObject : NSObject
{
    NSDate *_date;
    SCWCurrentConditionAndForecastResponse *_response;
}

@property(copy, nonatomic) SCWCurrentConditionAndForecastResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)initWithDate:(id)arg1 response:(id)arg2;

@end

