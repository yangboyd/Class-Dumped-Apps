//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSUIModelsImplUiMessageImpl_Builder.h"

@class ComGoogleCommonCollectImmutableList, DYNProtoAppId, DYNProtoAppProfile, DYNSCommonConstants_MessageStatus, DYNSCommonMessageId, DYNSCommonUserId, DYNSModelsCommonMessagePermission, DYNSModelsCommonMessageType, JavaLangBoolean, JavaLangLong, NSString;

@interface DYNSUIModelsImplAutoValue_UiMessageImpl_Builder : DYNSUIModelsImplUiMessageImpl_Builder
{
    DYNSCommonMessageId *messageId_;
    DYNSCommonConstants_MessageStatus *messageStatus_;
    DYNSCommonUserId *creatorId_;
    NSString *text_;
    JavaLangLong *createdAtMicros_;
    JavaLangLong *lastUpdatedAtMicros_;
    JavaLangBoolean *isLocked_;
    ComGoogleCommonCollectImmutableList *annotations_;
    ComGoogleCommonCollectImmutableList *botResponses_;
    ComGoogleCommonCollectImmutableList *unrenderedCmlAttachments_;
    ComGoogleCommonCollectImmutableList *reactions_;
    NSString *clientLogId_;
    JavaLangBoolean *isContiguous_;
    JavaLangBoolean *isOffTheRecord_;
    DYNSModelsCommonMessagePermission *editableBy_;
    DYNSModelsCommonMessagePermission *deletableBy_;
    DYNSModelsCommonMessageType *messageType_;
    JavaLangLong *nullableLastEditAtMicros_;
    DYNProtoAppProfile *nullableAppProfile_;
    DYNProtoAppId *nullableOriginAppId_;
}

- (void)dealloc;
- (id)build;
- (id)setNullableOriginAppIdWithDYNProtoAppId:(id)arg1;
- (id)setNullableAppProfileWithDYNProtoAppProfile:(id)arg1;
- (id)setNullableLastEditAtMicrosWithJavaLangLong:(id)arg1;
- (id)setMessageTypeWithDYNSModelsCommonMessageType:(id)arg1;
- (id)setDeletableByWithDYNSModelsCommonMessagePermission:(id)arg1;
- (id)setEditableByWithDYNSModelsCommonMessagePermission:(id)arg1;
- (id)setIsOffTheRecordWithBoolean:(_Bool)arg1;
- (id)setIsContiguousWithBoolean:(_Bool)arg1;
- (id)setClientLogIdWithNSString:(id)arg1;
- (id)setReactionsWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)setUnrenderedCmlAttachmentsWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)setBotResponsesWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)setAnnotationsWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)setIsLockedWithBoolean:(_Bool)arg1;
- (id)setLastUpdatedAtMicrosWithLong:(long long)arg1;
- (id)setCreatedAtMicrosWithLong:(long long)arg1;
- (id)setTextWithNSString:(id)arg1;
- (id)setCreatorIdWithDYNSCommonUserId:(id)arg1;
- (id)setMessageStatusWithDYNSCommonConstants_MessageStatus:(id)arg1;
- (id)setMessageIdWithDYNSCommonMessageId:(id)arg1;

@end

