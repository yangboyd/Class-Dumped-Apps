//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class UFMCommonData, UFMMobileData;

@interface UFMMobileBugReport : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) UFMCommonData *commonData; // @dynamic commonData;
@property(nonatomic) _Bool hasCommonData; // @dynamic hasCommonData;
@property(nonatomic) _Bool hasMobileData; // @dynamic hasMobileData;
@property(nonatomic) _Bool hasOsType; // @dynamic hasOsType;
@property(nonatomic) _Bool hasReportType; // @dynamic hasReportType;
@property(retain, nonatomic) UFMMobileData *mobileData; // @dynamic mobileData;
@property(nonatomic) int osType; // @dynamic osType;
@property(nonatomic) int reportType; // @dynamic reportType;

@end

