//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCNetworkImageDownloadInfo : NSObject <NSCopying, NSCoding>
{
    unsigned long long _subtype;
    NSArray *_mediaInfo_contexts;
    long long _mediaInfo_mediaContextType;
    NSArray *_bitmojiInfo_contexts;
    NSString *_bitmojiInfo_feature;
    unsigned long long _bitmojiInfo_scale;
    unsigned long long _bitmojiInfo_imageType;
    _Bool _bitmojiInfo_canUsePrior;
    NSArray *_bitmojiSelfieInfo_contexts;
    NSString *_bitmojiSelfieInfo_feature;
    unsigned long long _bitmojiSelfieInfo_type;
    unsigned long long _bitmojiSelfieInfo_scale;
    _Bool _bitmojiSelfieInfo_canUsePrior;
    unsigned long long _bitmojiSelfieInfo_selfieIdModifier;
}

+ (id)mediaInfoWithContexts:(id)arg1 mediaContextType:(long long)arg2;
+ (id)bitmojiSelfieInfoWithContexts:(id)arg1 feature:(id)arg2 type:(unsigned long long)arg3 scale:(unsigned long long)arg4 canUsePrior:(_Bool)arg5 selfieIdModifier:(unsigned long long)arg6;
+ (id)bitmojiInfoWithContexts:(id)arg1 feature:(id)arg2 scale:(unsigned long long)arg3 imageType:(unsigned long long)arg4 canUsePrior:(_Bool)arg5;
- (void).cxx_destruct;
- (void)matchMediaInfo:(CDUnknownBlockType)arg1 bitmojiInfo:(CDUnknownBlockType)arg2 bitmojiSelfieInfo:(CDUnknownBlockType)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end

