//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FPath;
@protocol FNode;

@interface FTupleNodePath : NSObject
{
    FPath *path;
    id <FNode> node;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <FNode> node; // @synthesize node;
@property(retain, nonatomic) FPath *path; // @synthesize path;
- (id)initWithNode:(id)arg1 andPath:(id)arg2;

@end

