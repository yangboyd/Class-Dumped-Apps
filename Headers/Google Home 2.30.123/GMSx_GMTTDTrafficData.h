//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTDNotice, GMSx_GMTTDTrafficData_VisualTrafficReportPolylineRendering, NSMutableArray;

@interface GMSx_GMTTDTrafficData : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int delayCategory; // @dynamic delayCategory;
@property(nonatomic) _Bool hasDelayCategory; // @dynamic hasDelayCategory;
@property(nonatomic) _Bool hasOnRouteTrafficTrendNotice; // @dynamic hasOnRouteTrafficTrendNotice;
@property(nonatomic) _Bool hasTrafficInformationTimestampMs; // @dynamic hasTrafficInformationTimestampMs;
@property(nonatomic) _Bool hasUseTrafficProblemNotices; // @dynamic hasUseTrafficProblemNotices;
@property(nonatomic) _Bool hasVisualTrafficReportPolylineRendering; // @dynamic hasVisualTrafficReportPolylineRendering;
@property(retain, nonatomic) NSMutableArray *offRouteTrafficProblemNoticeArray; // @dynamic offRouteTrafficProblemNoticeArray;
@property(readonly, nonatomic) unsigned long long offRouteTrafficProblemNoticeArray_Count; // @dynamic offRouteTrafficProblemNoticeArray_Count;
@property(retain, nonatomic) NSMutableArray *onRouteProblemNoticeArray; // @dynamic onRouteProblemNoticeArray;
@property(readonly, nonatomic) unsigned long long onRouteProblemNoticeArray_Count; // @dynamic onRouteProblemNoticeArray_Count;
@property(retain, nonatomic) NSMutableArray *onRouteSuspectedClosureNoticeArray; // @dynamic onRouteSuspectedClosureNoticeArray;
@property(readonly, nonatomic) unsigned long long onRouteSuspectedClosureNoticeArray_Count; // @dynamic onRouteSuspectedClosureNoticeArray_Count;
@property(retain, nonatomic) NSMutableArray *onRouteTrafficProblemNoticeArray; // @dynamic onRouteTrafficProblemNoticeArray;
@property(readonly, nonatomic) unsigned long long onRouteTrafficProblemNoticeArray_Count; // @dynamic onRouteTrafficProblemNoticeArray_Count;
@property(retain, nonatomic) GMSx_GMTTDNotice *onRouteTrafficTrendNotice; // @dynamic onRouteTrafficTrendNotice;
@property(retain, nonatomic) NSMutableArray *speedReadingArray; // @dynamic speedReadingArray;
@property(readonly, nonatomic) unsigned long long speedReadingArray_Count; // @dynamic speedReadingArray_Count;
@property(retain, nonatomic) NSMutableArray *trafficIncidentNoticeArray; // @dynamic trafficIncidentNoticeArray;
@property(readonly, nonatomic) unsigned long long trafficIncidentNoticeArray_Count; // @dynamic trafficIncidentNoticeArray_Count;
@property(nonatomic) long long trafficInformationTimestampMs; // @dynamic trafficInformationTimestampMs;
@property(nonatomic) _Bool useTrafficProblemNotices; // @dynamic useTrafficProblemNotices;
@property(retain, nonatomic) GMSx_GMTTDTrafficData_VisualTrafficReportPolylineRendering *visualTrafficReportPolylineRendering; // @dynamic visualTrafficReportPolylineRendering;

@end

