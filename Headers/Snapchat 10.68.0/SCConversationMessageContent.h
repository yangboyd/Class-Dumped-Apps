//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCConversationBatchMedias, SCConversationCash, SCConversationChatMedia, SCConversationGroupUpdate, SCConversationMapShare, SCConversationMediaSave, SCConversationMessageParcel, SCConversationScreenCapture, SCConversationSearchShareStory, SCConversationSearchShareStorySnap, SCConversationShazamShare, SCConversationSnap, SCConversationSnapchatter, SCConversationSpeedwayStory, SCConversationSticker, SCConversationStoryShare, SCConversationText;

@interface SCConversationMessageContent : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCConversationText *_text_text;
    SCConversationScreenCapture *_screenCapture_screenCapture;
    SCConversationSticker *_sticker_sticker;
    SCConversationSnap *_snap_snap;
    SCConversationCash *_cash_cash;
    SCConversationGroupUpdate *_groupUpdate_groupUpdate;
    SCConversationMessageParcel *_messageParcel_messageParcel;
    SCConversationShazamShare *_shazamShare_shazamShare;
    SCConversationMapShare *_mapShare_mapShare;
    SCConversationStoryShare *_storyShare_storyShare;
    SCConversationSnapchatter *_snapchatter_snapchatter;
    SCConversationSearchShareStory *_searchShareStory_searchShareStory;
    SCConversationSearchShareStorySnap *_searchShareStorySnap_searchShareStorySnap;
    SCConversationMediaSave *_mediaSave_mediaSave;
    SCConversationChatMedia *_chatMedia_chatMedia;
    SCConversationBatchMedias *_batchMedias_batchMedias;
    SCConversationSpeedwayStory *_speedwayStory_speedwayStory;
}

+ (id)textWithText:(id)arg1;
+ (id)storyShareWithStoryShare:(id)arg1;
+ (id)stickerWithSticker:(id)arg1;
+ (id)speedwayStoryWithSpeedwayStory:(id)arg1;
+ (id)snapchatterWithSnapchatter:(id)arg1;
+ (id)snapWithSnap:(id)arg1;
+ (id)shazamShareWithShazamShare:(id)arg1;
+ (id)searchShareStoryWithSearchShareStory:(id)arg1;
+ (id)searchShareStorySnapWithSearchShareStorySnap:(id)arg1;
+ (id)screenCaptureWithScreenCapture:(id)arg1;
+ (id)messageParcelWithMessageParcel:(id)arg1;
+ (id)mediaSaveWithMediaSave:(id)arg1;
+ (id)mapShareWithMapShare:(id)arg1;
+ (id)groupUpdateWithGroupUpdate:(id)arg1;
+ (id)chatMediaWithChatMedia:(id)arg1;
+ (id)cashWithCash:(id)arg1;
+ (id)batchMediasWithBatchMedias:(id)arg1;
- (void).cxx_destruct;
- (void)matchText:(CDUnknownBlockType)arg1 screenCapture:(CDUnknownBlockType)arg2 sticker:(CDUnknownBlockType)arg3 snap:(CDUnknownBlockType)arg4 cash:(CDUnknownBlockType)arg5 groupUpdate:(CDUnknownBlockType)arg6 messageParcel:(CDUnknownBlockType)arg7 shazamShare:(CDUnknownBlockType)arg8 mapShare:(CDUnknownBlockType)arg9 storyShare:(CDUnknownBlockType)arg10 snapchatter:(CDUnknownBlockType)arg11 searchShareStory:(CDUnknownBlockType)arg12 searchShareStorySnap:(CDUnknownBlockType)arg13 mediaSave:(CDUnknownBlockType)arg14 chatMedia:(CDUnknownBlockType)arg15 batchMedias:(CDUnknownBlockType)arg16 speedwayStory:(CDUnknownBlockType)arg17;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)asSpeedwayStory;
- (id)asBatchMedias;
- (id)asChatMedia;
- (id)asMediaSave;
- (id)asSearchShareStorySnap;
- (id)asSearchShareStory;
- (id)asSnapchatter;
- (id)asStoryShare;
- (id)asMapShare;
- (id)asShazamShare;
- (id)asMessageParcel;
- (id)asGroupUpdate;
- (id)asCash;
- (id)asSnap;
- (id)asSticker;
- (id)asScreenCapture;
- (id)asText;
- (unsigned long long)subtype;
- (_Bool)isSameSubtype:(id)arg1;

@end

