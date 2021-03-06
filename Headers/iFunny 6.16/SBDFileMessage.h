//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SendBirdSDK/SBDBaseMessage.h>

@class NSArray, NSMutableArray, NSString, SBDSender;

@interface SBDFileMessage : SBDBaseMessage
{
    _Bool _isBlocked;
    _Bool _requireAuth;
    SBDSender *_sender;
    NSString *_name;
    unsigned long long _size;
    NSString *_type;
    NSString *_requestId;
    NSArray *_thumbnails;
    unsigned long long _sendingStatus;
    unsigned long long _errorCode;
    NSString *_url;
    NSMutableArray *_mutableRequestedMentionUserIds;
}

+ (id)buildWithFileMessageParams:(id)arg1 requestId:(id)arg2 channel:(id)arg3 sender:(id)arg4;
+ (id)buildWithFileUrl:(id)arg1 name:(id)arg2 size:(unsigned long long)arg3 type:(id)arg4 data:(id)arg5 requestId:(id)arg6 sender:(id)arg7 channel:(id)arg8 customType:(id)arg9 thumbnailSizes:(id)arg10;
+ (id)buildWithFileUrl:(id)arg1 name:(id)arg2 size:(unsigned long long)arg3 type:(id)arg4 data:(id)arg5 requestId:(id)arg6 sender:(id)arg7 channel:(id)arg8 customType:(id)arg9;
@property(retain, nonatomic) NSMutableArray *mutableRequestedMentionUserIds; // @synthesize mutableRequestedMentionUserIds=_mutableRequestedMentionUserIds;
@property(getter=isRequiredAuth) _Bool requireAuth; // @synthesize requireAuth=_requireAuth;
@property _Bool isBlocked; // @synthesize isBlocked=_isBlocked;
@property(retain, nonatomic, getter=url) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long errorCode; // @synthesize errorCode=_errorCode;
@property(readonly, nonatomic) unsigned long long sendingStatus; // @synthesize sendingStatus=_sendingStatus;
@property(retain, nonatomic) NSArray *thumbnails; // @synthesize thumbnails=_thumbnails;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic, getter=sender) SBDSender *sender; // @synthesize sender=_sender;
- (void).cxx_destruct;
- (id)copyWithCanceledState;
- (id)copyWithFailedState;
- (id)description;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setSendingStatus:(unsigned long long)arg1;
- (void)resetErrorCode;
@property(readonly, nonatomic, getter=getRequestState) unsigned long long requestState;
- (_Bool)isEqualToMessage:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)_toDictionary;
- (id)serialize;
- (_Bool)isResendable;
@property(readonly, nonatomic) NSArray *requestedMentionUserIds;
- (void)setRequestedMentionUserIds:(id)arg1;

@end

