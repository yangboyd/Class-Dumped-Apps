//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class ASDisplayNode;

@interface ASNodeAncestryEnumerator : NSEnumerator
{
    ASDisplayNode *_lastNode;
    _Bool _initialState;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithNode:(id)arg1;

@end

