//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesBoltContentObjects : NSObject <NSCopying>
{
    NSString *_legacyZippedCo;
    NSString *_mediaCo;
    NSString *_overlayCo;
    NSString *_thumbnailCo;
}

@property(readonly, copy, nonatomic) NSString *thumbnailCo; // @synthesize thumbnailCo=_thumbnailCo;
@property(readonly, copy, nonatomic) NSString *overlayCo; // @synthesize overlayCo=_overlayCo;
@property(readonly, copy, nonatomic) NSString *mediaCo; // @synthesize mediaCo=_mediaCo;
@property(readonly, copy, nonatomic) NSString *legacyZippedCo; // @synthesize legacyZippedCo=_legacyZippedCo;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLegacyZippedCo:(id)arg1 mediaCo:(id)arg2 overlayCo:(id)arg3 thumbnailCo:(id)arg4;

@end

