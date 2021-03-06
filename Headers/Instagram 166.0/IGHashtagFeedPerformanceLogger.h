//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFeedPerformanceMarkerManager, IGPerformanceMarker;

@interface IGHashtagFeedPerformanceLogger : NSObject
{
    long long _hashtagPageVersion;
    IGFeedPerformanceMarkerManager *_feedPerformanceMarkerManager;
    IGPerformanceMarker *_headerMarker;
    _Bool _headerStoryRequestFinished;
    _Bool _headerInfoRequestFinished;
    _Bool _headerStoryRequestSuccess;
    _Bool _headerInfoRequestSuccess;
}

- (void).cxx_destruct;
- (void)markExitNavigationForAllMarkersWithDestinationModuleName:(id)arg1;
- (void)markFeedRequestFailWithFeedLoadType:(long long)arg1;
- (void)markFeedRequestSuccessWithFeedLoadType:(long long)arg1;
- (void)markFeedRequestStartWithFeedLoadType:(long long)arg1 feedType:(long long)arg2;
- (void)markHeaderLoaded;
- (void)markHeaderRequestFailWithHeaderLoadType:(long long)arg1;
- (void)markHeaderRequestSuccessWithHeaderLoadType:(long long)arg1;
- (void)_markHeaderRequestStartWithHeaderLoadType:(long long)arg1;
- (void)startHeaderMarker;
- (id)initWithHashtagPageVersion:(long long)arg1;

@end

