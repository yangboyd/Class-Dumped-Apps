//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsDynamiteV1MobileMessageAnnotations, ComGoogleAppsDynamiteV1MobileMessageAttachments, ComGoogleAppsDynamiteV1MobileMessageBotResponses, ComGoogleAppsDynamiteV1MobileMessageReactions, DYNProtoAppId, DYNProtoAppProfile, JavaLangLong, NSString;

@interface DYNSStorageSchemaTopicMessageRow : NSObject
{
    JavaLangLong *rowId_;
    NSString *id__;
    NSString *groupId_;
    NSString *topicId_;
    NSString *creatorId_;
    int groupType_;
    long long createTimeMicros_;
    long long updateTimeMicros_;
    JavaLangLong *editTimeMicros_;
    NSString *textBody_;
    ComGoogleAppsDynamiteV1MobileMessageAnnotations *annotation_;
    ComGoogleAppsDynamiteV1MobileMessageAttachments *attachment_;
    ComGoogleAppsDynamiteV1MobileMessageBotResponses *botResponses_;
    ComGoogleAppsDynamiteV1MobileMessageReactions *reactions_;
    int internalMessageType_;
    DYNProtoAppProfile *appProfile_;
    _Bool contiguousState_;
    _Bool serverConfirmedState_;
    int serverState_;
    JavaLangLong *expirationTimeMicros_;
    DYNProtoAppId *originAppId_;
    int editableBy_;
    int deletableBy_;
    int messageType_;
}

- (void)dealloc;
- (int)getMessageType;
- (int)getDeletableBy;
- (int)getEditableBy;
- (id)getOriginAppId;
- (id)getExpirationTimeMicros;
- (int)getServerState;
- (_Bool)isServerConfirmedState;
- (_Bool)isContiguousState;
- (id)getAppProfile;
- (int)getInternalMessageType;
- (id)getReactions;
- (id)getBotResponses;
- (id)getAttachment;
- (id)getAnnotation;
- (id)getTextBody;
- (id)getEditTimeMicros;
- (long long)getUpdateTimeMicros;
- (long long)getCreateTimeMicros;
- (int)getGroupType;
- (id)getCreatorId;
- (id)getTopicId;
- (id)getGroupId;
- (id)getId;
- (id)getRowId;
- (id)withRowIdWithLong:(long long)arg1;

@end

