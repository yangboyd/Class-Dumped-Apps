//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SCV_FLKAutoLayoutPredicateList : NSObject
{
    NSMutableArray *predicates;
}

+ (id)SCV_predicateListFromString:(id)arg1;
- (void).cxx_destruct;
- (id)SCV_predicateExpression;
- (CDStruct_764fe5f2)SCV_defaultPredicate;
- (long long)SCV_relationFromString:(id)arg1;
- (void)SCV_addPredicateFromString:(id)arg1;
- (id)SCV_iteratePredicatesUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

