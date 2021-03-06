//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/NSSecureCoding-Protocol.h>

@class IGAsyncTask, IGMediaCroppingInfo, IGVideoComposition, NSDate, NSString;

@interface IGTVComposition : NSObject <NSSecureCoding>
{
    _Bool _shareToFeed;
    _Bool _allowAds;
    _Bool _isFundedContent;
    _Bool _videoCaptionsEnabled;
    NSString *_identifier;
    IGVideoComposition *_videoComposition;
    IGAsyncTask *_coverPhoto;
    NSString *_title;
    NSString *_videoDescription;
    NSString *_seriesId;
    NSString *_seriesName;
    NSString *_seriesDescription;
    long long _seriesEpisodes;
    IGMediaCroppingInfo *_feedPreviewCropInfo;
    IGMediaCroppingInfo *_squareCropInfo;
    NSString *_sponsorPartnerId;
    NSDate *_creationDate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) _Bool videoCaptionsEnabled; // @synthesize videoCaptionsEnabled=_videoCaptionsEnabled;
@property(nonatomic) _Bool isFundedContent; // @synthesize isFundedContent=_isFundedContent;
@property(nonatomic) _Bool allowAds; // @synthesize allowAds=_allowAds;
@property(retain, nonatomic) NSString *sponsorPartnerId; // @synthesize sponsorPartnerId=_sponsorPartnerId;
@property(retain, nonatomic) IGMediaCroppingInfo *squareCropInfo; // @synthesize squareCropInfo=_squareCropInfo;
@property(retain, nonatomic) IGMediaCroppingInfo *feedPreviewCropInfo; // @synthesize feedPreviewCropInfo=_feedPreviewCropInfo;
@property(nonatomic) _Bool shareToFeed; // @synthesize shareToFeed=_shareToFeed;
@property(nonatomic) long long seriesEpisodes; // @synthesize seriesEpisodes=_seriesEpisodes;
@property(retain, nonatomic) NSString *seriesDescription; // @synthesize seriesDescription=_seriesDescription;
@property(retain, nonatomic) NSString *seriesName; // @synthesize seriesName=_seriesName;
@property(retain, nonatomic) NSString *seriesId; // @synthesize seriesId=_seriesId;
@property(retain, nonatomic) NSString *videoDescription; // @synthesize videoDescription=_videoDescription;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) IGAsyncTask *coverPhoto; // @synthesize coverPhoto=_coverPhoto;
@property(retain, nonatomic) IGVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 videoComposition:(id)arg2 coverPhoto:(id)arg3 title:(id)arg4 description:(id)arg5 seriesId:(id)arg6 seriesName:(id)arg7 seriesDescription:(id)arg8 seriesEpisodes:(long long)arg9 shareToFeed:(_Bool)arg10 feedPreviewCropInfo:(id)arg11 squareCropInfo:(id)arg12 sponsorPartnerId:(id)arg13 allowAds:(_Bool)arg14 isFundedContent:(_Bool)arg15 videoCaptionsEnabled:(_Bool)arg16;

@end

