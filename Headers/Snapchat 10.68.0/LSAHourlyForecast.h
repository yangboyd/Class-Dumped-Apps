//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface LSAHourlyForecast : NSObject
{
    NSNumber *_celsius;
    NSNumber *_fahrenheit;
    NSString *_weatherCondition;
    NSString *_localizedWeatherCondition;
    NSString *_displayTime;
}

@property(readonly, copy, nonatomic) NSString *displayTime; // @synthesize displayTime=_displayTime;
@property(readonly, copy, nonatomic) NSString *localizedWeatherCondition; // @synthesize localizedWeatherCondition=_localizedWeatherCondition;
@property(readonly, copy, nonatomic) NSString *weatherCondition; // @synthesize weatherCondition=_weatherCondition;
@property(readonly, nonatomic) NSNumber *fahrenheit; // @synthesize fahrenheit=_fahrenheit;
@property(readonly, nonatomic) NSNumber *celsius; // @synthesize celsius=_celsius;
- (void).cxx_destruct;
- (id)initWithCelsius:(id)arg1 fahrenheit:(id)arg2 weatherCondition:(id)arg3 localizedWeatherCondition:(id)arg4 displayTime:(id)arg5;

@end

