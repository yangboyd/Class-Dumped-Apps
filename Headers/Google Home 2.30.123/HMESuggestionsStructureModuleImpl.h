//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMESuggestionsStructureModule-Protocol.h"

@class NSString;
@protocol GIPAccountID, HMEStructureID, HMESuggestionsData;

@interface HMESuggestionsStructureModuleImpl : NSObject <HMESuggestionsStructureModule>
{
    id <GIPAccountID> _accountID;
    id <HMEStructureID> _structureID;
    CDUnknownBlockType _suggestionsDataInjector;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType suggestionsDataInjector; // @synthesize suggestionsDataInjector=_suggestionsDataInjector;
@property(readonly, nonatomic) id <HMEStructureID> structureID; // @synthesize structureID=_structureID;
@property(readonly, nonatomic) id <GIPAccountID> accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) id <HMESuggestionsData> suggestionsData;
- (id)initWithAccountID:(id)arg1 structureID:(id)arg2 suggestionsData:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

