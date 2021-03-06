//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RKMessage.h"

@class NSString;

@interface RKCommentReplyMessage : RKMessage
{
    NSString *_linkTitle;
    unsigned long long _voteStatus;
    NSString *_context;
    NSString *_parentFullName;
    NSString *_parentCommentBodyMarkdown;
    NSString *_parentCommentBodyHTML;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *parentCommentBodyHTML; // @synthesize parentCommentBodyHTML=_parentCommentBodyHTML;
@property(copy, nonatomic) NSString *parentCommentBodyMarkdown; // @synthesize parentCommentBodyMarkdown=_parentCommentBodyMarkdown;
@property(readonly, copy, nonatomic) NSString *parentFullName; // @synthesize parentFullName=_parentFullName;
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long voteStatus; // @synthesize voteStatus=_voteStatus;
@property(readonly, copy, nonatomic) NSString *linkTitle; // @synthesize linkTitle=_linkTitle;
- (void).cxx_destruct;
- (id)urlWithContext:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *linkIdentifier;
@property(readonly, copy, nonatomic) NSString *parentIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

