//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSummary.h"

@class NSString, NSURL;

@interface SCURLSummary : SCSummary
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_urlString;
    NSURL *_proxyImageUrl;
    long long _metadataLoadState;
}

@property(nonatomic) long long metadataLoadState; // @synthesize metadataLoadState=_metadataLoadState;
@property(readonly, nonatomic) NSURL *proxyImageUrl; // @synthesize proxyImageUrl=_proxyImageUrl;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;
- (_Bool)_hasTitle;
- (long long)mediaMetadataAvailable;
- (void)fetchThumbnailImageFromServerWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2 userSession:(id)arg3;
- (id)trackingId;
- (id)cacheId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)failedToLoad;
- (_Bool)isEqual:(id)arg1;
- (void)updateWithURLSummary:(id)arg1;
- (id)initWithURLString:(id)arg1 title:(id)arg2 subtitle:(id)arg3 proxyImageUrlString:(id)arg4;
- (id)initWithURLString:(id)arg1;

@end

