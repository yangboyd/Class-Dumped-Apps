//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface PDLPrefixTree : NSObject
{
    NSMutableDictionary *_children;
    NSMutableSet *_terminatingIdentifiers;
}

@property(retain, nonatomic) NSMutableSet *terminatingIdentifiers; // @synthesize terminatingIdentifiers=_terminatingIdentifiers;
@property(retain, nonatomic) NSMutableDictionary *children; // @synthesize children=_children;
- (void).cxx_destruct;
- (id)matchTokenPrefix:(id)arg1;
- (void)addToken:(id)arg1 identifier:(id)arg2;
- (id)init;

@end

