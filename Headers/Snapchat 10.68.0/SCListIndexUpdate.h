//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCListIndexUpdate : NSObject <NSCopying>
{
    unsigned long long _oldIndex;
    unsigned long long _newIndex;
}

@property(readonly, nonatomic) unsigned long long newIndex; // @synthesize newIndex=_newIndex;
@property(readonly, nonatomic) unsigned long long oldIndex; // @synthesize oldIndex=_oldIndex;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOldIndex:(unsigned long long)arg1 newIndex:(unsigned long long)arg2;

@end

