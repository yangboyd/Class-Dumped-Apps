//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber;
@protocol Optional;

@interface ALXPlayDirectiveProgressReport : JSONModel
{
    NSNumber<Optional> *_progressReportDelayInMilliseconds;
    NSNumber<Optional> *_progressReportIntervalInMilliseconds;
}

@property(retain, nonatomic) NSNumber<Optional> *progressReportIntervalInMilliseconds; // @synthesize progressReportIntervalInMilliseconds=_progressReportIntervalInMilliseconds;
@property(retain, nonatomic) NSNumber<Optional> *progressReportDelayInMilliseconds; // @synthesize progressReportDelayInMilliseconds=_progressReportDelayInMilliseconds;
- (void).cxx_destruct;

@end

