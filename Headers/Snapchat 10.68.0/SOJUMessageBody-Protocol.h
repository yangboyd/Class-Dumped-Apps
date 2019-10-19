//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUKhaleesiShare, SOJUMedia, SOJUMediaSave, SOJUMessageParcel, SOJUNycShare, SOJUSearchShareStory, SOJUSearchShareStorySnap, SOJUSnapMetadata, SOJUSnapchatter, SOJUSticker, SOJUStoryShare;

@protocol SOJUMessageBody <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *speedwayStoryV2Source;
@property(readonly, copy, nonatomic) NSString *screenCaptureSource;
@property(readonly, copy, nonatomic) SOJUMessageParcel *messageParcel;
@property(readonly, copy, nonatomic) NSNumber *isScreenRecording;
@property(readonly, copy, nonatomic) NSNumber *sendStartTimestamp;
@property(readonly, copy, nonatomic) NSArray *messagePallet;
@property(readonly, copy, nonatomic) NSArray *replyMedias;
@property(readonly, copy, nonatomic) SOJUMediaSave *mediaSave;
@property(readonly, copy, nonatomic) SOJUSearchShareStory *searchShareStory;
@property(readonly, copy, nonatomic) SOJUSearchShareStorySnap *searchShareStorySnap;
@property(readonly, copy, nonatomic) SOJUNycShare *nycShare;
@property(readonly, copy, nonatomic) SOJUKhaleesiShare *khaleesiShare;
@property(readonly, copy, nonatomic) SOJUSnapMetadata *snapMetadata;
@property(readonly, copy, nonatomic) NSNumber *obfuscation;
@property(readonly, copy, nonatomic) SOJUStoryShare *storyShare;
@property(readonly, copy, nonatomic) NSString *storyTitle;
@property(readonly, copy, nonatomic) NSArray *mediaCardAttributes;
@property(readonly, copy, nonatomic) NSArray *attributes;
@property(readonly, copy, nonatomic) NSString *text;
@property(readonly, copy, nonatomic) NSNumber *typeVersion;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) SOJUSnapchatter *snapchatter;
@property(readonly, copy, nonatomic) SOJUSticker *sticker;
@property(readonly, copy, nonatomic) NSArray *medias;
@property(readonly, copy, nonatomic) SOJUMedia *media;
@end

