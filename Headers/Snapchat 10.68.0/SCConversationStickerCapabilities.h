//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCConversationStickerCapabilities : NSObject <NSCopying>
{
    _Bool _isFriends;
    _Bool _isGeolocation;
}

@property(readonly, nonatomic) _Bool isGeolocation; // @synthesize isGeolocation=_isGeolocation;
@property(readonly, nonatomic) _Bool isFriends; // @synthesize isFriends=_isFriends;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIsFriends:(_Bool)arg1 isGeolocation:(_Bool)arg2;

@end

