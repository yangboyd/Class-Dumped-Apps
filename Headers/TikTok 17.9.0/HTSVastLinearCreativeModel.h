//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSVastElementModel.h"

@class HTSVastTrackingEventsModel, HTSVastVideoClicksModel, NSArray, NSNumber;

@interface HTSVastLinearCreativeModel : HTSVastElementModel
{
    NSNumber *_duration;
    NSArray *_mediaFiles;
    HTSVastVideoClicksModel *_videoClicks;
    HTSVastTrackingEventsModel *_trackingEvents;
    NSArray *_icons;
}

@property(copy, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) HTSVastTrackingEventsModel *trackingEvents; // @synthesize trackingEvents=_trackingEvents;
@property(retain, nonatomic) HTSVastVideoClicksModel *videoClicks; // @synthesize videoClicks=_videoClicks;
@property(copy, nonatomic) NSArray *mediaFiles; // @synthesize mediaFiles=_mediaFiles;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
- (void).cxx_destruct;

@end

