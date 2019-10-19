//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, YTITrackingUrl;

@interface YTDeferredAtrData : NSObject
{
    int _retryCount;
    YTITrackingUrl *_atrTrackingURL;
    NSString *_challenge;
    NSString *_CPN;
    NSDate *_dateCreated;
    NSString *_identityID;
    NSString *_videoID;
    unsigned long long _videoLengthSeconds;
    NSString *_visitorData;
}

@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) NSString *visitorData; // @synthesize visitorData=_visitorData;
@property(readonly, nonatomic) unsigned long long videoLengthSeconds; // @synthesize videoLengthSeconds=_videoLengthSeconds;
@property(readonly, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(readonly, nonatomic) NSString *identityID; // @synthesize identityID=_identityID;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, nonatomic) NSString *CPN; // @synthesize CPN=_CPN;
@property(readonly, nonatomic) NSString *challenge; // @synthesize challenge=_challenge;
@property(readonly, nonatomic) YTITrackingUrl *atrTrackingURL; // @synthesize atrTrackingURL=_atrTrackingURL;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAtrTrackingURL:(id)arg1 challenge:(id)arg2 CPN:(id)arg3 dateCreated:(id)arg4 identityID:(id)arg5 retryCount:(int)arg6 videoID:(id)arg7 videoLengthSeconds:(unsigned long long)arg8 visitorData:(id)arg9;

@end

