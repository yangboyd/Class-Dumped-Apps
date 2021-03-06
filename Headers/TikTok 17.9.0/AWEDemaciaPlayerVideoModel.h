//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEDemaciaStatusModel, AWEDemaciaUserModel, AWEDemaciaVideoModel, NSArray, NSDictionary, NSString, UIImage;

@interface AWEDemaciaPlayerVideoModel : NSObject
{
    _Bool _isCanPlay;
    _Bool _isVRVideo;
    _Bool _userFavorited;
    NSString *_itemID;
    NSDictionary *_logPassback;
    long long _awemeType;
    long long _mediaType;
    UIImage *_coverImage;
    AWEDemaciaStatusModel *_status;
    AWEDemaciaUserModel *_author;
    NSObject *_music;
    AWEDemaciaVideoModel *_video;
    NSArray *_longVideo;
    NSArray *_localVideoUrlArray;
    NSString *_videoDecryptionKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *videoDecryptionKey; // @synthesize videoDecryptionKey=_videoDecryptionKey;
@property(copy, nonatomic) NSArray *localVideoUrlArray; // @synthesize localVideoUrlArray=_localVideoUrlArray;
@property(copy, nonatomic) NSArray *longVideo; // @synthesize longVideo=_longVideo;
@property(retain, nonatomic) AWEDemaciaVideoModel *video; // @synthesize video=_video;
@property(retain, nonatomic) NSObject *music; // @synthesize music=_music;
@property(retain, nonatomic) AWEDemaciaUserModel *author; // @synthesize author=_author;
@property(retain, nonatomic) AWEDemaciaStatusModel *status; // @synthesize status=_status;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) long long awemeType; // @synthesize awemeType=_awemeType;
@property(copy, nonatomic) NSDictionary *logPassback; // @synthesize logPassback=_logPassback;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(nonatomic) _Bool userFavorited; // @synthesize userFavorited=_userFavorited;
@property(nonatomic) _Bool isVRVideo; // @synthesize isVRVideo=_isVRVideo;
@property(nonatomic) _Bool isCanPlay; // @synthesize isCanPlay=_isCanPlay;
- (id)init;

@end

