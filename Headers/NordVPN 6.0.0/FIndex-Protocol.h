//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class FNamedNode, NSString;
@protocol FNode;

@protocol FIndex <NSObject, NSCopying>
- (NSString *)queryDefinition;
- (FNamedNode *)makePost:(id <FNode>)arg1 name:(NSString *)arg2;
- (FNamedNode *)maxPost;
- (FNamedNode *)minPost;
- (_Bool)indexedValueChangedBetween:(id <FNode>)arg1 and:(id <FNode>)arg2;
- (_Bool)isDefinedOn:(id <FNode>)arg1;
- (long long)compareNamedNode:(FNamedNode *)arg1 toNamedNode:(FNamedNode *)arg2;
- (long long)compareKey:(NSString *)arg1 andNode:(id <FNode>)arg2 toOtherKey:(NSString *)arg3 andNode:(id <FNode>)arg4 reverse:(_Bool)arg5;
- (long long)compareKey:(NSString *)arg1 andNode:(id <FNode>)arg2 toOtherKey:(NSString *)arg3 andNode:(id <FNode>)arg4;
@end

