//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZXParsedResult.h"

@class NSString;

@interface ZXGeoParsedResult : ZXParsedResult
{
    double _latitude;
    double _longitude;
    double _altitude;
    NSString *_query;
}

+ (id)geoParsedResultWithLatitude:(double)arg1 longitude:(double)arg2 altitude:(double)arg3 query:(id)arg4;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
- (id)displayResult;
- (id)geoURI;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 altitude:(double)arg3 query:(id)arg4;

@end

