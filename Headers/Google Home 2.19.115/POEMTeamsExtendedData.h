//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSMutableArray, POEMPersonListWithTotalNumber;

@interface POEMTeamsExtendedData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *adminToArray; // @dynamic adminToArray;
@property(readonly, nonatomic) unsigned long long adminToArray_Count; // @dynamic adminToArray_Count;
@property(retain, nonatomic) NSMutableArray *adminsArray; // @dynamic adminsArray;
@property(readonly, nonatomic) unsigned long long adminsArray_Count; // @dynamic adminsArray_Count;
@property(retain, nonatomic) NSMutableArray *dottedLineManagersArray; // @dynamic dottedLineManagersArray;
@property(readonly, nonatomic) unsigned long long dottedLineManagersArray_Count; // @dynamic dottedLineManagersArray_Count;
@property(retain, nonatomic) POEMPersonListWithTotalNumber *dottedLineReports; // @dynamic dottedLineReports;
@property(retain, nonatomic) GPBEnumArray *failuresArray; // @dynamic failuresArray;
@property(readonly, nonatomic) unsigned long long failuresArray_Count; // @dynamic failuresArray_Count;
@property(nonatomic) _Bool hasDottedLineReports; // @dynamic hasDottedLineReports;
@property(nonatomic) _Bool hasReports; // @dynamic hasReports;
@property(retain, nonatomic) NSMutableArray *managementChainArray; // @dynamic managementChainArray;
@property(readonly, nonatomic) unsigned long long managementChainArray_Count; // @dynamic managementChainArray_Count;
@property(retain, nonatomic) POEMPersonListWithTotalNumber *reports; // @dynamic reports;

@end

