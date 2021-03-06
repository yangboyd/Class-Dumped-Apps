//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectUIMessage-Protocol.h>

@class IGDirectEmbeddedPublishedMessage, IGDirectForwardMetadata, IGDirectPowerupsMetadata, IGDirectUIMessageMetadata, IGMedia, NSArray, NSString;

@interface IGDirectPostSundialShare : NSObject <IGDirectUIMessage>
{
    IGDirectUIMessageMetadata *_metadata;
    _Bool _isShhMode;
    IGDirectEmbeddedPublishedMessage *_quotedMessage;
    NSArray *_reactions;
    IGDirectForwardMetadata *_forwardMetadata;
    IGDirectPowerupsMetadata *_powerupsMetadata;
    IGMedia *_post;
    NSString *_comment;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, nonatomic) IGMedia *post; // @synthesize post=_post;
@property(readonly, nonatomic) _Bool isShhMode; // @synthesize isShhMode=_isShhMode;
@property(readonly, nonatomic) IGDirectPowerupsMetadata *powerupsMetadata; // @synthesize powerupsMetadata=_powerupsMetadata;
@property(readonly, nonatomic) IGDirectForwardMetadata *forwardMetadata; // @synthesize forwardMetadata=_forwardMetadata;
@property(readonly, nonatomic) NSArray *reactions; // @synthesize reactions=_reactions;
@property(readonly, nonatomic) IGDirectEmbeddedPublishedMessage *quotedMessage; // @synthesize quotedMessage=_quotedMessage;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)contentTypeString;
- (id)metadata;
- (id)replyable;
- (id)messageId;
- (_Bool)hideInThread;
- (id)actionSummaryProvider;
- (unsigned long long)messageType;
- (id)initWithMetadata:(id)arg1 comment:(id)arg2 post:(id)arg3 reactions:(id)arg4 isShhMode:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

