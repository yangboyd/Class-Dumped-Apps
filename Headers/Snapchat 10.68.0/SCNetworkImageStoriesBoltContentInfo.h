//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCNetworkImageStoriesBoltContentInfo : NSObject <NSCopying>
{
    NSString *_legacyZipped;
    NSString *_media;
    NSString *_overlay;
    NSString *_thumbnail;
}

@property(readonly, copy, nonatomic) NSString *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, copy, nonatomic) NSString *overlay; // @synthesize overlay=_overlay;
@property(readonly, copy, nonatomic) NSString *media; // @synthesize media=_media;
@property(readonly, copy, nonatomic) NSString *legacyZipped; // @synthesize legacyZipped=_legacyZipped;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLegacyZipped:(id)arg1 media:(id)arg2 overlay:(id)arg3 thumbnail:(id)arg4;

@end

