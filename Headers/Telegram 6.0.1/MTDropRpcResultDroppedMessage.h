//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MtProtoKit/MTDropRpcResultMessage.h>

@interface MTDropRpcResultDroppedMessage : MTDropRpcResultMessage
{
    int _seqNo;
    int _size;
    long long _messageId;
}

@property(readonly, nonatomic) int size; // @synthesize size=_size;
@property(readonly, nonatomic) int seqNo; // @synthesize seqNo=_seqNo;
@property(readonly, nonatomic) long long messageId; // @synthesize messageId=_messageId;
- (id)initWithMessageId:(long long)arg1 seqNo:(int)arg2 size:(int)arg3;

@end

