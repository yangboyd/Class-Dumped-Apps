//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRUserLocation_GmmPlaceReportPayloadNotificationInfo, GTLRUserLocation_GmmPlaceReportPayloadSnapToPlaceRequest, NSArray, NSNumber, NSString;

@interface GTLRUserLocation_GmmPlaceReportPayload : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(copy, nonatomic) NSString *context; // @dynamic context;
@property(copy, nonatomic) NSString *eventId; // @dynamic eventId;
@property(copy, nonatomic) NSString *experimentInfo; // @dynamic experimentInfo;
@property(retain, nonatomic) GTLRUserLocation_GmmPlaceReportPayloadNotificationInfo *notificationInfo; // @dynamic notificationInfo;
@property(retain, nonatomic) GTLRUserLocation_GmmPlaceReportPayloadSnapToPlaceRequest *snapToPlaceRequest; // @dynamic snapToPlaceRequest;
@property(retain, nonatomic) NSArray *snapToPlaceResults; // @dynamic snapToPlaceResults;
@property(copy, nonatomic) NSString *userEvent; // @dynamic userEvent;
@property(retain, nonatomic) NSNumber *veType; // @dynamic veType;

@end

