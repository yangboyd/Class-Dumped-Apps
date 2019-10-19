//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDate, NSString, SCAvatarViewModel, SCStoriesThumbnailInfo;

@interface SCStoryManagementSnapDataModel : NSObject <NSCopying>
{
    NSString *_clientId;
    NSString *_storyDisplayName;
    NSString *_username;
    SCStoriesThumbnailInfo *_storiesThumbnailInfo;
    long long _chromeViewType;
    SCAvatarViewModel *_avatarViewModel;
    long long _viewCount;
    long long _captureCount;
    NSString *_attachmentUrl;
    NSDate *_timestamp;
    long long _uploadStatus;
    long long _viewerListType;
    NSArray *_viewerInfos;
}

@property(readonly, copy, nonatomic) NSArray *viewerInfos; // @synthesize viewerInfos=_viewerInfos;
@property(readonly, nonatomic) long long viewerListType; // @synthesize viewerListType=_viewerListType;
@property(readonly, nonatomic) long long uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *attachmentUrl; // @synthesize attachmentUrl=_attachmentUrl;
@property(readonly, nonatomic) long long captureCount; // @synthesize captureCount=_captureCount;
@property(readonly, nonatomic) long long viewCount; // @synthesize viewCount=_viewCount;
@property(readonly, copy, nonatomic) SCAvatarViewModel *avatarViewModel; // @synthesize avatarViewModel=_avatarViewModel;
@property(readonly, nonatomic) long long chromeViewType; // @synthesize chromeViewType=_chromeViewType;
@property(readonly, copy, nonatomic) SCStoriesThumbnailInfo *storiesThumbnailInfo; // @synthesize storiesThumbnailInfo=_storiesThumbnailInfo;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *storyDisplayName; // @synthesize storyDisplayName=_storyDisplayName;
@property(readonly, copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithClientId:(id)arg1 storyDisplayName:(id)arg2 username:(id)arg3 storiesThumbnailInfo:(id)arg4 chromeViewType:(long long)arg5 avatarViewModel:(id)arg6 viewCount:(long long)arg7 captureCount:(long long)arg8 attachmentUrl:(id)arg9 timestamp:(id)arg10 uploadStatus:(long long)arg11 viewerListType:(long long)arg12 viewerInfos:(id)arg13;

@end

