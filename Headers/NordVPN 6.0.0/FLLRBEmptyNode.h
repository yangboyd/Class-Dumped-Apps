//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FLLRBNode-Protocol.h"

@class NSNumber, NSString;
@protocol FLLRBNode;

@interface FLLRBEmptyNode : NSObject <FLLRBNode>
{
    id key;
    id value;
    NSNumber *color;
    id <FLLRBNode> left;
    id <FLLRBNode> right;
}

+ (id)emptyNode;
- (void).cxx_destruct;
@property(retain, nonatomic) id <FLLRBNode> right; // @synthesize right;
@property(retain, nonatomic) id <FLLRBNode> left; // @synthesize left;
@property(retain, nonatomic) NSNumber *color; // @synthesize color;
@property(retain, nonatomic) id value; // @synthesize value;
@property(retain, nonatomic) id key; // @synthesize key;
- (int)check;
- (_Bool)isRed;
- (id)maxKey;
- (id)minKey;
- (id)min;
- (_Bool)reverseTraversal:(CDUnknownBlockType)arg1;
- (_Bool)inorderTraversal:(CDUnknownBlockType)arg1;
- (_Bool)isEmpty;
- (int)count;
- (id)remove:(id)arg1 withComparator:(CDUnknownBlockType)arg2;
- (id)insertKey:(id)arg1 forValue:(id)arg2 withComparator:(CDUnknownBlockType)arg3;
- (id)copyWith:(id)arg1 withValue:(id)arg2 withColor:(id)arg3 withLeft:(id)arg4 withRight:(id)arg5;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

