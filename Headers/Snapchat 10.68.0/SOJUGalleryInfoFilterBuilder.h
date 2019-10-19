//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SOJUGalleryAltitudeInfoFilter, SOJUGalleryBatteryInfoFilter, SOJUGalleryDateInfoFilter, SOJUGallerySpeedInfoFilter, SOJUGalleryWeatherInfoFilter;

@interface SOJUGalleryInfoFilterBuilder : NSObject
{
    NSString *_type;
    SOJUGalleryBatteryInfoFilter *_battery;
    SOJUGalleryDateInfoFilter *_date;
    SOJUGallerySpeedInfoFilter *_speed;
    SOJUGalleryWeatherInfoFilter *_weather;
    SOJUGalleryAltitudeInfoFilter *_altitude;
}

+ (id)withJUGalleryInfoFilter:(id)arg1;
- (void).cxx_destruct;
- (id)setAltitude:(id)arg1;
- (id)setWeather:(id)arg1;
- (id)setSpeed:(id)arg1;
- (id)setDate:(id)arg1;
- (id)setBattery:(id)arg1;
- (id)setType:(id)arg1;
- (id)build;
- (id)setTypeEnum:(long long)arg1;

@end

