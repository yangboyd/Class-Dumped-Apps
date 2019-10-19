//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCLensResource : NSObject <NSCopying, NSCoding>
{
    long long _type;
    NSString *_URLString;
    NSString *_checksum;
    NSString *_signature;
    NSNumber *_lastUpdated;
}

@property(readonly, copy, nonatomic) NSNumber *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(readonly, copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(readonly, copy, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
@property(readonly, copy, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1 URLString:(id)arg2 checksum:(id)arg3 signature:(id)arg4 lastUpdated:(id)arg5;
- (id)initWithCoder:(id)arg1;

@end

