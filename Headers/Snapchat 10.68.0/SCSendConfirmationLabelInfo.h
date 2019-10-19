//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSendConfirmationLabelInfo : NSObject <NSCopying>
{
    long long _type;
    double _start;
    double _end;
    NSString *_displayName;
    NSString *_searchKey;
}

@property(readonly, copy, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) double end; // @synthesize end=_end;
@property(readonly, nonatomic) double start; // @synthesize start=_start;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1 start:(double)arg2 end:(double)arg3 displayName:(id)arg4 searchKey:(id)arg5;

@end

