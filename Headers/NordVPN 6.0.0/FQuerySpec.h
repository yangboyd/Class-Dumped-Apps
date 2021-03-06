//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class FPath, FQueryParams;

@interface FQuerySpec : NSObject <NSCopying>
{
    FPath *_path;
    FQueryParams *_params;
}

+ (id)defaultQueryAtPath:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FQueryParams *params; // @synthesize params=_params;
@property(retain, nonatomic) FPath *path; // @synthesize path=_path;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)loadsAllData;
- (_Bool)isDefault;
- (id)index;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPath:(id)arg1 params:(id)arg2;

@end

