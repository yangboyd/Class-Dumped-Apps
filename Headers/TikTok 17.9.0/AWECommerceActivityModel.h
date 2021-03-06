//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWEURLModel, NSArray, NSDate, NSString;

@interface AWECommerceActivityModel : MTLModel <MTLJSONSerializing>
{
    AWEURLModel *_imageURL;
    NSString *_webURLString;
    NSString *_openURLString;
    NSString *_title;
    long long _startTimeInterval;
    long long _endTimeInterval;
    NSArray *_timeRanges;
    AWEURLModel *_clickTrackURLList;
    AWEURLModel *_trackURLList;
}

+ (id)timeRangesJSONTransformer;
+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) AWEURLModel *trackURLList; // @synthesize trackURLList=_trackURLList;
@property(retain, nonatomic) AWEURLModel *clickTrackURLList; // @synthesize clickTrackURLList=_clickTrackURLList;
@property(copy, nonatomic) NSArray *timeRanges; // @synthesize timeRanges=_timeRanges;
@property(nonatomic) long long endTimeInterval; // @synthesize endTimeInterval=_endTimeInterval;
@property(nonatomic) long long startTimeInterval; // @synthesize startTimeInterval=_startTimeInterval;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *openURLString; // @synthesize openURLString=_openURLString;
@property(copy, nonatomic) NSString *webURLString; // @synthesize webURLString=_webURLString;
@property(retain, nonatomic) AWEURLModel *imageURL; // @synthesize imageURL=_imageURL;
- (_Bool)inTimeRangeWithCurrentTime:(double)arg1;
- (_Bool)isValideDate;
@property(readonly, nonatomic) NSDate *endTime;
@property(readonly, nonatomic) NSDate *startTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

