//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FCompoundHash : NSObject
{
    NSArray *_posts;
    NSArray *_hashes;
}

+ (void)processNode:(id)arg1 builder:(id)arg2;
+ (id)fromNode:(id)arg1 splitStrategy:(CDUnknownBlockType)arg2;
+ (id)fromNode:(id)arg1;
+ (CDUnknownBlockType)simpleSizeSplitStrategyForNode:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *hashes; // @synthesize hashes=_hashes;
@property(retain, nonatomic) NSArray *posts; // @synthesize posts=_posts;
- (id)initWithPosts:(id)arg1 hashes:(id)arg2;

@end

