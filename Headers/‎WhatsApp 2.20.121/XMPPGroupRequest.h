//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/XMPPRequest.h>

@class WAGroupJID;

@interface XMPPGroupRequest : XMPPRequest
{
    WAGroupJID *_jid;
}

+ (id)requestStringFromType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) WAGroupJID *jid; // @synthesize jid=_jid;
- (id)initWithGroupJID:(id)arg1;

@end

