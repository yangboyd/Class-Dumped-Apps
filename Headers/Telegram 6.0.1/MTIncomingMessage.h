//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTIncomingMessage : NSObject
{
    int _seqNo;
    long long _messageId;
    long long _authKeyId;
    long long _sessionId;
    long long _salt;
    double _timestamp;
    long long _size;
    id _body;
}

@property(readonly, nonatomic) id body; // @synthesize body=_body;
@property(readonly, nonatomic) long long size; // @synthesize size=_size;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) long long salt; // @synthesize salt=_salt;
@property(readonly, nonatomic) long long sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) long long authKeyId; // @synthesize authKeyId=_authKeyId;
@property(readonly, nonatomic) int seqNo; // @synthesize seqNo=_seqNo;
@property(readonly, nonatomic) long long messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (id)initWithMessageId:(long long)arg1 seqNo:(int)arg2 authKeyId:(long long)arg3 sessionId:(long long)arg4 salt:(long long)arg5 timestamp:(double)arg6 size:(long long)arg7 body:(id)arg8;

@end

