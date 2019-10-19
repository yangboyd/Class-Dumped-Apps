//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIAdFormat, YTIAdSystemValue, YTIAnnotationTracking, YTIInfoCardCollection;

@interface YTIInLine : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAdFormat *adFormat; // @dynamic adFormat;
@property(retain, nonatomic) YTIAdSystemValue *adSystem; // @dynamic adSystem;
@property(copy, nonatomic) NSString *adTitle; // @dynamic adTitle;
@property(copy, nonatomic) NSString *advertiser; // @dynamic advertiser;
@property(retain, nonatomic) YTIAnnotationTracking *annotationTracking; // @dynamic annotationTracking;
@property(retain, nonatomic) NSMutableArray *creativesArray; // @dynamic creativesArray;
@property(readonly, nonatomic) unsigned long long creativesArray_Count; // @dynamic creativesArray_Count;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(retain, nonatomic) NSMutableArray *errorsArray; // @dynamic errorsArray;
@property(readonly, nonatomic) unsigned long long errorsArray_Count; // @dynamic errorsArray_Count;
@property(nonatomic) _Bool hasAdFormat; // @dynamic hasAdFormat;
@property(nonatomic) _Bool hasAdSystem; // @dynamic hasAdSystem;
@property(nonatomic) _Bool hasAdTitle; // @dynamic hasAdTitle;
@property(nonatomic) _Bool hasAdvertiser; // @dynamic hasAdvertiser;
@property(nonatomic) _Bool hasAnnotationTracking; // @dynamic hasAnnotationTracking;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasInfoCardCollection; // @dynamic hasInfoCardCollection;
@property(nonatomic) _Bool hasIsPharma; // @dynamic hasIsPharma;
@property(nonatomic) _Bool hasSurvey; // @dynamic hasSurvey;
@property(retain, nonatomic) YTIInfoCardCollection *infoCardCollection; // @dynamic infoCardCollection;
@property(retain, nonatomic) NSMutableArray *infoCardTrackingEventsArray; // @dynamic infoCardTrackingEventsArray;
@property(readonly, nonatomic) unsigned long long infoCardTrackingEventsArray_Count; // @dynamic infoCardTrackingEventsArray_Count;
@property(retain, nonatomic) NSMutableArray *infoCardsArray; // @dynamic infoCardsArray;
@property(readonly, nonatomic) unsigned long long infoCardsArray_Count; // @dynamic infoCardsArray_Count;
@property(nonatomic) _Bool isPharma; // @dynamic isPharma;
@property(copy, nonatomic) NSString *survey; // @dynamic survey;

@end

