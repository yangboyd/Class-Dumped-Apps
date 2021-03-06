//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WASearchEngineTokenGenerator-Protocol.h"

@class NSArray, NSString;

@interface WAMessageSearchEngineLabelTokenGenerator : NSObject <WASearchEngineTokenGenerator>
{
}

- (Class)contextClass;
- (void)restrictResultsForSearchQuery:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)searchTokensForSearchQueryWord:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSArray *additionalSearchTokenGenerators;
@property(readonly, nonatomic) NSString *columnName;
- (void)tokensForObject:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

