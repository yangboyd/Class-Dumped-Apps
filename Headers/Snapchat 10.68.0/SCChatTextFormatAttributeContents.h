//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSURL;

@interface SCChatTextFormatAttributeContents : NSObject <NSCopying>
{
    unsigned long long _subtype;
    unsigned long long _format_type;
    NSURL *_url_url;
}

+ (id)urlWithUrl:(id)arg1;
+ (id)formatWithType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)matchFormat:(CDUnknownBlockType)arg1 url:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

