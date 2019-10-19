//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCognacContentUpdateInfo : NSObject <NSCopying, NSCoding>
{
    _Bool _newApp;
    _Bool _hasMajorUpdate;
    int _majorUpdateVersion;
    int _minorUpdateVersion;
    NSString *_majorUpdateDescription;
}

@property(readonly, copy, nonatomic) NSString *majorUpdateDescription; // @synthesize majorUpdateDescription=_majorUpdateDescription;
@property(readonly, nonatomic) int minorUpdateVersion; // @synthesize minorUpdateVersion=_minorUpdateVersion;
@property(readonly, nonatomic) int majorUpdateVersion; // @synthesize majorUpdateVersion=_majorUpdateVersion;
@property(readonly, nonatomic) _Bool hasMajorUpdate; // @synthesize hasMajorUpdate=_hasMajorUpdate;
@property(readonly, nonatomic) _Bool newApp; // @synthesize newApp=_newApp;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNewApp:(_Bool)arg1 hasMajorUpdate:(_Bool)arg2 majorUpdateVersion:(int)arg3 minorUpdateVersion:(int)arg4 majorUpdateDescription:(id)arg5;
- (id)initWithCoder:(id)arg1;

@end

