//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSIndexSet;

@interface SCListUpdateModel : NSObject <NSCopying>
{
    NSIndexSet *_insertIndexSet;
    NSIndexSet *_deleteIndexSet;
    NSArray *_updateIndices;
    NSArray *_unchangedIndices;
}

@property(readonly, copy, nonatomic) NSArray *unchangedIndices; // @synthesize unchangedIndices=_unchangedIndices;
@property(readonly, copy, nonatomic) NSArray *updateIndices; // @synthesize updateIndices=_updateIndices;
@property(readonly, copy, nonatomic) NSIndexSet *deleteIndexSet; // @synthesize deleteIndexSet=_deleteIndexSet;
@property(readonly, copy, nonatomic) NSIndexSet *insertIndexSet; // @synthesize insertIndexSet=_insertIndexSet;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInsertIndexSet:(id)arg1 deleteIndexSet:(id)arg2 updateIndices:(id)arg3 unchangedIndices:(id)arg4;

@end

